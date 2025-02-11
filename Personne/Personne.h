#ifndef PERSONNE_H_INCLUDED
    #define PERSONNE_H_INCLUDED
#include <iostream>
namespace individu
{
    class Personne
    {
        private:
            std::string nom;
            std::string prenom;
            int age;
            std::string lot;
            int poids;
            int longueur;
        public:
            Personne();
            ~Personne();
            
            //setter and getter
            void setnom(std::string nom);
            void setprenom(std::string prenom);
            void setlot(std::string lot);
            void setage(int age);
            void setpoids(float poids);
            void setlongueur(float longueur);
            std::string getnom();
            std::string getprenom();
            std::string getlot();
            int getage();
            float getpoids();
            float getlongueur();
    
            void afficher_informationP();
    };
};
#endif