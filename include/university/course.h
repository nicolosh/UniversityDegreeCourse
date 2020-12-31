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
        std::vector<const Student *> students_;
        std::vector<const Teacher *> teachers_; // di solito ci sono eventuali assistenti collaboratori col prof principale
        std::vector<const Lesson *> lessons_;
        std::string yearOfTheCurrentCourse_;
    public:
        Course(const std::string &year) : yearOfTheCurrentCourse_(year) {}

        int getNumbersOfStudentOfThisCourse() const { return students_.size(); }

        int getNumbersOfTeachersOfThisCourse() const { return teachers_.size(); }

        int getNumbersOfLessonsOfThisCourse() const { return lessons_.size(); }

        const std::vector<const Teacher *> &getListOfTeachersOfThisCourse() const { return teachers_; }

        const std::vector<const Student *> &getListOfStudentsOfThisCourse() const { return students_; }

        const std::vector<const Lesson *> &getListOfLessonOfThisCourse() const { return lessons_; }

        void getTeachersOfThisCourse() const;

        void getRoomAssociatedTotheCourse() const;

        const std::string &getScolasticYear() const { return yearOfTheCurrentCourse_; }

        void addStudentToThisCourse(const Student &student);

        void addTeachersToThisCourse(const std::vector<Teacher> &teacher);

        void addLessonToThisCourse(const Lesson &lesson);

        bool isThisRoomEnoughCapable() const;


        //PRINT() ???
    };
}

#endif //TPA2020_UNIVERSITYDEGREECOURSE_COURSE_H
