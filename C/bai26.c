/*Bài 26.	Viết chương trình xây dựng các hàm kiểm tra số nguyên tố, kiểm tra số chính phương (số chính phương là số khi lấy căn bặc 2 có kết quả là nguyên). Nhập vào số nguyên dương n, in ra màn hình các số nguyên tố <=n. Tính TBC các số chính phương<=n. */
#include <stdio.h>
#include <math.h>

int is_prime(int n){
    for(int i = 2; i * i <= n;i++){
        if (n % i == 0) return 0;
    }
    return (n > 1);
}

int check_scp(int n){
    int tmp = sqrt(n);
    return (tmp * tmp == n ? 1 : 0);
}

signed main(){
    int n;
    printf("Vui long nhap n: ");
    scanf("%d",&n);
    printf("Cac so nguyen to nho hon n:");
    int cnt = 0,sum = 0;
    for(int i = 1;i <= n;i++){
        if (is_prime(i)){
            printf("%2d",i);
        }
        if (check_scp(i)){
            ++cnt;
            sum += i;
        }
    }
    printf("\nTBC cac so chinh phuong <= %d la: %d",n,sum / cnt);
    return 0;
}