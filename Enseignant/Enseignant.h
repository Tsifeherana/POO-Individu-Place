#ifndef ENSEIGNENT_H_INCLUDED
    #define ENSEIGNENT_H_INCLUDED

#include <iostream>
#include "../Medecin/Medecin.h"
#include "../Etablissement/Etablissement.h"

namespace individu
{
    class Enseignant : public Personne
    {
        private:
            std::string enseignements;
            place::Etablissement mon_etablissement;
        public:
            Enseignant();
            ~Enseignant();
            void afficher_information_Enseignant();
            void setEnseignements(std::string enseignements);
            std::string getEnseignements();
            void setmon_etablissement(place::Etablissement mon_etablissement);
            place::Etablissement getmon_etablissement();
            
    };
};
#endif 