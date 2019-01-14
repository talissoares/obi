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

    caixa[0] = 0;
	for (int i = 1; i <= N; ++i){
		scanf("%d", &caixa[i]);
	}

	int aux = 0;
//lendo o vetor  novamente para organizar, logo depois
	for (int i = 1; i <= N; ++i){
		for (int j = 1; j < N; ++j){
		
		if (caixa[i] < caixa[j]){
			aux = caixa[i];
			caixa[i] = caixa[j];
			caixa[j] = aux;
		}
		}
	}
//iniciei um vetor com posições 0
for (int Q = 0; Q <=N; ++Q){
	cima[Q] = 0;
}
/*
for (int a = 0; a <=N; ++a){
p = caixa[a + 1] - caixa[a];
 if( p  <=  8){
 cima[a + 1] = caixa[a + 1];

}
*/
 for (int h = 0 ; h  < N; ++h){
 	for (int w = 0; w < N; ++w){
 	if (cima[h + 1] < caixa[w + 1]){
 		
 		if ( cima[h + 1] - caixa[w + 1] <= 8){
 		aux2 = cima[h + 1];
 		cima[h + 1] = caixa[w +1];
 		caixa[w +1] = aux2;
 		}
 	}
 	}
 }
for (int o = 0; o <= N; ++N)
{
	printf("%d\n", cima[o]);
}

	return 0;

}


