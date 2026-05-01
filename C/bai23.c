/*Bài 23.	Xây dựng hàm tính k!. Áp dụng tính giá trị tổ hợp chập k của n:*/
#include <stdio.h>

#define MAXN 100

long long gt[MAXN + 2];

// int gt2(int n){
//     if (n == 0) return 1;
//     return gt2(n - 1) * n;
// }

void sieve(){
    gt[0] = 1;
    for(int i = 1;i <= 20;i++){ 
        gt[i] = gt[i - 1] * i;
    }
}

long long tohop(int k,int n){
    return gt[n] / (gt[k]*gt[(n - k)]);
}

signed main(){
    int k,n;
    printf("Nhap k va n: ");
    scanf("%d %d",&k,&n);
    sieve();
    printf("To hop chap %d cua %d la: %lld",k,n,tohop(k,n));
    return 0;
}