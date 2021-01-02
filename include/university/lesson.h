//
// Created by nicol on 30/12/2020.
//

#ifndef TPA2020_UNIVERSITYDEGREECOURSE_LESSON_H
#define TPA2020_UNIVERSITYDEGREECOURSE_LESSON_H


#include <university/room.h>
#include <university/data.h>
#include <university/time.h>

namespace university {
    class Lesson {
    protected:
        Room room_;
        Time duration_, initialTime_;
        Data data_;

    public:
        Lesson(const Room &room, const Time& time, const Data &data, const Time &initialTime) : room_(room), duration_(time),
                                                                                        data_(data),
                                                                                        initialTime_(initialTime) {};

        const Room &getRoomOfThisLesson() const { return room_; }

        Data getDataOfThisLesson() const { return data_; }

        Time getInitialTime() const { return initialTime_; }

        Time getTimeOfThisLesson() const { return duration_; }
    };
}

#endif //TPA2020_UNIVERSITYDEGREECOURSE_LESSON_H
