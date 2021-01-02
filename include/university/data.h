//
// Created by nicol on 31/12/2020.
//

#ifndef TPA2020_UNIVERSITYDEGREECOURSE_DATA_H
#define TPA2020_UNIVERSITYDEGREECOURSE_DATA_H

#include <string>

namespace university {
    class Data {

        // INTERFACCIA / INTERFACE
    public:
        Data(int gg, int mm, int aa);

        Data(const std::string &d);//riceve data in tipo stringa

        //operatori overloading
        bool operator==(const Data &altra);

        bool operator<(const Data &);

        bool operator>(const Data &);

        std::string formatoBreve();

        int get_giorno() const { return giorno_; };

        int get_mese() const { return mese_; };

        int get_anno() const { return anno_; };

        static tm *data_corrente();

        bool valida(int gg, int mm, int aa);

        // IMPLEMENTATION
    protected:
        //int giorno = 1, mese = 1, anno = 1970;
        int giorno_{oggi->tm_mday};
        int mese_{oggi->tm_mon + 1};
        int anno_{oggi->tm_year + 1900};
        static tm *oggi; // variabile di classe (di nessun oggetto in particolare)
        // condivisa tra le istanze (oggetti) di tipo Data
        // Le variabili e metodi static posso essere usati anche senza prima
        // dover creare un oggetto su cui con . o -> andremo a recuperare la variabile o il metodo
        static bool bisestile(int);

        static int giorni_mese(int, int);
    };
}

#endif //TPA2020_UNIVERSITYDEGREECOURSE_DATA_H
