#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*****************************variables globales**********************************************/
int tabdes[6];
int nbdes;
/*****************************prototype*********************************************************/
void generatedes(int [],int);
void affiche(int);
void saisie();
/*******************************implementation**************************************************/
void generatedes(int lesdes[],int nbdes) {
    for(int i=0;i<nbdes;i++)
    {
        lesdes[i]=random()%6+1; //génère un  nombre aléatoire entre 1 et 6
    }

}
void affiche(int nb)
{
    for(int i=0;i<nbdes;i++)
    {
        printf("%d ",tabdes[i]);
    }
}

void saisie()
{
    printf("Veuillez saisir le nombre de dés\n");
    scanf("%d",&nbdes);
}


int main() {
    srand(time(NULL)); //permet de changer le nombre aléatoire
    saisie();
    generatedes(tabdes,nbdes);
    affiche(nbdes);

    return 0;
}
