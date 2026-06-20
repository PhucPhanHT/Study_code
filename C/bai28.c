/*Bài 28.	Viết chương trình nhập vào một dãy gồm n số nguyên. Yêu cầu tạo menu thực hiện các công việc sau:
1.	Sắp xếp dãy số theo chiều tăng dần  
2.	Sắp xếp dãy số theo chiều giảm dần
3.	Tính trung bình cộng các số lẻ 
4.	Tìm phần tử lớn nhất, nhỏ nhất của dãy 
5.	In và tính TBC các số nguyên tố, 
6.	In các số chính phương
7.	In các số hoàn hảo
8.	In và tính TBC các số chia hết cho 6 tận cùng bằng 2.
*/
#include <stdio.h>
#include <math.h>


void sort_td(int n,int a[]){
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= n;j++){
			if (a[i] > a[j]){
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
}

void sort_gd(int n,int a[]){
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= n;j++){
			if (a[i] < a[j]){
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
}

void tbc_sl(int n,int a[]){
	int sum = 0;
	for(int i = 1;i <= n;i++){
		sum += a[i];
	}
	if (n & 1) return (sum / (n + 1));
	printf("Trung binh cong cac so le trong mang la: %d\n",(sum / (n)));
}

int max_el(int n,int a[]){
	int mx = 0;
	for(int i = 1;i <= n;i++){
		if (a[i] > mx) mx = a[i];
	}
	return mx;
}

int min_el(int n,int a[]){
	int mn = INFINITY;
	for(int i = 1;i <= n;i++){
		if (a[i] < mn) mn = a[i];
	}
	return  mn;
}

int is_prime(int n){
	for(int i = 2;i * i <= n;i++){
		if (n % i == 0) return 0;
	}
	return n > 1;
}

void in_tbc_snt(int n,int a[]){
	printf("Cac so nguyen to co trong mang la: ");
	int cnt_snt = 0,sum_snt = 0;
	for(int i= 2;i <= n;i++){
		if (is_prime(a[i])){
			printf("%d ",a[i]);
			sum_snt += a[i];
			++cnt_snt;
		}
	}
	printf("\nTBC cac so nguyen to: ",((float)sum_snt / cnt_snt));
}

int check_cp(int x){
	int tmp = sqrt(x);
	return (tmp * tmp == x);
}

void in_cp(int n,int a[]){
	printf("Cac so chinh phuong co trong mang: ");
	for(int i = 1;i <= n;i++){
		if (check_cp(a[i])){
			printf("%d",a[i]);
		}
	}
}

int check_shh(int n){
	int sum_uoc = 1;
	for(int i = 2;i * i <= n;i++){
		if (n % i == 0){
			sum_uoc += i;
			if (i != n /i) sum_uoc += (n / i);
		}
	}
	return (n == sum_uoc);
}

void in_shh(int n,int a[]){
	printf("Cac so hoan hao co trong mang: ");
	for(int i = 1;i <= n;i++){
		if (check_shh(a[i])){
			printf("%d",a[i]);
		}
	}
}

void in_tbc6(int n,int a[]){
	int cnt = 0,sum = 0;
	printf("Cac so chia het cho 6 tan cung 2 la: ");
	for(int i = 1;i <= n;i++){
		if (i % 6 == 0 && i % 10 == 2){
			printf("%d ",i);
			++cnt;
			sum += i;
		}
	}
	printf("\n TBC cac so chia het cho 6 tan cung bang 2: %d",sum / cnt);
}


signed main(){
	int n,i,muc;
	printf("Vui long nhap n: ");
	scanf("%d",&n);
	int a[n + 1];
	for(i = 1;i <= n;i++){
		scanf("%d",&a[n]);
	}
	printf("----------------------------------------------------------------\n");
	printf("-------------------------MENU-----------------------------------\n");
	printf("1. Sap xep day so theo chieu tang dan\n");
	printf("2. Sap xep day so theo chieu giam dan\n");
	printf("3. Tinh trung binh cong cac so le\n");
	printf("4. Tim phan tu lon nhat, nho nhat cua day\n");
	printf("5. In va tinh TBC cac so nguyen to\n");
	printf("6. In so chinh phuong\n");
	printf("7. In cac so hoan hao\n");
	printf("8. In va tinh TBC cac so chia het cho 6 tan cung bang 2\n");
	scanf("%d",muc);
	switch (muc){
		case 1:
			sort_tn(n,a);
            break;
		case 2:
			sort_gd(n,a);
            break;
		case 3:
			tbc_sl(n,a);
            break;
		case 4:
			printf("Phan tu lon nhat cua day la: \n",max_el(n,a));
			printf("Phan tu nho nhat cua day la: \n",min_el(n,a));
            break;
		case 5:
			in_tbc_snt(n,a);
			break;
		case 6:
			in_cp(n,a);
			break;
		case 7:
			in_shh(n,a);
			break;
		case 8:
			in_tbc6(n,a);
			break;
	}
	return 0;
}
