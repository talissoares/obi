#include <stdio.h>
int main()
{
	
	//A primeira linha contém um inteiro N
//A segunda linha contém um inteiro D(POSIÇÃO DO DISCO)
//A terceira linha contém um um inteiro "A"
printf("digite o number de linhas:\n");
int N;
int D;
int posi = 0;
scanf("%d", &N);
int Linhas[N][N];

for (int i = 1; i <=N; ++i){
	for (int j = 1; j <=N; ++j){
	
	 Linhas[i][j] = 0;
	}
posi= posi + 1;
}

printf("digita a posição do disco:\n");
scanf("%d", &D);
Linhas[D][1] = 1;
printf("digite a posição do avião:\n");
int A;
scanf("%d", &A);
Linhas[A][posi] = 2;

/*//Eu tenho que fazer um for e reniciar
for (int u = 1; u <= N; ++u){
	for (int y = posi; y <=N; ++y){
 
	}

}

*/

for (int q = 1; q <= N; ++q){
	for (int k = 1; k <= N; ++k){
	printf("%d",  Linhas[q][k]);
	}
	printf("\n");
}



	return 0;
}
