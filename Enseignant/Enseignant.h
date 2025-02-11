#ifndef ENSEIGNENT_H_INCLUDED
    #define ENSEIGNENT_H_INCLUDED

#include "../Personne/Personne.h"
#include <iostream>
#include "../Medecin/Medecin.h"

namespace individu
{
    class Enseignant : public Personne
    {
        private:
            std::string enseignements;
            Medecin mon_medecin;
        public:
            Enseignant();
            ~Enseignant();
            void afficher_information_Enseignant();
            void setEnseignements(std::string enseignements);
            std::string getEnseignements();
    };
};
#endif 