#include <stdio.h>
#include <string.h>

struct Chap{
    char nom[50]; 
	char description[50];
    int pdv;
	int po;
	char id[30];
	
};

int main(){

//Renommer
typedef struct Chap chapitre;


int choixDEP=0;   

chapitre chapitre1 = {"La caverne Gothard ","Caverne inquiétante",30 ,100 ,"chapitre1"};
chapitre chapitre2 = {"La colline du VieuxCedre","Colline paisible",60,60,"chapitre2"};
chapitre chapitre3 = {"La montagne Graigouaire","Montagne enneigée",50,90,"chapitre3"};



printf("Bonjour voyageur où désirez-vous aller ? \n");
printf("Pour aller à la %s (taper 1) \n",chapitre1.nom);
printf("Pour aller à la %s (taper 2) \n",chapitre2.nom);
printf("Pour aller à la %s (taper 3) \n",chapitre3.nom);


scanf("%d",&choixDEP);

if(choixDEP==1){
    printf("Vous arrivez dans une %s ,vous gagnez %d points de vie et %d pièces d'or", chapitre1.description, chapitre1.pdv, chapitre1.po);
    }
    
else if(choixDEP==2){
    printf("Vous arrivez dans une %s ,vous gagnez %d points de vie et %d pièces d'or", chapitre2.description, chapitre2.pdv, chapitre2.po);    
    }

else if(choixDEP==3){
    printf("Vous arrivez dans une %s ,vous gagnez %d points de vie et %d pièces d'or", chapitre3.description, chapitre3.pdv, chapitre3.po);    
    }

    
}


