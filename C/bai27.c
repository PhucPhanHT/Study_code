/*Bài 27.	Xây dựng hàm tìm UCSLN, BSCLN của 2 số nguyên dương bất kỳ. Áp dụng viết chương trình nhập vào 2 số nguyên tương ứng là tử số và mẫu số của 1 phân số, viết ra màn hình dạng tối giản của phân số đó*/
#include <stdio.h>

int gcd(int a,int b){
    if (b == 0) return a;
    return gcd(b,a %b);
}

int lcm(int a,int b){
    return (a * b) / gcd(a,b);
}

signed main(){
    int tu_so,mau_so;
    scanf("%d %d",&tu_so,&mau_so);
    tu_so /= gcd(tu_so,mau_so);
    mau_so /= gcd(tu_so,mau_so);
    if (mau_so == 1){
        printf("Phan so toi gian: %d",tu_so);
    }
    else printf("Phan so toi gian: %d/%d",tu_so,mau_so);
    return 0;
}