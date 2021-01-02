//
// Created by nicol on 30/12/2020.
//

#include "../include/university/display.h"


void university::Display::getCoursesTeachedByTeachers(const std::vector<const Teacher *> &teachers) const {
    bool found = false;
    for (int i = 0; i < courses_.size() && !found; ++i) {
        bool flag = false;
        for (int j = 0; j < courses_[i]->getNumbersOfTeachersOfThisCourse(); ++j) {
            if (
                    (courses_[i]->getListOfTeachersOfThisCourse()[j]->getName() == teachers[j]->getName()) &&
                    (courses_[i]->getListOfTeachersOfThisCourse()[j]->getSurname() == teachers[j]->getSurname()) &&
                    (courses_[i]->getListOfTeachersOfThisCourse()[j]->getFreshMan() == teachers[j]->getFreshMan())
                    ) {
                flag = true;
                found = true; // almeno un corso trovato
            }
        }
        if (flag) {
            std::cout << "The course of " << courses_[i] << " is teached by your Teachers: ";
            courses_[i]->getTeachersOfThisCourse(); // stampo info
        }
    }
    if (!found)
        std::cout << "Cannot find course teached by your teachers ... " << std::endl;
}

//ipotizzo che si parla di una triennale e quindi ogni professore o lista di professori insegnano 1 corso
// se così non fosse tolgo !found nel primo ciclo

void university::Display::getCoursesTeachedInRoom(const Room &room) const {
    bool found = false;
    for (int i = 0; i < courses_.size(); ++i) {
        bool flag = false;
        for (int j = 0; j < courses_[i]->getNumbersOfLessonsOfThisCourse() && !flag; ++j) {
            if (
                    (courses_[i]->getListOfLessonOfThisCourse()[j]->getRoomOfThisLesson().getRoomID() ==
                     room.getRoomID()) &&
                    (courses_[i]->getListOfLessonOfThisCourse()[j]->getRoomOfThisLesson().getPlacesOfTheRoom() ==
                     room.getPlacesOfTheRoom())
                    ) {
                flag = true;
                found = true;
            }

        }
        if (flag)
            std::cout << "The course of " << courses_[i] << " is teached in room " << room.getRoomID() <<
                      "with number of places to sit equals to " << room.getPlacesOfTheRoom() << std::endl;
    }
    if (!found)
        std::cout << "Cannot find courses teached in your room " << room.getRoomID() << std::endl;
}

void university::Display::addCourse(const university::Course &course) {
    courses_.push_back(&course);
}

void university::Display::displayEverything() const {
    for (int i = 0; i < courses_.size(); ++i) {
        std::cout << "Course " << i << "(Info): " << std::endl;
        courses_[i]->getScolasticYear();
        courses_[i]->getRoomsAssociatedToTheCourse();
        courses_[i]->getTeachersOfThisCourse();
        courses_[i]->printInfoStudent();
        std::cout << std::endl;
        getCoursesTeachedByTeachers(courses_[i]->getListOfTeachersOfThisCourse());
        for (int j = 0; j < courses_[i]->getNumbersOfLessonsOfThisCourse(); ++j) {
            getCoursesTeachedInRoom(courses_[i]->getListOfLessonOfThisCourse()[j]->getRoomOfThisLesson());
        }
    }
}

void university::Display::timeOverlap() const {
    // no sovrapposizioni temporali
    bool found = false;
    for (int j = 0; j < courses_.size() - 1; ++j) {
        std::vector<const Lesson *> lessonJ = courses_[j]->getListOfLessonOfThisCourse();
        for (int k = j + 1; k < courses_.size(); ++k) {
            if (courses_[j]->getScolasticYear() == courses_[k]->getScolasticYear()) {
                std::vector<const Lesson *> lessonK = courses_[k]->getListOfLessonOfThisCourse();

                int massimo = ((lessonJ.size() > lessonK.size())? lessonJ.size() : lessonK.size());
                int minimo = ((lessonJ.size() < lessonK.size())? lessonJ.size() : lessonK.size());

                std::vector<const Lesson *> majorList = courses_[j]->getBiggerListOfLessonBetweenTwoListOfLessonOfTheCourse(lessonK);
                std::vector<const Lesson *> minorList = courses_[j]->getSmallerListOfLessonBetweenTwoListOfLessonOfTheCourse(lessonK);

                for (int l = 0; l < massimo; ++l) {
                    for (int m = 0; m < minimo; ++m) {
                        if (majorList[l]->getDataOfThisLesson() == minorList[m]->getDataOfThisLesson()) {
                            Time major = majorList[l]->getInitialTime().getTimeMax(minorList[m]->getInitialTime());
                            Time minor = majorList[l]->getInitialTime().getTimeMin(minorList[m]->getInitialTime());
                            if ((major > minor) && major < minor + minorList[m]->getTimeOfThisLesson()) {
                                found = true;

                                std::cout << "Found timeoverlap for the lessons of the courses of the " <<
                                          courses_[j]->getScolasticYear() << " scolastic Year: " << std::endl;
                                std::cout << "Lesson of course " << courses_[j] << "and the one of the course "
                                          << courses_[k];
                                std::cout << "respectively with the following data: ";
                                majorList[l]->getDataOfThisLesson().formatoBreve() + ", " + majorList[l]->getRoomOfThisLesson().getRoomID() +
                                "/n" + minorList[m]->getDataOfThisLesson().formatoBreve() + ", " + minorList[m]->getRoomOfThisLesson().getRoomID()
                                + "starting respectively at " + majorList[l]->getInitialTime().formatoBreve() +
                                "and " + minorList[m]->getInitialTime().formatoBreve();
                                std::cout << std::endl;
                            }
                        }
                    }
                }
            }
        }
    }
    if(!found)
        std::cout << "No timeoverlaps found, everything works clear " << std::endl;
}
