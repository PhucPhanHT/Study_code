/*Bài 25.	Viết hàm tính tổng S, với n nguyên dương được nhập vào từ bàn phím:
	S=1/2-1/4+1/6-1/8+...+(-1)^(k+1)  1/2n
*/
#include <stdio.h>

signed main(){
    int n;
    printf("Vui long nhap n: ");
    scanf("%d",&n);
    float sum = 0;
    for(int i = 1;i <= n;i++){
        if (i % 2 == 0){
            sum -= (float)(1 / ((1.0) * (2*i)));
        }
        else sum += (float)(1 / ((1.0) * (2 * i)));
    }
    printf("Tong bang: %.2f", sum);
    return 0;
}