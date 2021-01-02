//
// Created by nicol on 30/12/2020.
//

#include "../include/university/course.h"

void university::Course::getTeachersOfThisCourse() const {
    for (int i = 0; i < teachers_.size(); ++i) {
        std::cout << "Teacher " << i << "(general info): " << std::endl;
        std::cout << "Name: " << teachers_[i]->getName() << ", Surname: " << teachers_[i]->getSurname()
                  << ", Freshman: " << teachers_[i]->getFreshMan();
        std::cout << std::endl;
    }
}

void university::Course::getRoomsAssociatedToTheCourse() const {
    for (int i = 0; i < lessons_.size(); ++i) {
        std::cout << "Room " << i << " (general info): " << std::endl;
        std::cout << "Data Lesson: " + lessons_[i]->getDataOfThisLesson().formatoBreve() + ", " +
        lessons_[i]->getInitialTime().formatoBreve() + "-" +
        (lessons_[i]->getInitialTime() + lessons_[i]->getTimeOfThisLesson()).formatoBreve()
        +  ", room ID: " + lessons_[i]->getRoomOfThisLesson().getRoomID() +
                  ", numbersOfPlaces: " + std::to_string(lessons_[i]->getRoomOfThisLesson().getPlacesOfTheRoom());
        std::cout << std::endl;
    }
}

void university::Course::addStudentToThisCourse(const university::Student &student) {
    students_.push_back(&student);
}

void university::Course::addTeachersToThisCourse(const std::vector<university::Teacher> &teachers) {
    for (int j = 0; j < teachers.size(); ++j) {
        teachers_.push_back(&teachers[j]);
    }
}

bool university::Course::addLessonToThisCourse(const university::Lesson &lesson) {
    if (lesson.getRoomOfThisLesson().getPlacesOfTheRoom() >= getNumbersOfStudentOfThisCourse() &&
            (lesson.getInitialTime() >= lessons_[lessons_.size() - 1]->getInitialTime() + lessons_[lessons_.size() - 1]->getTimeOfThisLesson())) {
        lessons_.push_back(&lesson);
        return true;
    }
    return false;
}

void university::Course::printInfoStudent() const {
    for (int i = 0; i < students_.size(); ++i) {
        std::cout << "Student " << i << " (general info): ";
        std::cout << "Name: " << students_[i]->getName() << ", Surname: " << students_[i]->getSurname()
                  << ", Freshman: " << students_[i]->getFreshMan();
        std::cout << std::endl;
    }
}
