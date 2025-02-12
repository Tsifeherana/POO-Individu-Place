#include "Enseignant.h"

individu::Enseignant::Enseignant(){}
individu::Enseignant::~Enseignant(){}

void individu::Enseignant::afficher_information_Enseignant()
{
    afficher_informationP();
    std::cout << "---- Enseignement ----"<< std::endl;
    std::cout << "enseignant : "<<getEnseignements() << std::endl;
}
void individu::Enseignant::setEnseignements(std::string enseignements)
{
    this->enseignements = enseignements;
}
std::string individu::Enseignant::getEnseignements()
{
    return this->enseignements;
}
void individu::Enseignant::setmon_etablissement(place::Etablissement mon_etablissement)
{
    this->mon_etablissement = mon_etablissement;
}

place::Etablissement individu::Enseignant::getmon_etablissement()
{
    return mon_etablissement;
}