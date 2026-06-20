#include <stdio.h>

signed main(){
	char hoten[20];
	int tongdiem;
	printf("Nhap ho ten: ");
	gets(hoten);
	printf("\nNhap tong diem: ");
	scanf("%d",&tongdiem);
	while (tongdiem < 0 || tongdiem > 10){
		printf("Vui long nhap lai tong diem: ");
		scanf("%d",&tongdiem);
	}
	printf("%s ",hoten);
	if (tongdiem <= 5) printf("Kem");
	else if (tongdiem >= 6 && tongdiem < 7) printf("Trung binh");
	else if (tongdiem >= 7 && tongdiem < 8) printf("Kha");
	else printf("Gioi");
}
