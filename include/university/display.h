//
// Created by nicol on 30/12/2020.
//

#ifndef TPA2020_UNIVERSITYDEGREECOURSE_DISPLAY_H
#define TPA2020_UNIVERSITYDEGREECOURSE_DISPLAY_H

#include <university/course.h>
#include <university/data.h>
#include <university/time.h>

namespace university {
    class Display {
    protected:
        std::vector<const Course *> courses_;
    public:
        Display() {}

        int getCourseSupplied() const { return courses_.size(); }

        void addCourse(const Course &course);

        void displayEverything() const;

        void timeOverlap() const;

        void getCoursesTeachedByTeachers(const std::vector<const Teacher *> &teachers) const;

        void getCoursesTeachedInRoom(const Room &room) const;
    };
}

#endif //TPA2020_UNIVERSITYDEGREECOURSE_DISPLAY_H
