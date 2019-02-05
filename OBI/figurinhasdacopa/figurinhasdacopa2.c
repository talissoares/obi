#include <stdio.h>


int main(){
// N indica número de figurinhas (e espaços) do álbum
// C indica número de figurinhas carimbadas do álbum 
// M indica número de figurinhas já compradas
int N, C, M;

int tenho = 0;

scanf("%d%d%d", &N, &C, &M);

int x[C];
int y[M];

for (int i = 0; i < C; ++i)
{
	scanf("%d", &x[i]);
}

for (int j = 0; j < M; ++j)
{
	scanf("%d", &y[j]);
}

for (int z = 0; z < C; ++z)
{
	for (int l = 0; l < M; ++l)
	{
	if(x[z]&&y[l]!=0){
		if (x[z] == y[l])
		{
		x[z] = 0;
		y[l] = 0;
			tenho = tenho +1;
		}
	}
}
}


int continha = 0;
continha = C - tenho;

printf("%d\n", continha);

	return 0;
}