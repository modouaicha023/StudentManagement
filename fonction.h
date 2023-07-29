#include<stdio.h>
#include<string.h>
typedef struct 
{
    char nom[100];
    char prenom[100];
    char ddn[100];
    char ldn[100];
    char decision[100];
    float matiere1;
    float matiere2;
    float matiere3;
    float matiere4;
    float matiere5;
    float matiere6;
    float matiere7;
    float matiere8;
    float matiere9;
    float matiere10;
    float matiere11;
    float matiere12;
    float UE1;
    float UE2;
    float UE3;
    float UE4;
    float UE5;
    float moyenne;
} etudiant;
typedef etudiant classe[200];


classe DSTI;
    int n,i,num,x,y,option,opt;
    char decision[20];
    //char classe[7]="DSTI1D";
    int z=0;
int menu()
{
    int option;
    printf("******************************************************************************************************************************************************************      \n");
    printf(" \n");
    printf("+--------------------------------------------------------------------------------------+\n");
    printf("|                                 MENU PRINCIPAL                                       |\n");
    printf("+--------------------------------------------------------------------------------------+\n");
    printf("+--------------------------------------------------------------------------------------+\n");
    printf("|     OPTION       |                         ACTION(S)                                 |\n");
    printf("+--------------------------------------------------------------------------------------+\n");
    printf("|       1          |    Afficher la liste des matiéres et les professeurs responsables |\n");
    printf("|       2          |    Ajouter des etudiants et leurs notes                           |\n");
    printf("|       3          |    Afficher la liste des étudiants                                |\n");
    printf("|       4          |    Afficher le bulletin d'un étudiant                             |\n");
    printf("+--------------------------------------------------------------------------------------+\n");
    printf(" Choix de l'option : ");
    scanf("%d", &option);
    printf(" \n");
    printf(" \n");
    return option;

}
void liste_matiere()
{
    printf("Voici la liste des matiére\n");
    printf("+-------------------------------------------+-------------------------+\n");
    printf("|                 MATIERE                   |  PROFESSEURS            |\n");
    printf("+-------------------------------------------+-------------------------+\n");
    printf("|  Approfondissement en langage C           |   M.  BOUBABCAR FATY    |\n");
    printf("|  Algorithme et structures de données      |   Dr J. N. R. BILONG    |\n");
    printf("|  Introduction aux SGBD                    |   Dr Mouhamed DIOP      |\n");
    printf("|  Programmation Front-end                  |   Dr Mouhamed DIOP      |\n");
    printf("|  Technologie des ordinateurs              |   Pr Idy DIOP           |\n");
    printf("|  Architecture des Réseaux                 |   Pr Ibrahima NGOM      |\n");
    printf("|  Systéme d'exploitation 1                 |   M. Babacar FALL       |\n");
    printf("|  Analyse                                  |   Dr Daouda FAYE        |\n");
    printf("|  Probabilité                              |   M. Omar FALL          |\n");
    printf("|  Economie d'entreprise                    |   M. P. Ibrahima FAYE   |\n");
    printf("|  Technique d'expression                   |   M. P. Dane DIOUF      |\n");
    printf("|  Anglais: Technique d'expression          |   M. Ndongo WADE        |\n");
    printf("+-------------------------------------------+-------------------------+\n");

    printf(" \n");
    printf(" \n");
}
 void creer_etudiant()
 {
    int n;
    do
            {
                printf("Donnez le nombre d'étudiants dont vous voulez enregistrer leurs notes\n");
                scanf("%d", &n);
            }   while (n<=0 || n>200);


            for (i=0; i<n; i++)
            {   
                /* Donnée personnelle de l'étudiant */
                printf("Etudiant numéro %d\n",i+1);
                printf("Donnez le nom de l'étudiant : ");
                scanf("%s", DSTI[i].nom);
                printf("Donnez le prenom de l'étudiant : ");
                scanf("%s", DSTI[i].prenom);
                printf("Donnez la date de naissance de l'étudiant : "); 
                scanf("%s", DSTI[i].ddn);
                printf("Donnez le lieu de naissance de l'étudiant : ");
                scanf("%s", DSTI[i].ldn);

                /* Les notes de l'étudiant */
                printf("Donnez la note de l'étudiant en Approfondissement en langage C : ");
                scanf("%f", &DSTI[i].matiere1);
                while (DSTI[i].matiere1 >20 || DSTI[i].matiere1<0)
                {
                    printf("Donnez une moyenne valable\n");
                    scanf("%f", &DSTI[i].matiere1 );   
                } 
            
                printf("Donnez la note de l'étudiant en Algorithme et structures de données : ");
                scanf("%f", &DSTI[i].matiere2);
                while (DSTI[i].matiere2 >20 || DSTI[i].matiere2<0)
                {
                    printf("Donnez une moyenne valable\n");
                    scanf("%f", &DSTI[i].matiere2 );   
                } 
            
                printf("Donnez la note de l'étudiant en Introduction aux SGBD : ");
                scanf("%f", &DSTI[i].matiere3);
                while (DSTI[i].matiere3 >20 || DSTI[i].matiere3 <0)
                {
                    printf("Donnez une moyenne valable\n");
                    scanf("%f", &DSTI[i].matiere3 );   
                } 

                printf("Donnez la note de l'étudiant en Programmation Front-end: ");
                scanf("%f", &DSTI[i].matiere4);
                while (DSTI[i].matiere4 >20 || DSTI[i].matiere4 <0)
                {
                    printf("Donnez une moyenne valable\n");
                    scanf("%f", &DSTI[i].matiere4 );   
                } 
            
                printf("Donnez la note de l'étudiant en Technologie des ordinateurs : ");
                scanf("%f", &DSTI[i].matiere5);
                while (DSTI[i].matiere5 >20 || DSTI[i].matiere5 <0)
                {
                    printf("Donnez une moyenne valable\n");
                    scanf("%f", &DSTI[i].matiere5 );   
                } 

                printf("Donnez la note de l'étudiant en Architecture des Réseaux: ");
                scanf("%f", &DSTI[i].matiere6);
                while (DSTI[i].matiere6 >20 || DSTI[i].matiere6 <0)
                {
                    printf("Donnez une moyenne valable\n");
                    scanf("%f", &DSTI[i].matiere6 );   
                } 

                printf("Donnez la note de l'étudiant en Systéme d'exploitation 1: ");
                scanf("%f", &DSTI[i].matiere7);
                while (DSTI[i].matiere7 >20 || DSTI[i].matiere7 <0)
                {
                    printf("Donnez une moyenne valable\n");
                    scanf("%f", &DSTI[i].matiere7 );   
                } 

                printf("Donnez la note de l'étudiant en Analyse : ");
                scanf("%f", &DSTI[i].matiere8);
                while (DSTI[i].matiere8 >20 || DSTI[i].matiere8 <0)
                {
                    printf("Donnez une moyenne valable\n");
                    scanf("%f", &DSTI[i].matiere8 );   
                } 

                printf("Donnez la note de l'étudiant en Probabilité: ");
                scanf("%f", &DSTI[i].matiere9);
                while (DSTI[i].matiere9 >20 || DSTI[i].matiere9 <0)
                {
                    printf("Donnez une moyenne valable\n");
                    scanf("%f", &DSTI[i].matiere9 );   
                } 

                printf("Donnez la note de l'étudiant en Economie d'entreprise: ");
                scanf("%f", &DSTI[i].matiere5);
                while (DSTI[i].matiere10 >20 || DSTI[i].matiere10 <0)
                {
                    printf("Donnez une moyenne valable\n");
                    scanf("%f", &DSTI[i].matiere10 );   
                } 

                printf("Donnez la note de l'étudiant en Technique d'expression: ");
                scanf("%f", &DSTI[i].matiere11);
                while (DSTI[i].matiere11>20 || DSTI[i].matiere11<0)
                {
                    printf("Donnez une moyenne valable\n");
                    scanf("%f", &DSTI[i].matiere11 );   
                } 

                printf("Donnez la note de l'étudiant en Anglais: Technique d'expression : ");
                scanf("%f", &DSTI[i].matiere12);
                while (DSTI[i].matiere12>20 || DSTI[i].matiere12<0)
                {
                    printf("Donnez une moyenne valable\n");
                    scanf("%f", &DSTI[i].matiere12 );   
                }  
            
                DSTI[i].UE1 = (DSTI[i].matiere1 + DSTI[i].matiere2)/2;
                DSTI[i].UE2 = ((DSTI[i].matiere3*2) + DSTI[i].matiere4)/3;
                DSTI[i].UE3 = (DSTI[i].matiere5 + DSTI[i].matiere6 + DSTI[i].matiere7)/3;
                DSTI[i].UE4 = (DSTI[i].matiere8*3 + DSTI[i].matiere9*2)/5;
                DSTI[i].UE5 = (DSTI[i].matiere10 + DSTI[i].matiere11 + DSTI[i].matiere12)/3;
                DSTI[i].moyenne = (DSTI[i].UE1  + DSTI[i].UE2 + DSTI[i].UE3 + DSTI[i].UE4 + DSTI[i].UE5)/5;
            
                /* La décision suite au conseil des classes */
                if (DSTI[i].moyenne >=10)
                    strcpy(decision,"L'éleve passe");
                else
                    strcpy(decision,"L'éleve double");
                printf(" \n");

                }
            
            printf(" \n");
 }

void liste_etudiant()
{
    int i;
    if (strlen(DSTI[0].nom)== 0 &&  strlen(DSTI[0].prenom)==0)
                {
                    printf("Il n'y a pas d'éléves pour le moment\n");
                    printf(" \n");
                    
                }
                else
                {  
                printf("+---------+----------------------------------------------+\n");
                printf("| NUMERO  |            PRENOM & NOM                      |\n");
                printf("+---------+----------------------------------------------+\n");
                
                for (i= 0; i<n; i++)
                {
                printf("+---------+----------------------------------------------+\n");
                printf("    %d     |     %s     %s                                \n",i+1,DSTI[i].prenom,DSTI[i].nom);
                printf("+---------+----------------------------------------------+\n");
                }
                }
}
void afficheBulletin()
{
        printf("Donnez le numéro de l'etudiant dont vous voulez voir le bulletin : ");
        scanf("%d",&x);
        printf("\n");
        x=x-1;
        
        do
        {

        printf("    +---------------------------------------------------------------------------------------------------------------------------------------------------------------------------+\n");
        printf("                                                                        UNIVERSITÉ CHEIKH ANTA DIOP DE DAKAR                                                                     \n");
        printf("                                                                            ECOLE SUPÉRIEURE POLYTECHNIQUE                                                                       \n");
        printf("                                                                            DEPARTEMENT GÉNIE INFORMATIQUE                                                                       \n");
        printf("                                                             B.P:15915 - FIXE: 33 825 75 28 - Email : secretariat-dgi@esp.sn                                                     \n");
        printf("    +---------------------------------------------------------------------------------------------------------------------------------------------------------------------------+\n");
        printf("                                                                                                                                                 Année Universitaire: 2021-2022  \n");
        printf("                                                                    DIPLÔME UNIVERSITAIRE DE TECHNOLOGHIE EN INFORMATIQUE                                                        \n");
        printf("                                                                                PREMIERE ANNÉE (L1)                                                                              \n");
        printf("                                                                                RELEVÉ DE NOTES                                                                                  \n");
        printf("    +---------------------------------------------------------------------------------------------------------------------------------------------------------------------------+\n");
        printf("      NOM : %s\n",DSTI[x].nom);
        printf("      PRÉNOM : %s\n",DSTI[x].prenom);
        printf("      CLASSE : DSTI1D\n");
        printf("      DATE ET LIEU DE NAISSANCE : %s à %s\n",DSTI[x].ddn,DSTI[x].ldn);
        printf("    ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
        printf("    +---------------------------------------------------------------------------------------------------+---------------------------------+------------------------------------+\n");
        printf("      ALGORITHME ET PROGRAMMATION                                                                       |         COEFFICIENT             |        MOYENNE/20                   \n");
        printf("    ----------------------------------------------------------------------------------------------------+---------------------------------+------------------------------------ \n");
        printf("      Approfondissement en langage C                                                                    |            3.0                  |           %0.2f                     \n",DSTI[x].matiere1);
        printf("    ----------------------------------------------------------------------------------------------------+---------------------------------+------------------------------------ \n");
        printf("      Algorithme et structure de données                                                                |            3.0                  |           %0.2f                     \n",DSTI[x].matiere2);
        printf("    ----------------------------------------------------------------------------------------------------+---------------------------------+------------------------------------ \n");
        printf("      Moyenne UE                                                                                        | (credit)   6.0                  |           %0.2f                     \n",DSTI[x].UE1);   
        printf("    +---------------------------------------------------------------------------------------------------+---------------------------------+------------------------------------+\n"); 
        printf("    +---------------------------------------------------------------------------------------------------+---------------------------------+------------------------------------+\n");
        printf("      BASE DE DONNÉES ET PROGRAMMATION WEB                                                              |           COEFFICIENT           |      MOYENNE/20                     \n");
        printf("    ----------------------------------------------------------------------------------------------------+---------------------------------+------------------------------------ \n");
        printf("      Introduction aux SGBD                                                                             |             3.0                 |          %0.2f                      \n",DSTI[x].matiere3);
        printf("    ----------------------------------------------------------------------------------------------------+---------------------------------+------------------------------------ \n");
        printf("      Programmation Front-end                                                                           |             3.0                 |          %0.2f                      \n",DSTI[x].matiere4);
        printf("    ----------------------------------------------------------------------------------------------------+---------------------------------+------------------------------------ \n");
        printf("      Moyenne UE                                                                                        | (credit)    6.0                 |          %0.2f                      \n",DSTI[x].UE2);                                                             
        printf("    +---------------------------------------------------------------------------------------------------+---------------------------------+------------------------------------+\n");
        printf("    +---------------------------------------------------------------------------------------------------+---------------------------------+------------------------------------+\n");
        printf("      SYSTÉMES ET RÉSEAUX                                                                               |           COEFFICIENT           |      MOYENNE/20                     \n");
        printf("    ----------------------------------------------------------------------------------------------------+---------------------------------+------------------------------------ \n");
        printf("      Technologie des ordinateurs                                                                       |             2.0                 |          %0.2f                      \n",DSTI[x].matiere5);
        printf("    ----------------------------------------------------------------------------------------------------+---------------------------------+------------------------------------ \n");
        printf("      Architecture des Réseaux                                                                          |             2.0                 |          %0.2f                      \n",DSTI[x].matiere6);
        printf("    ----------------------------------------------------------------------------------------------------+---------------------------------+------------------------------------ \n");
        printf("      Systéme d'exploitation 1                                                                          |             2.0                 |          %0.2f                      \n",DSTI[x].matiere7);
        printf("    ----------------------------------------------------------------------------------------------------+---------------------------------+------------------------------------ \n");
        printf("      Moyenne UE                                                                                        | (credit)    6.0                 |          %0.2f                      \n",DSTI[x].UE3);                                                             
        printf("    +---------------------------------------------------------------------------------------------------+---------------------------------+------------------------------------+\n");
        printf("    +---------------------------------------------------------------------------------------------------+---------------------------------+------------------------------------+\n");
        printf("      MATHÉMATIQUES                                                                                     |           COEFFICIENT           |      MOYENNE/20                     \n");
        printf("    ----------------------------------------------------------------------------------------------------+---------------------------------+------------------------------------ \n");
        printf("      Analyse                                                                                           |             3.0                 |          %0.2f                      \n",DSTI[x].matiere8);
        printf("    ----------------------------------------------------------------------------------------------------+---------------------------------+------------------------------------ \n");
        printf("      Probabilité                                                                                       |             2.0                 |          %0.2f                      \n",DSTI[x].matiere9);
        printf("    ----------------------------------------------------------------------------------------------------+---------------------------------+------------------------------------ \n");
        printf("      Moyenne UE                                                                                        | (credit)    6.0                 |          %0.2f                      \n",DSTI[x].UE4);                                                             
        printf("    +---------------------------------------------------------------------------------------------------+---------------------------------+------------------------------------+\n");
        printf("    +---------------------------------------------------------------------------------------------------+---------------------------------+------------------------------------+\n");
        printf("      COMMUNICATION D'ENTREPRISE                                                                        |           COEFFICIENT           |      MOYENNE/20                     \n");
        printf("    ----------------------------------------------------------------------------------------------------+---------------------------------+------------------------------------ \n");
        printf("      Economie d'entreprises                                                                            |             2.0                 |          %0.2f                      \n",DSTI[x].matiere5);
        printf("    ----------------------------------------------------------------------------------------------------+---------------------------------+------------------------------------ \n");
        printf("      Techniques de communication                                                                       |             2.0                 |          %0.2f                      \n",DSTI[x].matiere6);
        printf("    ----------------------------------------------------------------------------------------------------+---------------------------------+------------------------------------ \n");
        printf("      Anglais:Techniques d'expression                                                                   |             2.0                 |          %0.2f                      \n",DSTI[x].matiere7);
        printf("    ----------------------------------------------------------------------------------------------------+---------------------------------+------------------------------------ \n");
        printf("      Moyenne UE                                                                                        | (credit)    6.0                 |          %0.2f                      \n",DSTI[x].UE5);                                                             
        printf("    +--------------------------------------------------------------------------------------------------------------------------------------------------------------------------+\n");
        printf("    +--------------------------------------------------------------------------------------------------------------------------------------------------------------------------+\n");
        printf("                                     Moyenne                                   |                   Décision Conseil                                                            \n");
        printf("    +--------------------------------------------------------------------------------------------------------------------------------------------------------------------------+ \n");
        printf("                                     %0.2f                                     |                     %s                                                            \n",DSTI[x].moyenne,decision);
        printf("    +--------------------------------------------------------------------------------------------------------------------------------------------------------------------------+\n");

        printf(" \n");
        }while (x!=0);
        
}
    




