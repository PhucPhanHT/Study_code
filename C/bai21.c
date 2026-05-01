/*Bài 21.	Tính giai thừa của một số bằng cách sử dụng đệ quy.*/
#include <stdio.h>


long long gt(int x){
    if(x == 0) return 1;
    return gt(x - 1) * x;
}

signed main(){
    int n;
    printf("Vui long nhap n: ");
    scanf("%d",&n);
    printf("Giai thua cua %d : %d",n,gt(n));
    return 0;
}