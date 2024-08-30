#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

int main()

{
    int choix,i,A,K,total1,total2,inter,inter2,Retour,jour,mois=02,annee=2022,P,Q,R,S,T,U;
    char choix2,choix3,article;
    do
    {

        system("cls");
         printf("========================================================================================================================\n");
        printf("\n\t\t\t\t\tMAGASIN DE STOCK DE VETEMENT POUR ENFANT \n\n");
         printf("========================================================================================================================\n\n");
        printf("\t\t\t\tQuelle operation voulez-vous effectuer ?\n\n");
        printf ("1-Stock de produits\n2-Retirait de produit\n3-Voir l historique des operations\n0-Quitter le programme\n");
        scanf("%d",&choix);
        switch(choix)
        {
            case(1):    system("cls");
                        printf("========================================================================================================================\n");
                        printf("\n\t\t\t\t\tMAGASIN DE STOCK DE VETEMENT POUR ENFANT \n\n");
                        printf("========================================================================================================================\n\n");
                        printf("\t\t\t\t\t\t   Stockage de produit \n\n");
                        printf("\t\t\t\t\tQuel type d accessoire desirez-vous stocker ?\n\n");
                        printf ("A-Pret a porter\nB-Accessoir de tete\nC-Ceinture pour enfant\nR-Retour au menu\n\n");
                        scanf(" %c",&choix2);

                        switch(choix2)
                        {
                            case('A'): do
                                        {
                                            system("cls");
                                            printf("========================================================================================================================\n");
                                            printf("\n\t\t\t\t\tMAGASIN DE STOCK DE VETEMENT POUR ENFANT \n\n");
                                            printf("========================================================================================================================\n\n");
                                            printf("\t\t\t\t\t  Stockage de produit en cours...\n\n");
                                            printf("\t\t\t\t\t\t PRET A PORTER\n\n");
                                            printf("Entrez le nombre d accessoire a stocker\n");
                                            scanf("%d",&K);
                                            printf("Stock de %d Article(s) pret a porter effectue au bloc A avec succes !\n\n",K);
                                            printf("Entrez 1 pour retour au menu precedent :\t");
                                            scanf("%d",&Retour);
                                        }
                                        while(Retour!=1);
                                break;
                            case('B'): do
                                        {
                                            system("cls");
                                            printf("========================================================================================================================\n");
                                            printf("\n\t\t\t\t\tMAGASIN DE STOCK DE VETEMENT POUR ENFANT \n\n");
                                            printf("========================================================================================================================\n\n");
                                            printf("\t\t\t\t\t   Stockage de produit en cours...\n\n");
                                            printf("\t\t\t\t\t\tACCESSOIRES DE TETE\n\n");
                                            printf("Entrez le nombre d accessoire a stocker\n");
                                            scanf("%d",&K);
                                            printf(" Stock de %d Article(s) d accessoire de tete effectue au bloc B avec succes !\n\n",K);
                                            printf("Entrez 1 pour retour au menu precedent :\t");
                                            scanf("%d",&Retour);
                                        }
                                        while(Retour!=1);
                                break;
                            case('C'):  do
                                        {
                                            system("cls");
                                            printf("========================================================================================================================\n");
                                            printf("\n\t\t\t\t\tMAGASIN DE STOCK DE VETEMENT POUR ENFANT \n\n");
                                            printf("========================================================================================================================\n\n");
                                            printf("\t\t\t\t\t   Stockage des produit en cours...\n\n");
                                            printf("\t\t\t\t\t\t CEINTURE POUR ENFANT\n\n");
                                            printf("Entrez le nombre a stocker\n");
                                            scanf("%d",&K);
                                            printf(" Stock de %d Article(s) de ceinture pour enfant effectue au bloc C avec succes !\n\n",K);
                                            printf("Entrez 1 pour retour au menu Principal :\t");
                                            scanf("%d",&Retour);
                                        }
                                        while(Retour!=1);

                                    break;
                            case('R'):  printf("Etes-vous sur du retour au menu\n");
                                        getch();
                                        break;

                            default:   printf("Choix Incorrect !! ");
                                        getch();
                        }
                break;
            case(2):    system("cls");
                        printf("========================================================================================================================\n");
                        printf("\n\t\t\t\t\tMAGASIN DE STOCK DE VETEMENT POUR ENFANT \n\n");
                        printf("========================================================================================================================\n\n");
                        printf("\t\t\t\t\t   Retrait de produit\n\n");
                        printf("\t\t\t\tQuel type d accessoire desirez-vous retirer ?\n\n");
                        printf ("A-Pret a porter\nB-Accessoir de tete\nC-Ceinture pour enfant\nR-Retour au menu\n\n");
                        scanf(" %c",&choix3);

                        switch(choix3)
                        {
                            case('A'): do
                                        {
                                            system("cls");
                                            printf("========================================================================================================================\n");
                                            printf("\n\t\t\t\t\t\tMAGASIN DE STOCK DE VETEMENT POUR ENFANT \n\n");
                                            printf("========================================================================================================================\n\n");
                                            printf("\t\t\t\t\t   Retrait de produit en cours...\n\n");
                                            printf("\t\t\t\t\t\t PRET A PORTER\n\n");
                                            printf("Entrez le nombre d accessoire a retirer\n");
                                            scanf("%d",&A);
                                            printf("Retrait de %d Article(s) pret a porter effectue au bloc A avec succes !\n\n",A);
                                            printf("Entrez 1 pour retour au menu Principal :\t");
                                            scanf("%d",&Retour);
                                        }
                                        while(Retour!=1);
                                break;
                            case('B'): do
                                        {
                                            system("cls");
                                            printf("========================================================================================================================\n");
                                            printf("\n\t\t\t\t\tMAGASIN DE STOCK DE VETEMENT POUR ENFANT \n\n");
                                            printf("========================================================================================================================\n\n");
                                            printf("\t\t\t\t\t   Retrait de produit en cours...\n\n");
                                            printf("\t\t\t\t\t\tACCESSOIRES DE TETE\n\n");
                                            printf("Entrez le nombre d accessoire a retirer\n");
                                            scanf("%d",&A);
                                            printf(" Retrait de %d Article(s) d accessoire de tete effectue au bloc B avec succes !\n\n",A);
                                            printf("Entrez 1 pour retour au menu Principal :\t");
                                            scanf("%d",&Retour);
                                        }
                                        while(Retour!=1);
                                break;
                            case('C'):  do
                                        {
                                            system("cls");
                                            printf("========================================================================================================================\n");
                                            printf("\n\t\t\t\t\tMAGASIN DE STOCK DE VETEMENT POUR ENFANT \n\n");
                                            printf("========================================================================================================================\n\n");
                                            printf("\t\t\t\t\t   Retrait des produit en cours...\n\n");
                                            printf("\t\t\t\t\t\tCEINTURES POUR ENFANT\n\n");
                                            printf("Entrez le nombre d accessoire a retirer\n");
                                            scanf("%d",&A);
                                            printf(" Retrait de %d Article(s) de ceinture pour enfant effectue au bloc C avec succes !\n\n",A);
                                            printf("Entrez 1 pour retour au menu Principal :\t");
                                            scanf("%d",&Retour);
                                        }
                                        while(Retour!=1);

                                    break;
                            case('R'):  printf("Etes-vous sur du retour au menu\n");
                                        getch();
                                        break;

                            default:   printf("Choix Incorrect !! ");
                                        getch();
                     }
                        break;

            case(3):        system("cls");
                            printf("========================================================================================================================\n");
                            printf("\n\t\t\t\t\tMAGASIN DE STOCK DE VETEMENT POUR ENFANT \n\n");
                            printf("========================================================================================================================\n\n");
                            printf(" Mentionner la date des precedentes operations effectuees\n\n");
                            printf("%d / %02d / ",annee,mois);
                            scanf("%d",&jour);
                            printf("\t\t\t\t\tVEUILLEZ ENTREZ LES DONNEES DE STOCKAGE :\n\n");
                            printf("Entrez le nombre de stock pret a porter    :\t");
                            scanf("%d",&P);
                            printf("Entrez le nombre stockee d accessoir de tete   :\t");
                            scanf("%d",&Q);
                            printf("Entrez le nombre de ceinture pour enfant stockee   :\t");
                            scanf("%d",&R);
                            printf("\t\t\t\t\t\tVEUILLEZ ENTREZ LES DONNES DE RETRAIT AU STOCK :\n\n");
                            printf("Entrez le nombre de stock pret a porter  retire  :\t");
                            scanf("%d",&S);
                            printf("Entrez le nombre de stock d accessoir de tete  retire :\t");
                            scanf("%d",&T);
                            printf("Entrez le nombre de stock retire de ceinture pour enfant :\t");
                            scanf("%d",&U);
                            do
                            {
                                system("cls");
                                printf("========================================================================================================================\n\n");
                                printf("\t\t\t\t BILAN DES OPERATIONS EFFECTUEES DU %d / %02d / %d :\n\n",jour,mois,annee);
                                printf("========================================================================================================================\n\n");
                                total1=P+Q+R;
                                total2=S+T+U;
                                inter=total1+total2;
                                inter2=total1+(-total2);
                                printf(" Total de produit stocke:\t%d\n\n ",total1);
                                printf("Total de produit retire:\t%d\n\n ",total2 );
                                printf("Total d interaction journaliere:\t\%d\n\n ",inter );
                                if(inter>0)
                                {
                                 printf("%d produit(s) de plus ont ete(s) enregistre pour cette journee :\t ",inter2);

                                } else if(inter2<0)
                                {
                                  printf(" %d produit(s) de moins ont ete(s) enregistre pour cette journee :\t ",inter2);
                                } else if(inter==0)
                                {
                                 printf("les operations d entree et sortie pour cette journee se valent  ");
                                }
                                printf("\n\n\tEntrez 1 pour retour au menu Principal :\t");
                                scanf("%d",&Retour);
                            }  while(Retour!=1);

                        break;



        }

    }
    while(choix!=0);
    return 0;
}
