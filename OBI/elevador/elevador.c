// No primeiro andar da fábrica existem algumas caixas 
// de pesos diveros que precisamos levar para o andar de cima
// Todas caixas tem pesos diveros
// Existemm N caixas
// REGRA DE SEGURANÇA:
// P - Q <= 8
// P é o peso da cabine MAIS PESADA
// Q é o peso da cabine MAIS LEVE
#include <stdio.h>
int main(){
    int p;
	int N;
	scanf("%d", &N);
	int caixa[N];
	int cima[N];
	int aux2 = 0;
	int some = 0;

    
	for (int i = 0; i < N; ++i){
		scanf("%d", &caixa[i]);
	}

	int aux = 0;
//lendo o vetor  novamente para organizar, logo depois
	for (int i = 0; i < N; ++i){
		for (int j = 0; j < N; ++j){
		
		if (caixa[i] < caixa[j]){
			aux = caixa[i];
			caixa[i] = caixa[j];
			caixa[j] = aux;
		}
		}
	}
//iniciei um vetor com posições 0
for (int Q = 0; Q < N; ++Q){
	cima[Q] = 0;
}
/*
for (int a = 0; a <=N; ++a){
p = caixa[a + 1] - caixa[a];
 if( p  <=  8){
 cima[a + 1] = caixa[a + 1];

}
*/

// posição de cima 0 é 4

 for (int h = 0 ; h  < N; ++h){
 	for (int w = 0; w < N; ++w){
 	if (cima[w] < caixa[h]){	
 		if ( ( caixa[h] - cima[w]) <= 8){
 		aux2 = caixa[h];
 	    caixa[h]=cima[w];
 		cima[w] = aux2;

 		}

 		
 	}
 	}
 }


for (int Q = 0; Q < N; ++Q)
{

some = caixa[Q] + some;
}

if(some == 0){
	printf("S\n");
}else{
	printf("N\n");
}

//quando for testar, só desativar o comentário abaixo.
/*
for (int Q = 0; Q < N; ++Q)
{
	printf("%d,", cima[Q]);
}
printf("\n");

for (int R = 0; R < N; ++R)
{
	printf("%d,", caixa[R]);
}
*/
	return 0;

}


