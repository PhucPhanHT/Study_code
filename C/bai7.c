/* bai 7:Vi?t ch??ng trình nh?p vào bán kính hình c?u, tính di?n tích, th? tích c?a hình c?u ?ó.
H??ng d?n: s=4*PI*R^2	V=4/3*PI*R^3*/
#include <stdio.h>

const float PI = 3.14;

signed main(){
	float r;
	scanf("%f",&r);
	float s = 4 * PI * r * r;
	float v = (4 / 3) * PI * r * r * r;
	printf("%f %f",s,v);
	return 0;
}
