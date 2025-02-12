#include "Medecin.h"

individu::Medecin::Medecin(){}
individu::Medecin::~Medecin(){}

void individu::Medecin::setSpecialite(std::string specialite)
{
    this->specialite = specialite;
}

std::string individu::Medecin::getSpecialite()
{
    return this->specialite;
}

void individu::Medecin::afficher_information_Medecin()
{
    std::cout <<"--------information sur le médecin----------" << std::endl;
    afficher_informationP();
    std::cout << " spécialité :  " << getSpecialite() <<std::endl;
}