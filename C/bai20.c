/*	Viết chương trình nhập vào số nguyên n. Tính 
A=1*2+2*3+…+n*(n+1)
B=10+2/x+3/x+⋯+n/x ( x được nhập từ bàn phím, Nếu nhập x = 0 yêu cầu nhập lại)
C=√1+√3+⋯+√n
D=1+1/3+1/5+⋯+1/((2*n+1))
F= 1+3+5+…+(2*n+1) ( n là số nguyên dưong nhập từ bàn phím)
T=100+x/10-x/20+…+(-)x/10*n  (x là một số thực, n là số nguyên được nhập từ bàn phím)
F= ex+e2x+…+enx
T= { █(1*3*…*n nếu n lẻ@2*4*..*n nếu n chẵn)┤
I= 100+20-30+…+(-1)n*(10*n)
*/
#include <stdio.h>
#include <math.h>

signed main(){
    int n,i,x;
    printf("Vui long nhap n: ");
    scanf("%d",&n);
    while(n < 0){
    	printf("Nhap lai n > 0: ");
    	scanf("%d",&n);
	}
    float C = 0;
    for(i = 1;i <= n;i+=2){
    	C += (1.0) * sqrt(i);
	}
	printf("C = %f\n",C);
    float D = 1;
    for(i = 1;i <= n;i++){
    	D += 1 / ((1.0) * (2 * n + 1));
	}
	printf("D = %f\n",D);
	int F = 0;
	for(i = 1;i <= n;i++){
		F += (2 * n + 1);
	}
	printf("F = %d",F);
	printf("\nNhap x: ");
	scanf("%d",&x);
	while(x < 0){
		printf("Vui long nhap lai x > 0: ");
		scanf("%d",&x);
	}
	float T = 100;
	for(i = 1;i <= n;i++){
		if (i % 2 == 1){
			T +=  x / ((1.0) *  (10 * i));
		}
		else T -= x / ((1.0) * (10 * i));
	}
	printf("T = %.2f\n",T);
	float F2 = 0;
	for(i = 1;i <= n;i++){
		F2 += exp(i * x);
	}
	printf("F2 = %f\n",F2);
	int I = 100;
	
    return 0;
}
