#include <stdio.h>

signed main(){
	int a,b;
	printf("Vui long nhap a,b: ");
	scanf("%d %d",&a,&b);
	printf("%f %d",(float)a / b,a % b);
	return 0;
}
