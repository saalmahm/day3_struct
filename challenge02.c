#include <stdio.h>
#include <string.h>

struct etudiant{
    char nom[10],prenom[10];
    float notes[3];
};
int main(){
struct etudiant e1={"Hamdi","Salma",{15,19,17.75}};
printf("Voila les informations d\'etudiant: \n\n");
printf("Le nom : %s , le prenom : %s ,",e1.nom,e1.prenom);
for(int i=0;i<3;i++){
    printf(" la note %d est %.2f: ,",i+1,e1.notes[i]);
}
    return 0;
}
