#include <stdio.h>

int main(){
// N é número de empregados
// M é número de relações de gerência
// I é número de instrução

int N, M, I;

scanf("%d%d%d", &N, &M, &I);

int K[N];

for (int i = 0; i < N; ++i)
{
	scanf("%d", &K[i]);
}

int X[M], Y[M];

for (int j = 0; j < M ; ++j)
{
	scanf("%d", &X[j]);
	scanf("%d", &Y[j]);
}

char P_T[I];
int empregado[I];
int A[I], B[I];

for (int q = 0; q < I; ++q)
{
   scanf("%s", &P_T[q]);
   if (&P_T[q]=="P")
   {
   	scanf("%d", &A[q]);
   	scanf("%d", &B[q]);

   }else{
    scanf("%d", &empregado[q]);
   }
}

	return 0;
}