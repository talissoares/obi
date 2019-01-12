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


for (int a = 0; a <=N; ++a){
p = caixa[a + 1] - caixa[a];
 if( p > 8){
printf("N\n");
break;
 }else{
printf("S\n");
 }

}





	return 0;

}


