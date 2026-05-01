/*Bài 24.	Viết hàm tính tổng S, với n nguyên dương được nhập vào từ bàn phím:
	S = 1! - 2! + 3! -4! + .. + (-1)n+1 n!
*/
#include <stdio.h>

int gt[22];

void sieve(){
    gt[0] = 1;
    for(int i = 1;i <= 20;i++){
        gt[i] = gt[i - 1] * i;
    }
}

signed main(){
    sieve();
    int n;
    printf("Vui long nhap n: ");
    scanf("%d",&n);
    long long s = 0;
    for(int i = 1;i <= n;i++){
        if (i % 2 == 0){
            s += gt[i];
        }
        else s -= gt[i];
    }
    printf("Tong bang: %lld",s);
    return 0;
}