#include <stdio.h>

int main()
{
	int N;
	int D;
	int A;
	int resp = 0;

	scanf("%d", &N);
	scanf("%d", &D);
	scanf("%d", &A);
    
    if (D==A){
    printf("%d\n", resp);

    }
	else if(D > A){
    resp = D - A;
    printf("%d\n", resp);
	}else{
	resp = (N - A) + D;
	printf("%d\n", resp);
	}

	
	return 0;
}