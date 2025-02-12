#include "Personne.h"

individu::Personne::Personne(){}
individu::Personne::~Personne(){}

void individu::Personne::afficher_informationP()
{
    std::cout<<"==================================== "<<std::endl;
    std::cout << "\tnom : " << nom <<std::endl;
    std::cout << "\tprenom : " << prenom << std::endl;
    std::cout << "\tage: " << age <<std::endl;
    std::cout << "\tadresse : " << lot <<std::endl;
    std::cout << "\tpoids : " << poids <<std::endl;
    std::cout << "\tlongueur : " << longueur <<std::endl;
    std::cout<<"==================================== "<<std::endl<<std::endl;
}

void individu::Personne::setnom(std::string nom)
{
    this->nom = nom;
}
std::string individu::Personne::getnom()
{
    return this->nom;
}
void individu::Personne::setprenom(std::string prenom)
{
    this->prenom = prenom;
}
std::string individu::Personne::getprenom()
{
    return this->prenom;
}
void individu::Personne::setlot(std::string lot)
{
    this->lot = lot;
}
std::string individu::Personne::getlot()
{
    return this->lot;
}
void individu::Personne::setage(int age)
{
    this->age = age;
}
int individu::Personne::getage()
{
    return this->age;
}
void individu::Personne::setpoids(float poids)
{
    this->poids = poids;
}
float individu::Personne::getpoids()
{
    return this->poids;
}
void individu::Personne::setlongueur(float longueur)
{
    this->longueur = longueur;
}
float individu::Personne::getlongueur()
{
    return this->longueur;
}