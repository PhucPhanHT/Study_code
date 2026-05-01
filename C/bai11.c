/*Bài 11.	Viết chương trình giải PT bậc 2: ax2+bx+c=0 (kiểm tra điều kiện chỉ cho nhập a khác 0)*/
#include <stdio.h>
#include <math.h>

signed main(){
    float a,b,c;
    scanf("%f",&a);
    while(a == 0){
        printf("Vui long nhap lai a: ");
        scanf("%f",&a);
    }
    scanf("%f",&b);
    scanf("%f",&c);
    float delta = b * b - 4 * a * c;
    if (delta < 0){
        printf("Phuong trinh vo nghiem");
    }
    else if (delta == 0){
        float x = -b / (2 * a);
        printf("Phuong trinh co nghiem kep: x = %.2f",x);
    }
    else{
        float x1 = (-b + sqrt(delta)) / (2 * a);
        float x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Phuong trinh co 2 nghiem phan biet: x1 = %.2f, x2 = %.2f",x1,x2);
    }
    return 0;
}