//
// Created by nicol on 30/12/2020.
//

#ifndef TPA2020_UNIVERSITYDEGREECOURSE_ROOM_H
#define TPA2020_UNIVERSITYDEGREECOURSE_ROOM_H

#include <string>

namespace university {
    class Room {
    protected:
        const int numberOfplaces_;
        std::string ID_;
    public:
        Room(const std::string &ID, const int N) : ID_(ID), numberOfplaces_(N) {}

        const int getPlacesOfTheRoom() const { return numberOfplaces_; }

        const std::string &getRoomID() const { return ID_; }

    };
}

#endif //TPA2020_UNIVERSITYDEGREECOURSE_ROOM_H
