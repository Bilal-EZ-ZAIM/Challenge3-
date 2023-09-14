#include <stdio.h>

// Challenge 3 : Calcule et affichage résultat en format décimal
// prof Aymane
// prof Said
// étudiant Bilal EZZAIM
// function welcom to project
void premierFonction()
{
    printf("                 =================================================================================\n");
    printf("                 =================================================================================\n");
    printf("                 ======== Challenge 3 : Calcule et affichage résultat en format décimal ==========\n");
    printf("                 =================================================================================\n");
    printf("                 =================================================================================\n");
}

int main()
{
    premierFonction();
    int a , b ;
    printf("Ecrevez le numéro a ");
    scanf("%d" , &a);
    printf("Ecrevez le numéro b ");
    scanf("%d" , &b);
    int somme = a + b;
    int chiff = a - b;
    int multiplication = a * b;
    float division = (float)a / b; 
    float rest = (float)a / b; 
    printf("la somme de  %d + %d = %d \n" , a , b , somme);
    printf("chiffresoustraction = %d - %d = %d\n" , a , b , chiff);
    printf("multiplication = %d * %d = %d \n" , a * b , multiplication);
    printf("division %d / %d = %.2f\n" , a , b , division);
    printf("ٌle reste d'une division =  %d % % %d = %.2f \n" , a , b , rest);
    return 0;
}