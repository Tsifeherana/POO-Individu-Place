#ifndef HOPITAL_H_INCLUDED
    #define HOPITAL_H_INCLUDED

    #include <vector>
    #include <iostream>
    #include "../Infrastructure/Infrastructure.h"
    #include "../Medecin/Medecin.h"
    
    namespace place
    {
        class Hopital : public Infrastructure
        {
            private:
                std::vector<std::vector<std::string>> list_doctor;
                std::vector<std::string> list_patient;
                std::vector<std::string> list_hopital;
            public:
                Hopital();
                ~Hopital();
                void afficher_listDoctor();
                void afficher_listpatient();
                void afficher_information_hopital();
                void ajouter_patient(individu::Personne personne);
                void ajouter_medecin(individu::Medecin medecin);
        };
    };
#endif