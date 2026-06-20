/*Bài 12.	Viết chương trình nhập thông tin sinh viên: hoten, tongdiem. Xếp loại cho sinhvien. Nếu tongdiem<5 thì xếp loại kém, 5<=tongdiem<7 thì xếp loại trung bình, 7<=tongidem<8 thì xếp loại khá, còn lại giỏi. Hãy in ra thông tin hoten và xếp loại sinh viên.*/
#include <stdio.h>

signed main(){
    char hoten[20];	
    float tongdiem;
    printf("Nhap Ho Ten: ");
    gets(hoten);
    printf("\nNhap tong diem: ");
    scanf("%f",&tongdiem);
    while (tongdiem < 0 || tongdiem > 10){
    	printf("Vui long nhap lai diem lon hon bang 0 va nho hon bang 10: ");
		scanf("%f",&tongdiem);
	}
    if (tongdiem < 5){
        printf("Ho ten: %s , xep loai: Kem",hoten);
    }
    else if (tongdiem >= 5 && tongdiem < 7){
        printf("Ho ten: %s, xep loai: Trung binh",hoten);
    }
    else if (tongdiem >= 7 && tongdiem < 8){
        printf("Ho ten: %s, xep loai: kha",hoten);
    }
    else{
        printf("Ho ten: %s, xep loai: gioi",hoten);
    }
    return 0;
}
