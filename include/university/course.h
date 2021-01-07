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
        std::string name_;
        std::vector<const university::Student *> students_;
        std::vector<const university::Teacher *> teachers_; // di solito ci sono eventuali assistenti collaboratori col prof principale
        std::vector<const university::Lesson *> lessons_;
        int yearOfTheCurrentCourse_;
    public:
        Course(const std::string &name, int year) : name_(name), yearOfTheCurrentCourse_(year) {}

        const std::string &getName() const { return name_; }

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

        const std::vector<const Lesson *> &
        getBiggerListOfLessonsBetweenTwoListsOfLessonsOfTheCourse(const std::vector<const Lesson *> &Lesson) const {
            return ((getListOfLessonOfThisCourse().size() > Lesson.size()) ? getListOfLessonOfThisCourse()
                                                                                 : Lesson);
        }

        const std::vector<const Lesson *> &
        getSmallerListOfLessonsBetweenTwoListsOfLessonsOfTheCourse(const std::vector<const Lesson *> &Lesson) const {
            return ((getListOfLessonOfThisCourse().size() < Lesson.size()) ? getListOfLessonOfThisCourse()
                                                                                 : Lesson);
        }
    };
}

#endif //TPA2020_UNIVERSITYDEGREECOURSE_COURSE_H
