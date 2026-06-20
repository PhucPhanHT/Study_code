#include <stdio.h>

struct Nhanvien{
	char manv[10];
	char ten[30];
	float hsl;
	int nct;
};

void in(){
	printf("Ma nhan vien: %s\n",a[i].manv);
	printf("Ten nhan vien: %s\n",a[i].ten);
	printf("He so luong: %f\n",a[i].hsl);
	printf("Nam cong tac: %d\n",a[i].nct);
}

signed main(){
	struct Nhanvien a[20];
	int n,i;
	printf("Nhap so luong nhan vien: ");
	scanf("%d",&n);
	for(i = 1;i <= n;i++){
		printf("\nNhap ma nhan vien: ");
		fflush(stdin);
		gets(a[i].manv);
		printf("\nNhap ten nhan vien: ");
		//fflush(stdin);
		gets(a[i].ten);
		printf("\nNhap he so luong: ");
		scanf("%f",&a[i].hsl);
		printf("\nNhap nam cong tac: ");
		scanf("%d",&a[i].nct);
	}
	for(i = 1;i <= n;i++){
		if (a[i].nct >= 20){
			in();
		}
	}
	return 0;
}
