#include <stdio.h>
#include <string.h>

struct personne{
    char nom[10],prenom[10];
    int age;
};

int main(){
struct personne p1={"hamdi","salma",19};
printf("le nom est %s ,le prenom est : %s et l\'age est %d ans",p1.nom,p1.prenom,p1.age);
    return 0;
}
