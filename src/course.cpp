//
// Created by nicol on 30/12/2020.
//

#include "../include/university/course.h"

void university::Course::getTeachersOfThisCourse() const {
    for (int i = 0; i < teachers_.size(); ++i) {
        std::cout << "Teacher " << i << "(general info): " << std::endl;
        std::cout << "Name: " << teachers_[i]->getName()/*.toString*/ << ", Surname: " << teachers_[i]->getSurname()
                  << ", Freshman: " << teachers_[i]->getFreshMan();
        std::cout << std::endl;
    }
}

void university::Course::getRoomAssociatedTotheCourse() const {
    for (int i = 0; i < lessons_.size(); ++i) {
        std::cout << "Room " << i << " (general info): " << std::endl;
        std::cout << "ID: " << lessons_[i]->getRoomOfThisLesson().getRoomID()/*.toString*/ <<
                  ", numbersOFPlaces: " << lessons_[i]->getRoomOfThisLesson().getPlacesOfTheRoom();
        std::cout << std::endl;
    }
}

void university::Course::addStudentToThisCourse(const university::Student &student) {
    students_.push_back(&student);
}

void university::Course::addTeachersToThisCourse(const std::vector<Teacher> &teacher) {
    for (int j = 0; j < teacher.size(); ++j) {
        teachers_.push_back(&teacher[j]);
    }
}

void university::Course::addLessonToThisCourse(const university::Lesson &lesson) {
    if (lesson.getRoomOfThisLesson().getPlacesOfTheRoom() >= getNumbersOfStudentOfThisCourse()) {
        lessons_.push_back(&lesson);
        return;
    }

    std::cout << "Lesson associated to its room NOT enough capable " << std::endl;
}

bool university::Course::isThisRoomEnoughCapable() const {
    bool flag = true;
    for (int i = 0; i < lessons_.size(); ++i) {
        if (lessons_[i]->getRoomOfThisLesson().getPlacesOfTheRoom() >= getNumbersOfStudentOfThisCourse())
            flag = true;
    }
    return flag;
}
