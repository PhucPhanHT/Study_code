#include <stdio.h>

#define PI 3.14

main(){
	float r;
	printf("Vui long nhap ban kinh: ");
	scanf("%f",&r);
	printf("Chu vi hinh tron la: %f\n",2*PI*r);
	printf("Dien tich hinh tron la: %f",PI * r * r);	
}
