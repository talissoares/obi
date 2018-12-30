#include <stdio.h>

int main(){
	
	int L;
	int C;
	int R;
	int E;

	
	scanf("%d", &L);
	scanf("%d", &C);

    R = ((L * C ) + ((L - 1) *(C - 1)));
    E = (((L - 1 )+ (L - 1)) + ((C - 1)+(C - 1)));
    printf("%d\n", R);
    printf("%d\n", E);
	return 0;
}
