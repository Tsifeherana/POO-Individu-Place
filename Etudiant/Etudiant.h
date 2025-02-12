#ifndef ETUDIANT_H_INCLUDED
    #define ETUDIANT_H_INCLUDED

    #include "../Etablissement/Etablissement.h"
    #include "../Personne/Personne.h"
    #include "../Medecin/Medecin.h"

    namespace individu
    {
        class Etudiant: public Personne
        {
            private:
                place::Etablissement mon_etablissement;
                individu::Medecin mon_medecin;
                int numero;
            public:
                Etudiant();
                ~Etudiant();
                void afficher_information();
                place::Etablissement getEtablissement();
                void setEtablissement(place::Etablissement mon_etablissement);
        };
    };

#endif