#include <stdio.h>

signed main(){
	int a,b;
	printf("Vui long nhap a,b: ");
	scanf("%d %d",&a,&b);
	printf("%d + %d = %d\n",a,b,a + b);
	printf("%d - %d = %d\n",a,b,a - b);
	printf("%d * %d = %d\n",a,b,a * b);
	printf("%d / %d = %f",a,b,(float)a / b);
	return 0;
}
