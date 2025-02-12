#include "Hopital.h"

place::Hopital::Hopital(){
    setNom_batiment("none");
    setperimetre(0);
    setsurface(0);
}
place::Hopital::~Hopital(){}

void place::Hopital::afficher_listDoctor()
{
    std::cout<< "----Nom-------------|----------Spécialité----"<< std::endl;
    for (auto i : list_doctor)
    {
        for (auto j : i)
        {
            std::cout<< j << "\t\t   |";
        }
        std::cout<<std::endl;
    }
    std::cout <<std::endl;
}

void place::Hopital::ajouter_medecin(individu::Medecin medecin)
{
    list_doctor.push_back({medecin.getnom(),medecin.getSpecialite()});
}

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
