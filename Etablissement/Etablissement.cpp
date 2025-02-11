#include "Etablissement.h"
#include "../Etudiant/Etudiant.h"

void place::Etablissement::setnomEtablissement(std::string nomEtablissement)
{
    this->nom_etablissement = nomEtablissement;
}
std::string place::Etablissement::getnomEtablissement()
{
    return nom_etablissement;
}
void place::Etablissement::setadresse(std::string adresse)
{
    this->adresse = adresse;
}
std::string place::Etablissement::getadresse()
{
    return adresse;
}
void place::Etablissement::afficher_etablissement()
{
    std::cout << "nom d'établissement: " << getnomEtablissement() <<std::endl;
    std::cout << "adresse étbalissement : " << getadresse() << std::endl;
}
void place::Etablissement::afficher_liste_etudiant()
{
    std::cout << "------------------ liste des étudiants dans l'établissement" <<getnomEtablissement() <<": ----------------" << std::endl;
    for (auto i : list_etudiant)
    {
        std::cout << "____________________________________________________"<< std::endl;
        std::cout << i << std::endl;
    }
}
void place::Etablissement::ajouter_etudiant(individu::Etudiant student)
{
    this->list_etudiant.push_back(student.getnom());
}