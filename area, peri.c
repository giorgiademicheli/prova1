#include<stdio.h>
#include<windows.h>
main()
{
	system("color CF");
	int lato,area,peri;
	printf("CALCOLATORE PERIMETRO E AREA \n\n");
	printf("Inserisci il lato: ");
	do{
	scanf("%d",&lato);
	if(lato<=0){
	printf("Errore, reinserisci il lato: \n");
    }
	else{
		area=lato*lato;
		peri=lato*4;
		printf("il perimetro e' %d\n",peri);
		printf("l'area e' %d\n",area);
	}
    }
    while(lato<=0);
	system("PAUSE");
}
