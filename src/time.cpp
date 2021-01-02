//
// Created by nicol on 01/01/2021.
//

#include "../include/university/time.h"

namespace university {
    bool Time::valideHour(int hour, int minute, int second) {
        return ((hour >= 1 && hour <= 24) && (minute >= 1 && minute <= 60) && (second >= 1 && second <= 60));
    }

    Time::Time(int hour, int minute, int second) {
        if (valideHour(hour, minute, second)) {
            hour_ = hour;
            minute_ = minute;
            second_ = second;
        }
        /*
         * else //impostiamo l'orario corrente
        {
            hour_ = oggi->tm_hour;
            minute_ = oggi->tm_min;
            second_ = oggi->tm_sec;
        }
         */
    }

    std::string Time::formatoBreve() {
        return std::to_string(hour_) + ":" + std::to_string(minute_) + ":" + std::to_string(second_);
    }

    bool Time::operator>(const Time &time) {
        if (hour_ > time.getHour())
            return true;
        else // <=
        {
            if (minute_ > time.getMinute())
                return true;
            else {
                if (minute_ == time.getMinute() && second_ > time.getSecond())
                    return true;
            }
            return false;
        }
    }

    Time::Time(const std::string &d) : Time(stoi(d.substr(0, 2)),
                                            stoi(d.substr(3, 2)),
                                            stoi(d.substr(6, 2))) {}

    Time Time::operator+(const Time &time) {
        //implemento solo per orari con hours e minutes
        Time res;
        res.hour_= hour_ + time.hour_;
        res.minute_= minute_ + time.minute_;

        if(minute_ + time.minute_ >= 60)
        {
            res.hour_++;
            res.minute_ = abs(minute_ - time.minute_);
        }
        return res;
    }

    bool Time::operator==(const Time &time) {
        return (second_ == time.second_ && minute_ == time.minute_ && hour_ == time.hour_);
    }

    bool Time::operator<(const Time &time) {
        return !(*this > time || *this == time);
    }

    bool Time::operator>=(const Time &time) {
        return (*this == time || *this > time);
    }

    bool Time::operator<=(const Time &time) {
        return (*this == time || *this < time);
    }

    Time Time::getTimeMax(const Time &timeB) const {
        if (hour_ > timeB.getHour())
            return *this;
        else // <=
        {
            if (minute_ > timeB.getMinute())
                return *this;
            else
            {
                if (minute_ == timeB.getMinute() && second_ > timeB.getSecond())
                    return *this;
            }
            return Time(timeB.getHour(), timeB.getMinute(), timeB.getSecond());
        }
    }

    Time Time::getTimeMin(const Time &timeB) const {
        if (hour_ < timeB.getHour())
            return *this;
        else // >=
        {
            if (minute_ < timeB.getMinute())
                return *this;
            else
            {
                if (minute_ == timeB.getMinute() && second_ < timeB.getSecond())
                    return *this;
            }
            return Time(timeB.getHour(), timeB.getMinute(), timeB.getSecond());
        }
    }

}