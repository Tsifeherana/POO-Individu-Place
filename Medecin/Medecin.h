#ifndef MEDECIN_H_INCLUDED
    #define MEDECIN_H_INCLUDED

#include "../Personne/Personne.h"
#include "../Hopital/Hopital.h"
namespace individu
{
    class Medecin : public Personne
    {
        private:
            std::string specialite;
        public:
            Medecin();
            ~Medecin();
            void setSpecialite(std::string specialite);
            std::string getSpecialite();
            void afficher_information_Medecin();
    };
};
#endif