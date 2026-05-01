/*Bài 13.	Nhập vào một tháng của một năm . Cho biết số ngày của tháng đó. (Năm chia hết cho 4 nhưng không chia hết cho 100 hoặc năm chia hết cho 400) // Năm Thường*/
#include <stdio.h>

signed main(){
    int month;
    printf("Vui long nhap thang cua mot nam: ");
    scanf("%d",&month);
    if ((month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 8) || (month == 10) || (month == 12)){
        printf("So ngay cua thang: %d la: 31 ngay",month);
    }
    else if (month == 2){
        printf("So ngay cua thang 2 la: 28 ngay");
    }
    else printf("So ngay cua thang %d la: 30 ngay",month);
    return 0;
}