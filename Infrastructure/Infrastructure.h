#ifndef INFRASTRUCTURE_H_INCLUDED
    #define INFRASTRUCTURE_H_INCLUDED

#include <iostream>

namespace place
{
    class Infrastructure
    {
        private:
            std::string nom_batiment;
            int perimetre;
            int surface;
        public:
            Infrastructure();
            ~Infrastructure();
            void afficher_infrsatructure();
    };
};
#endif