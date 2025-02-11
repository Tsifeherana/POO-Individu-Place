#include "Enseignant.h"

individu::Enseignant::Enseignant(){}
individu::Enseignant::~Enseignant(){}

void individu::Enseignant::afficher_information_Enseignant()
{
    afficher_informationP();
    std::cout << "---- Enseignement ----"<< std::endl;
    std::cout << "enseignant : "<<getEnseignements() << std::endl;
    std::cout << "nom du médecin de l'enseignant " << std::endl;
    mon_medecin.afficher_information_Medecin();
}
void individu::Enseignant::setEnseignements(std::string enseignements)
{
    this->enseignements = enseignements;
}
std::string individu::Enseignant::getEnseignements()
{
    return this->enseignements;
}