#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"");
	int p1 =- 1,p2 =- 1,p3 =- 1,p4 =- 1,p5 =- 1;
	//Entradas
	while(p1 < 0 || p1 > 1){
		printf("Telefonou para a v�tima? 0.n�o, 1.sim: ");
		scanf("%d",&p1);
	}
		while(p2 < 0 || p2 > 1){
		printf("Esteve no local do crime? 0.n�o, 1.sim: ");
		scanf("%d",&p2);
	}
		while(p3 < 0 || p3 > 1){
		printf("Mora perto da v�tima? 0.n�o, 1.sim: ");
		scanf("%d",&p3);
	}
		while(p4 < 0 || p4 > 1){
		printf("Devia para a v�tima? 0.n�o, 1.sim: ");
		scanf("%d",&p4);
	}
		while(p5 < 0 || p5 > 1){
		printf("J� trabalhou com a v�tima? 0.n�o, 1.sim: ");
		scanf("%d",&p5);
	}	
		//processamnto
		int total = p1 + p2 + p3 + p4 + p5;
		
		//Sa�da com processamento
		if(total < 2){
			printf("Est� Liberado");
		}else if(total < 3){
			printf("Voc� � suspeito.");
		}else if(total < 5){
			printf("Voc� � c�mplice.");
		}else{
			printf("Voc� � o assassino.");
		}
	}
