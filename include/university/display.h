//
// Created by nicol on 30/12/2020.
//

#ifndef TPA2020_UNIVERSITYDEGREECOURSE_DISPLAY_H
#define TPA2020_UNIVERSITYDEGREECOURSE_DISPLAY_H

#include <university/course.h>

namespace university {
    class Display {
    protected:
        std::vector<const Course *> courses_;
    public:
        Display() {}

        void addCourse(const Course &course);

        void displayEverything() const;

        void getCoursesTeachedByTeachers(const std::vector<const Teacher *> &teachers) const;

        void getCoursesTeachedInRoom(const Room &room) const;
    };
}

#endif //TPA2020_UNIVERSITYDEGREECOURSE_DISPLAY_H
