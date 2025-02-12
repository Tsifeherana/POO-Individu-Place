#include "Infrastructure.h"

place::Infrastructure::Infrastructure(){}
place::Infrastructure::~Infrastructure(){}

void place::Infrastructure::afficher_infrsatructure()
{
    std::cout<< "Nom infrastructure :  "<< nom_batiment << std::endl;
    std::cout<< "perimetre : " << perimetre << std::endl;
    std::cout << "surface :" << surface << std::endl;
}
void place::Infrastructure::setNom_batiment(std::string nom_batiment)
{
    this->nom_batiment = nom_batiment;
}
std::string place::Infrastructure::getNom_batiment()
{  
    return nom_batiment;
}
void place::Infrastructure::setperimetre(float perimetre)
{
    this->perimetre = perimetre;
}
float place::Infrastructure::getperimetre()
{
    return perimetre;
}
void place::Infrastructure::setsurface(float surface)
{
    this->surface = surface;
}
float place::Infrastructure::getsurface()
{
    return surface;
}
