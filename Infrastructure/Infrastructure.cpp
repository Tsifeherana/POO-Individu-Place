#include "Infrastructure.h"

place::Infrastructure::Infrastructure(){}
place::Infrastructure::~Infrastructure(){}

void place::Infrastructure::afficher_infrsatructure()
{
    std::cout<< "Nom infrastructure :  "<< nom_batiment << std::endl;
    std::cout<< "perimetre : " << perimetre << std::endl;
    std::cout << "surface :" << surface << std::endl;
}