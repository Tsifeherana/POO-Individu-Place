#include "Personne.h"

individu::Personne::Personne(){}
individu::Personne::~Personne(){}

void individu::Personne::afficher_informationP()
{
    std::cout << "nom : " << nom <<std::endl;
    std::cout << "prenom : " << prenom << std::endl;
    std::cout << "age: " << age <<std::endl;
    std::cout << "adresse : " << lot <<std::endl;
    std::cout << "poids : " << poids <<std::endl;
    std::cout << "longueur : " << longueur <<std::endl;
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