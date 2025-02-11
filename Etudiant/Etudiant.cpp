#include "Etudiant.h"

individu::Etudiant::Etudiant()
{}
individu::Etudiant::~Etudiant()
{}
void individu::Etudiant::afficher_information()
{
    afficher_informationP();
    mon_etablissement.afficher_etablissement();
}
void individu::Etudiant::setEtablissement(place::Etablissement mon_etablissement)
{
    this->mon_etablissement = mon_etablissement;
}
place::Etablissement individu::Etudiant::getEtablissement()
{
    return this->mon_etablissement;
}