#ifndef MAIN_H_INCLUDED
    #define MAIN_H_INCLUDED
    #include "Enseignant/Enseignant.h"
    #include "Etablissement/Etablissement.h"
    #include "Etudiant/Etudiant.h"
    #include "Hopital/Hopital.h"
    #include "Infrastructure/Infrastructure.h"
    #include "Medecin/Medecin.h"
    #include "Personne/Personne.h"

    int main()
    {
        individu::Etudiant p1;
        p1.setnom("Rakoto");
        p1.setprenom("Rabe");
        p1.setage(16);
        p1.setlot("IPP 12ITF");
        p1.setpoids(56.2);
        p1.setlongueur(1.71);
        place::Etablissement etab1;
        etab1.setnomEtablissement("LJRA");
        etab1.setadresse("LOT ITF 46");
        etab1.ajouter_etudiant(p1);
        p1.setEtablissement(etab1);
        p1.afficher_information();
        etab1.afficher_liste_etudiant();
        return (0);
    }
#endif