#include <stdio.h>

int main()
{
	int N;
	int D;
	int A;
	int resp;

	scanf("%d", &N);
	scanf("%d", &D);
	scanf("%d", &A);

	if (D > A){
    resp = D - A;
	}else{
	resp = N - A + D;
	}

	printf("%d\n", resp);
	return 0;
}