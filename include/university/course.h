//
// Created by nicol on 30/12/2020.
//

#ifndef TPA2020_UNIVERSITYDEGREECOURSE_COURSE_H
#define TPA2020_UNIVERSITYDEGREECOURSE_COURSE_H

#include <university/teacher.h>
#include <university/student.h>
#include <university/lesson.h>
#include <vector>
#include <iostream>

namespace university {
    class Course {
    protected:
        std::vector<const university::Student *> students_;
        std::vector<const university::Teacher *> teachers_; // di solito ci sono eventuali assistenti collaboratori col prof principale
        std::vector<const university::Lesson *> lessons_;
        int yearOfTheCurrentCourse_;
    public:
        Course(int year) : yearOfTheCurrentCourse_(year) {}

        int getNumbersOfStudentOfThisCourse() const { return students_.size(); }

        int getNumbersOfTeachersOfThisCourse() const { return teachers_.size(); }

        int getNumbersOfLessonsOfThisCourse() const { return lessons_.size(); }

        const std::vector<const Teacher *> &getListOfTeachersOfThisCourse() const { return teachers_; }

        const std::vector<const Student *> &getListOfStudentsOfThisCourse() const { return students_; }

        const std::vector<const Lesson *> &getListOfLessonOfThisCourse() const { return lessons_; }

        void getTeachersOfThisCourse() const;

        void getRoomsAssociatedToTheCourse() const;

        int getScolasticYear() const { return yearOfTheCurrentCourse_; }

        void addStudentToThisCourse(const university::Student &student);

        void addTeachersToThisCourse(const std::vector<university::Teacher> &teachers);

        bool addLessonToThisCourse(const university::Lesson &lesson);

        void printInfoStudent() const;

        const std::vector<const Lesson *> &getBiggerListOfLessonBetweenTwoListOfLessonOfTheCourse(const std::vector<const Lesson *> &Lesson) const {
            return ((this->getListOfLessonOfThisCourse().size() > Lesson.size()) ? this->getListOfLessonOfThisCourse() : Lesson);
        }

        const std::vector<const Lesson *> &getSmallerListOfLessonBetweenTwoListOfLessonOfTheCourse(const std::vector<const Lesson *> &Lesson) const {
            return ((this->getListOfLessonOfThisCourse().size() < Lesson.size()) ? this->getListOfLessonOfThisCourse() : Lesson);
        }
    };
}

#endif //TPA2020_UNIVERSITYDEGREECOURSE_COURSE_H
