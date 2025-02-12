#include "Etablissement.h"
#include "../Etudiant/Etudiant.h"
#include "../Enseignant/Enseignant.h"

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
    int count = 1;
    std::cout << "------------------ liste des étudiants dans l'établissement" <<getnomEtablissement() <<": ----------------" << std::endl;
    for (auto i : list_etudiant)
    {
        std::cout << "\t=============================================="<< std::endl;
        std::cout << "\t|" <<count<<" |" <<i <<"\t\t\t\t      |" <<std::endl;
        count++;
    }
}

void place::Etablissement::afficher_liste_enseignent()
{
    int count = 1;
    std::cout << "------------------ liste des enseignants dans l'établissement" <<getnomEtablissement() <<": ----------------" << std::endl;
    std::cout << "-----NOM ENSEIGNANT-----------------ENSEIGNEMENTS----------------------------------" << std::endl;
    for (auto i : list_enseignent)
    {
        for (auto j : i)
        {
            std::cout << "\t=============================================="<< std::endl;
            std::cout << "\t|" <<count<<" |" <<j <<"\t\t\t\t      |" <<std::endl;
            count++;
        }
    }
}

void place::Etablissement::ajouter_etudiant(individu::Etudiant student)
{
    this->list_etudiant.push_back(student.getnom());
}
void place::Etablissement::ajouter_enseignant(individu::Enseignant enseignant)
{
    this->list_enseignent.push_back({enseignant.getnom(),enseignant.getEnseignements()});
}