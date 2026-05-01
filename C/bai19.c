/*Bài 19.	Nhập vào số nguyên n. tính tổng các số chẵn trong khoảng từ 1 đến n*/
#include <stdio.h>

signed main(){
    int n;
    scanf("%d",&n);
    int sum_even = 0;
    for(int i = 2;i <= n;i+= 2){
        sum_even += i;
    }
    printf("Tong cac so chan trong khoang tu 1 den %d la: %d",n,sum_even);
    return 0;
}