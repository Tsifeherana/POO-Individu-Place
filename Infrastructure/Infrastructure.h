#ifndef INFRASTRUCTURE_H_INCLUDED
    #define INFRASTRUCTURE_H_INCLUDED

#include <iostream>

namespace place
{
    class Infrastructure
    {
        private:
            std::string nom_batiment;
            float perimetre;
            float surface;
        public:
            Infrastructure();
            ~Infrastructure();
            void afficher_infrsatructure();
            void setNom_batiment(std::string nom_batiment);
            std::string getNom_batiment();
            void setperimetre(float perimetre);
            float getperimetre();
            void setsurface(float surface);
            float getsurface();
    };
};
#endif