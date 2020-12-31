//
// Created by nicol on 30/12/2020.
//

#ifndef TPA2020_UNIVERSITYDEGREECOURSE_LESSON_H
#define TPA2020_UNIVERSITYDEGREECOURSE_LESSON_H


#include <university/room.h>
#include <university/course.h>

namespace university {
    class Lesson {
    protected:
        Course course_;
        Room room_;
        int duration_;
        //Data data_;
        //Time initialTime_;

    public:
        Lesson(const Course &course, const Room &room, int time) : course_(course), room_(room), duration_(time) {}

        const Course &getCourseOfThisLesson() const { return course_; }

        const Room &getRoomOfThisLesson() const { return room_; }

        int getTimeOfThisLesson() const { return duration_; }
    };
}

#endif //TPA2020_UNIVERSITYDEGREECOURSE_LESSON_H
