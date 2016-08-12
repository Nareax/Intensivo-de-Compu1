#include <iostream>
#include <conio.h>

int main(int argc, char** argv) {
	
	int v,a,b,c,d,e,f,g, contcap=0, contm=0, conth=0, menor=0, menor1=9999,troncalm;
	char nombre[20],r, tipo;
	float capacidad, capacidadm, capacidadf, corrosion;
	system("color f2");
	
	/*calculando los puentes de unas troncales existentes*/
	
	for(v=0; v<=6; v++){
	printf("\n\tEstudio de los puentes en las vias de San Cristobal, estado Tachira\n ");
		printf("troncal %d",v+1);
		menor=0;
		do{
			printf("\ncomo se llama este puente, sir\n");
			fflush(stdin);
			gets(nombre);
			printf("\ningeniero civil, digame de que esta echo este puente,\n (m)metalico, (o)ormigon o (x)mixto\n");
			tipo=getch();
			printf("\ncuanto peso puede resistir este puente, en toneladas porfavor\n");
			scanf(" %f", &capacidad);
			printf("\ny cuanto porciento del puente esta en estado de corrosion\n");
			scanf(" %f", &corrosion);
			if(tipo=='m' || tipo=='M'){
				contm++;
			}
			if(tipo=='h' || tipo=='H'){
				conth++;
			}
			if((tipo=='m'|| tipo=='M') || (tipo=='o' || tipo=='O')){
				if(capacidad>=50 && corrosion>45){
					printf("\neste puente es de alto riesgo para transitar por el, \nsera mejor que no nos robemos el dinero de la contruccion y lo reparemos\n");
				}
				else{
					printf("\neste puente es transitable, podemos robar sin cargo de conciencia\n");
				}
			}
			else{
				if(tipo=='x' || tipo=='X'){
					printf("\nno se ha determinado si este puente es transitable o no, \nhasta no estar seguro no voy a robar\n");
					capacidadm=capacidadm+capacidad;
					contcap++;
				}
			}
			
		capacidadf=capacidadm/contcap;
	
			if(corrosion>65 ){
				menor++;
			}
	
		
			printf("\nhay algun otro puente que requiera del chequeo de nuestros profecionales (s)si o (n)no\n");
			r=getch();
			system("pause");
			system("cls");
		}while(r=='s' || r=='S');
		
		
		if(conth<contm && v==0){
			printf("\nhay menos puentes de hormigon que metalicos\n");
		}
		if(contm<conth && v==0){
			printf("\nhay menos puentes de metal que de hormigon\n");
		}
		if(contm==conth && v==0){
			printf("\nhay el mismo numero de puentes metalicos y de ormigon\n");
		}
		if(contcap>0){
			printf("\nel promedio de la capacidad de los puentes de contruccion mixta\nes de : %f\n", capacidadf);
		}
		capacidadf=0;
		conth=0;
		contm=0;
		capacidad=0;
		corrosion=0;
		capacidadm=0;
		contcap=0;
	    
	    if(menor<menor1){
	    	menor1=menor;
	    	troncalm=v;
		}
		menor=0;
	}
	
   printf("La troncal %d es la mas segura del estado. ", troncalm+1);
	
	return 0;
}
