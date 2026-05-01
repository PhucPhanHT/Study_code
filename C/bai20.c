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
    int n;
    printf("Vui long nhap n: ");
    scanf("%d",n);
    long long A = 0;
    for(long long i = 1;i <= (n * (n + 1));i++){
        A += 1ll * i * (i + 1);
    }
    double B = 10;
    int x;
    scanf("%d",x);
    while(x == 0){
        printf("Vui long nhap lai x != 0: ");
        scanf("%d",x);
    }
    for(int i = 2;i <= n;i++){
        B += (double) i / (1.0 * x);
    }
    double C = 0;
    for(int i = 1;i <= n;i++){
        C += (double) sqrt(i);
    }
    double D = 0;
    for(int i = 1;i <= 2 * n + 1;i+= 2){
        D += (double)1 / 1.0 * i;
    }
    int F = 0;
    for(int i = 1;i <= 2 * n + 1;i+= 2){
        F += i;
    }
    double F2 = 0;
    for(int i = 1;i <= n;i++){
        F2+= (double) (epx(i*x));
    }
    int T = 0;
    if (n % 2 == 0){
        for(int i = 1;i <= n;i+= 2){
            T += i;
        }
    }
    else {
        for(int i = 2;i <= n;i+= 2){
            T += i;
        }
    }
    int I = 100;
    for(int i = 1;i <= n;i++){
        I += pow(-1,i)*(10 * n);
    }
    printf("A = %d",A);
    printf("B = %d",B);
    printf("C = %d",C);
    printf("D = %d",D);
    printf("F = %d",F);
    printf("F2 = %d",F2);
    printf("T = %d",T);
    printf("I = %d",I);
    return 0;
}