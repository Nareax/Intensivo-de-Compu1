#include <iostream>
#include <stdio.h>
#include <string.h>
#include <conio.h>

int main(int argc, char** argv) {
	system("color f2");
	int a,b,c,d;
	char r;
	float sa,sb,sc,sd;
	
	/*algoritmo para imprimir numeros automaticacmente*/
	
	/*do{
	printf("\nporfavor introdusca un numero desde no menor de -30 : ");
	scanf("%d", &a);
	if(a<-30){
		printf("\nporfavor siga ordenes ");
	}
	}while(a<-30);
	
	for(b=a+1; b<=40; b++){
		printf("\nel numero siguiente es %d", b);
	}*/
	
	/*tranformar un numero a otra cantidad */
	
	/*do{
			
	printf("\nporfavor introdusca el numero que desea transformar: ");
	scanf("%f", &sa);
	
	printf("\nporfavor seleccione el numero de la cantidad a tranformar 1.kilogramos a libras \t2.Grados kelvin a centigrados 3.kilometros/min a centimetros/seg");
    scanf("%d", &c);
    
    switch (c){
    	
    	case 1:
    		sc=sa*2.20462;
    		printf("\nel resultado es: %2.f", sc);
    		break;
    		
    	case 2:
    		sb=sa-273;
    		printf("\nel resultado es : %1.f", sb);
    		break;
    		
    	case 3:
    		sd=(sa*100000)*60;
    		printf("\nel resultado es: %2.f", sd);
    		break;
	}
	printf("\ndesea tranformar algo mas si(1), no(2)");
	scanf("%d", &d);
	
	sa=0;
	c=0;
	sc=0;
	sb=0;
	sd=0;
	}while(d==1);*/
	
	/*el cromado de una pieza*/
	
	printf("\nporfavor introdusca la cantidad de litros que contiene el barril de cromo cuando esta lleno: ");
	scanf(" %f", &sa);
	do{
		
	a=0;
	sc=0;
	printf("\ncuantas piezas se desea cromar ");
	scanf(" %d", &a);
	
	sd=(20/sa)*100;
	printf("\n%f", sd);
	sb=sa;
	do{
		printf("\ncuanto de cromo se necesita para cromar esta pieza: ");
		scanf("%f", &sc);
		sb=sb-sc;
		printf("\nlo que queda de cromo es: %2.f", sb);
		sc=0;
		if(sb<sd){
			printf("\n!warning¡ !warning¡, el recipiente de cromo esta casi vacio, porfavor moderar su uso");
		}
	a--;	
	
	}while(a>0 && sb>0);
	if(sb<=0){
			printf("\nse acabo el cromo, sorry no se puede cromar mas piezas");	
		}
	if(a==0){
			printf("\nobjetivo completado todas las piesas se cromaron y queda %d de cromo en el barril", sb);
		}
	printf("\ndeseas realizar el proceso otra vez (s)si (n)no");
	r=getch();
	}while(r=='s' || r=='S');

	return 0;
}
