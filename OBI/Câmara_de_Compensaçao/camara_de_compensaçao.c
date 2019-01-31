#include <stdio.h>

int main(){

//M é o número de cheques emitidos 
//N é o número de habitantes da cidade
int M; 
scanf("%d", &M);
int N;
scanf("%d", &N);
int X[M], Y[M], Z[M];

for (int i = 0; i < M; ++i){

scanf("%d", &X[i]);
scanf("%d", &Y[i]);
scanf("%d", &Z[i]);


}
 
for (int j = 0; j < M; ++j)
{
	printf("%d %d %d", X[j], Y[j], Z[j]);
	printf("\n");
}



	return 0;
}