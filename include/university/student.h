//
// Created by nicol on 29/12/2020.
//

#ifndef TPA2020_UNIVERSITYDEGREECOURSE_STUDENT_H
#define TPA2020_UNIVERSITYDEGREECOURSE_STUDENT_H


#include <university/person.h>

namespace university {
    class Student : public Person {
    public:
        Student(const std::string &name, const std::string &surname, const std::string &freshman) : Person(name,
                                                                                                           surname,
                                                                                                           freshman) {}
    };
}

#endif //TPA2020_UNIVERSITYDEGREECOURSE_STUDENT_H
