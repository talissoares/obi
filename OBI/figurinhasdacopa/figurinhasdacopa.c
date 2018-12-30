#include <stdio.h>
int main(){
// a primeira linha contém 3 número inteiros
int N, C, M, igual = 0, F;
// N indica número de figurinhas (e espaços) do álbum
// C indica número de figurinhas carimbadas do álbum 
// M indica número de figurinhas já compradas
printf("digite:\n");

scanf("%d%d%d", &N, &C, &M);

int x[C];
int y[M];
//esse for está lendo as figuras que já tem:
for (int i = 0; i < C; ++i){
	scanf("%d", &x[i]);
}
//esse for está lendo as que foram compradas:
for (int j = 0; j < M; ++j){
	scanf("%d", &y[j]);
}

//Temos que comparar ambos for e fazer com que some 
//não tem um em outro

{
	/* code */
}for (int i = 0; i < C; ++i){
	for (int j = 0; j < M; ++j){

if (x[i]==y[j]){

igual = igual + 1;

}
}
}
F = C - igual;
printf("%d\n", F);
	/* code */


//A segunda linha contém C números inteiros distintos
// Xi indicando as figurinhas carimbadas do álbum


//A terceira linha contém M números inteiros Yi
// indicando as figurinhas já compradas.

	
	return 0;
}


// o álbum contém espaços numerados de 1 a N
// para colar as figurinhas

//cada figurinha enumerada de 1 a N

//ALGUMAS figurinhas são carimbadas, RARAS

//as figurinhas quando compradas podem vim repetidas, pois não
//não é possivél sabel quais vão vim
