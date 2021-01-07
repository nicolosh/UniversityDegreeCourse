//
// Created by nicol on 31/12/2020.
//

#include "../include/university/data.h"
#include <ctime>
#include <iostream>

namespace university {

    tm *Data::oggi = Data::data_corrente(); //inizializzazione variabile static
// (ESGUITA per UNA volta poi mai più modificata e sarà
// disponibile tutte le volte che creo nel main un oggetto di tipo Data))

    tm *Data::data_corrente() {
        time_t tempo_secondi = time(nullptr);
        return localtime(&tempo_secondi);
    }

    Data::Data(int gg, int mm, int aa) {
        if (valida(gg, mm, aa)) {
            giorno_ = gg;
            mese_ = mm;
            anno_ = aa;
        } else //impostiamo la data corrente
        {
            // tm* oggi = data_corrente(); // posso commentare il metodo data_corrente nei costruttori grazie ai metodi static (vedi inizio .h)
            giorno_ = oggi->tm_mday;
            mese_ = oggi->tm_mon + 1;
            anno_ = oggi->tm_year + 1900;
        }

    }


    Data::Data(const std::string& d) : Data(stoi(d.substr(0, 2)),
                                           stoi(d.substr(3, 2)),
                                           stoi(d.substr(6, 4))) {}

    bool Data::valida(int gg, int mm, int aa) {
        return ((gg >= 1 && gg <= 31) && (mm >= 1 && mm <= 12) && (aa >= 1970));
    }

    std::string Data::formatoBreve() {
        return toString();
    }

    bool Data::operator==(const Data &altra) {
        return giorno_ == altra.giorno_ &&
               mese_ == altra.mese_ &&
               anno_ == altra.anno_;
    }

    bool Data::operator<(const Data &altra) {
        if (anno_ < altra.anno_)
            return true;
        else // >=
        {
            if (mese_ < altra.mese_)
                return true;
            else {
                if (mese_ == altra.mese_ && giorno_ < altra.giorno_)
                    return true;
            }
            return false;
        }
    }

    bool Data::operator>(const Data &altra) {
        return !(*this < altra || *this == altra);
    }

    bool Data::bisestile(int _anno) {
        return ((_anno % 4 == 0 && _anno % 100 != 0)
                || _anno % 400 == 0);
    }

    int Data::giorni_mese(int _mese, int _anno) {
        switch (_mese) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                return 31;
                break;

            case 4:
            case 6:
            case 9:
            case 11:
                return 30;
                break;

            case 2:
                return Data::bisestile(_anno) ? 29 : 28;
                break;

            default:
                return 0;
                break;
        }
    }

    std::string Data::toString() const {
        std::stringstream stream;

        stream << giorno_ << "/" << mese_ << "/" << anno_;
        return stream.str();
    }
}