
#include <stdio.h>


//Exercito comprou um grande número de pares de botas
//Nem todas as caixas tinha um par de botas correto
//com botas do mesmo tamanho ==== era o correto
//Tinha botas diferentes ==== problema

int main(){
// N indica o npumero de botas individuas entregues
int N; 
scanf("%d", &N);
int M[N];
char L[N];
int botas_pares = 0;

for (int i = 0; i < N; ++i){
scanf("%d", &M[i]);
scanf("%s", &L[i]);
}

for (int k = 0; k < N; ++k){
//esse for é capaz de parar de fazer comparaçoes
// com o que ja foi feito



if ((M[k]!=0)&&((L[k]!='o')))
	{
	
	for (int q = k+1; q < N; ++q){
    
	if ((M[q]!=0)&&((L[q]!='o'))){
		
	 if ((M[k]==M[q])&&(L[k]!=L[q]))
	 {
	 	M[q] = 0;
	 	M[k] = 0;
	 	
	 	botas_pares = botas_pares + 1;

	 }
	}
	}
	}
}


printf("%d\n", botas_pares);
//para ler quando eu quiser
/*
for (int j = 0; j < N; ++j){
printf("%d %c\n", M[j], L[j]);

}
*/
	return 0;
}