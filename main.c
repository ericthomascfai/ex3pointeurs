#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*****************************variables globales**********************************************/
int tabdes[6];

/*****************************prototype*********************************************************/
void generatedes(int [],int);
void affiche(int);
/*******************************implementation**************************************************/
void generatedes(int lesdes[],int nbdes) {
    for(int i=0;i<nbdes;i++)
    {
        lesdes[i]=random()%6+1; //génère un  nombre aléatoire entre 1 et 6
    }

}
void affiche(int nb)
{
    for(int i=0;i<5;i++)
    {
        printf("%d ",tabdes[i]);
    }
}

int main() {
    srand(time(NULL)); //permet de changer le nombre aléatoire

    generatedes(tabdes,5);
    affiche(5);

    return 0;
}
