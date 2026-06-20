#include <stdio.h>

signed main(){
	int x,n,i;
	printf("Vui long nhap x,n: ");
	scanf("%d%d",&x,&n);
	float T = 10;
	for(i =2;i <= n;i++){
		T += (float)i / x;
	}
	printf("%f",T);
	return 0;
}
