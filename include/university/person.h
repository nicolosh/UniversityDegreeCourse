//
// Created by nicol on 29/12/2020.
//

#ifndef TPA2020_UNIVERSITYDEGREECOURSE_PERSON_H
#define TPA2020_UNIVERSITYDEGREECOURSE_PERSON_H

#include <string>

namespace university {
    class Person {
    protected:
        std::string name_, surname_;
    public:
        Person(const std::string &name, const std::string &surname) : name_(name), surname_(surname) {}

        const std::string &getName() const { return name_; }

        const std::string &getSurname() const { return surname_; }
    };
}

#endif //TPA2020_UNIVERSITYDEGREECOURSE_PERSON_H
