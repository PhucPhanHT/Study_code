#include <stdio.h>

signed main(){
	int n,i;
	printf("Nhap n: ");
	scanf("%d",&n);
	int a[n];
	for(i = 0;i < n;i++){
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	int max = a[0],mn = a[0];
	for(i = 1;i < n;i++){
		if (a[i] > max) max = a[i];
		if (a[i] < mn) mn = a[i];
	}
	printf("Gia tri lon nhat: %d\n",max);
	printf("Gia tri nho nhat: %d\n",mn);
	// Trung binh cong
	int sum = 0,cnt = 0;
	for(i = 0;i < n;i++){
		if (a[i] % 2 == 0){
			++cnt;
			sum += a[i];
		}
	}
	printf("Trung binh cong: %d",(float)sum / cnt);
	return 0;
}
