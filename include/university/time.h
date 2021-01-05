//
// Created by nicol on 01/01/2021.
//

#ifndef TPA2020_UNIVERSITYDEGREECOURSE_TIME_H
#define TPA2020_UNIVERSITYDEGREECOURSE_TIME_H

#include <iostream>
#include <math.h>

namespace university {
    class Time {
    protected:
        //static tm *oggi; // variabile di classe (di nessun oggetto in particolare)
        // condivisa tra le istanze (oggetti) di tipo Data
        // Le variabili e metodi static posso essere usati anche senza prima
        int hour_;
        int minute_;
        int second_;
    public:
        Time() {};

        explicit Time(int hour, int minute, int second = 0);

        Time(const std::string &d);//riceve data in tipo stringa

        //operatori overloading
        bool operator==(const Time &time);

        bool operator<(const Time &time);

        bool operator>=(const Time &time);

        bool operator<=(const Time &time);

        bool operator>(const Time &time);

        Time operator+(const Time &time);

        Time getTimeMax(const Time &timeB) const;

        Time getTimeMin(const Time &timeB) const;

        std::string formatoBreve();

        int getHour() const { return hour_; };

        int getMinute() const { return minute_; };

        int getSecond() const { return second_; };

        bool valideHour(int hour, int minute, int second);
    };
}

#endif //TPA2020_UNIVERSITYDEGREECOURSE_TIME_H
