#ifndef ETABLISSEMENT_H_INCLUDED
    #define ETABLISSEMENT_H_INCLUDED

    //#include "../Etudiant/Etudiant.h"
    #include <vector>
    #include "../Infrastructure/Infrastructure.h"
    
    namespace individu
    {
        class Etudiant;
    };

    namespace place
    {
        class Etablissement : public Infrastructure
        {
            private:
                std::string nom_etablissement;
                std::string adresse;
                std::vector<std::string> list_etudiant;
            public:
                void afficher_etablissement();
                void setnomEtablissement(std::string nomEtablissement);
                std::string getnomEtablissement();
                void setadresse(std::string adresse);
                std::string getadresse();
                void afficher_liste_etudiant();
                void ajouter_etudiant(individu::Etudiant student);
        };
    };

#endif