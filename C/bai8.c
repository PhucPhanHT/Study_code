/*Bai 8.Viet chuong tr�nh cho bi?t ch? s? h�ng tr?m, h�ng ch?c, h�ng ??n v? c?a m?t s? nguy�n d??ng c� ba ch? s?. V� d? khi nh?p s? 642 th� in ra:
"	Ch? s? h�ng tr?m: 6 ; 
"	Ch? s? h�ng ch?c: 4
"	Ch? s? h�ng ??n v?: 2
*/
#include <stdio.h>

signed main(){
	int x;
	scanf("%d",&x);
	int dv = x % 10;
	x /= 10;
	int c = x % 10;
	x /= 10;
	int tr = x % 10;
	x /= 10;
	printf("Chu so hang tram: %d\n",tr);
	printf("Chu so hang chuc: %d\n",c);
	printf("Chu so hang don vi: %d\n",dv);
	return 0;
}
