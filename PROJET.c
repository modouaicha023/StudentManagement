#include <stdio.h>
#include <string.h>
#include "fonction.h"

int main()
{
    char choix;

    do
    {
        switch (menu())
        {
        case 1:
            liste_matiere();
            break;
        case 2:
            creer_etudiant();
            break;
        case 3:
            liste_etudiant();
            break;
        case 4:
            afficheBulletin();
            break;
        default:
            printf("\n Choix indisponible \n");
            break;
        }
        printf("\nVoulez-vous retourner au Menu? (y = Oui) : ");
        scanf("%c", &choix);

    } while (getchar() == 'y');

    return 0;
}
