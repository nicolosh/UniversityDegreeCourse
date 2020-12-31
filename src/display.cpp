//
// Created by nicol on 30/12/2020.
//

#include "../include/university/display.h"


void university::Display::getCoursesTeachedByTeachers(const std::vector<const Teacher *> &teachers) const {
    for (int i = 0; i < courses_.size(); ++i) {
        bool flag = false;
        for (int j = 0; j < courses_[i]->getNumbersOfTeachersOfThisCourse(); ++j) {
            if (
                    (courses_[i]->getListOfTeachersOfThisCourse()[j]->getName() == teachers[j]->getName()) &&
                    (courses_[i]->getListOfTeachersOfThisCourse()[j]->getSurname() == teachers[j]->getSurname()) &&
                    (courses_[i]->getListOfTeachersOfThisCourse()[j]->getFreshMan() == teachers[j]->getFreshMan())
                    ) {
                flag = true;
            }
        }
        if (flag)
            std::cout << "The course of " << courses_[i] << " is teached by your Teachers " << std::endl;
    }
    std::cout << "Cannot find course teached by your teachers ... " << std::endl;
}

void university::Display::getCoursesTeachedInRoom(const Room &room) const {
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
            }

        }
        if (flag)
            std::cout << "The course of " << courses_[i] << " is teached in room " << room.getRoomID() <<
                      "with number of places to sit equals to " << room.getPlacesOfTheRoom() << std::endl;
        else
            std::cout << "Cannot find course teached in your specific room for the list of lessons of this course "
                      << std::endl;
    }
    std::cout << "Cannot find courses teached in your room ..." << std::endl;
}

void university::Display::addCourse(const university::Course &course) {
    courses_.push_back(&course);
}

void university::Display::displayEverything() const {
    for (int i = 0; i < courses_.size(); ++i) {
        courses_[i]->getRoomAssociatedTotheCourse();
        courses_[i]->getTeachersOfThisCourse();
        courses_[i]->getScolasticYear();
        getCoursesTeachedByTeachers(courses_[i]->getListOfTeachersOfThisCourse());
        for (int j = 0; j < courses_[i]->getNumbersOfLessonsOfThisCourse(); ++j) {
            getCoursesTeachedInRoom(courses_[i]->getListOfLessonOfThisCourse()[j]->getRoomOfThisLesson());
        }
    }
}
