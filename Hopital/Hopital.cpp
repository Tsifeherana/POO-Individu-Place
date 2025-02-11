#include "Hopital.h"

place::Hopital::Hopital(){}
place::Hopital::~Hopital(){}

void place::Hopital::afficher_listDoctor()
{
    std::cout<< "----Nom-------------Spécialité----"<< std::endl;
    for (auto i : list_doctor)
    {
        for (auto j : i)
        {
            std::cout<< j << "      |";
        }
        std::cout<<std::endl;
    }
}
/*à faire à la maison*/
/*void place::Hopital::ajouter_medecin(individu::Personne medecin)
{
    this->list_doctor.push_back();
}*/


void place::Hopital::afficher_listpatient()
{
    std::cout << "----------Nom--------------------"<< std::endl;
    for (auto i : list_patient)
    {
        std::cout << i << std::endl;
    }
    std::cout << "---------------------------------"<< std::endl;
}

void place::Hopital::ajouter_patient(individu::Personne personne)
{
    this->list_patient.push_back(personne.getnom());
}
void place::Hopital::afficher_information_hopital()
{
    afficher_infrsatructure();
}
