/*	Nhap vao 3 so a, b, c. kiem tra 3 so co tao thanh tam giac khong. Neu la tam giac hay tinh dien tich va chu vi cua tam giac do. 
Neu chu vi p=(a + b + c)/2;  Dien tich cua tam giac  s=sqrt(p(p-a)(p-b)(p-c))
*/
#include <stdio.h>
#include <math.h>

signed main(){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if ((a + b > c) && (a + c > b) && (b + c > a)){
		float p = (float) ((1.0) * (a + b + c)) / 2;
		float s = sqrt(1.0 * p* (p - a)* (p - b) * (p - c));
		printf("Chu vi tam giac: %f\n",2*p);
		printf("Dien tich tam giac: %f\n",s);
	}
	else{
		printf("3 so da nhap khong tao thanh tam giac\n");
	}
	return 0;
}
