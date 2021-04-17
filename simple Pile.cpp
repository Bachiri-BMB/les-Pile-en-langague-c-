#include<stdio.h>
#include<stdlib.h>



typedef struct{
	int sommet;
	int taille;
	int T[40];
}mypile;


void empiler(mypile *p,int v){
	p->T[p->sommet++]=v;
	
}
int depiler(mypile *p){
	return p->T[--p->sommet];
}
int estpleinne(mypile p){
	return p.sommet==p.taille;
}
int estvide(mypile p){
	return p.sommet==0;
}
void supprimer(mypile *p,int x){ 
	mypile p1;
	p1.sommet=0;
	p1.taille==p->taille;
	int an ;

	while(!estvide(*p)){
		an=depiler(p); 

		if(an!=x){
		
			empiler(&p1,an);
		}
	}
	while(!estvide(p1)){
	
	 {
		    empiler(p,depiler(&p1));
	}
}
}
int  paire(mypile p){
	int an;
	if(estvide(p)){
		printf("la pile est vide");
		
	}
	else{
		while(!estvide(p)){
			an=depiler(&p);
			if(an%2==0){
				printf("le nombre %d est paire\n ",an);
			}
			else{
				printf("le nombre %d est impaire\n",an);
			}
		}
	}
	

}
void exrit(mypile p){
	int an;
	printf("%d",an);
}
int max(mypile p){
	int an;
	int m;
	if(estvide(p))
	   printf("la pile est vide ");
	
	else{
		while(!estvide(p)){
			
			an=depiler(&p);
			if(an>m){
				m=an;
			}

		  
		}
	  
		
	}
	return m;

}


void afficher(mypile p ){
	int an,choice;
	if(estvide(p))
	   printf("la pile est vide ");
	
	else{
		while(!estvide(p)){
			
			an=depiler(&p);

		    printf("le nombre est  = %d \n " ,an);
		}
	  
		
	}
}
int somme(mypile p){
	int an,s=0;
	if(estvide(p)){
		printf("la pile  est vide ");
		
	}
	else{
		while(!estvide(p)){
			an=depiler(&p);
			s=s+an;
			
		}
	}
	return s;
}

int compte(mypile p){
	int an,s=0;
	if(estvide(p)){
		printf("la pile  est vide ");
		
	}
	else{
		while(!estvide(p)){
			an=depiler(&p);
			s++;
		
			
		}
	}
	return s;
}
int moy(mypile p){
	int an,cmp=0;
	float M=0;
	if(estvide(p)){
		printf("la pile est vide ");
		
	}
	else{
		while(!estvide(p)){
			an=depiler(&p);
			cmp++;
			M=M+an/cmp;
		}
	}
	return M;
}
		
	
 
int main (){
	mypile p1;
	int n,i,chx,a;
	int option=1;
	printf("donnez la taille de la pile ");
	scanf("%d",&p1.taille);
	p1.sommet=0;
	for(i=p1.sommet;i<p1.taille;i++){
		printf("donnez votre nombre : ");
		scanf("%d",&n);
		empiler(&p1,n);

	
		
	} 
	while(option){
		
	
	printf("\nMenu principal");
      printf("\n1.affiche \n2.supprimer  \n3.max \n4.paire/impaire \n5.la somme \n6.ordre \n7.la Moyenne de la pile");
      printf("\nEntrez votre choix: ");
      scanf("%d", &chx);
      switch (chx) {
      case 1:
        afficher(p1);
         break;
      case 2:
      	printf("donnez le nombre pour supprimer");
      	scanf("%d",&a);
      	supprimer(&p1,a);
      	afficher(p1);
        break;
        case 3:
        printf("\n le plus grand nombre est =%d",max(p1));
        break;
        case 4:
        	paire(p1);
        	break;
        case 5:
		printf("\nla somme de la pille est = %d",somme(p1));	
		break;
		case 6:
		printf("le nombre de element  = %d",compte(p1));
		break;
		case 7:
		   printf("\nla Moyenne de la pile = %d",moy(p1));
		   break;
	}
      printf("\n tapez 1 si vous avez continue et 0 pour quitez  : ");
      scanf("%d",&option);
  }
}
