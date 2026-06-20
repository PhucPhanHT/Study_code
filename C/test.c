#include <stdio.h>

int is_prime(int n){
	int i;
	for(i = 2;i * i <= n;i++){
		if (n % i == 0) return 0;
	}
	return n > 1;
}

signed main(){
	int n,i;
	printf("Nhap n: ");
	scanf("%d",&n);
	int sum_le = 0,sum_chan = 0,sum_snt = 0,sum_3 = 0;
	//printf("Tat cac ca so tan cung la 6: ");
	printf("So nguyen to: ");
	for(i = 1;i <= n;i++){
		if (i % 3 == 0) sum_3 += i;
		if (is_prime(i)){
			sum_snt += i;
			printf("%d ",i);
		}
		if (i & 1){
			sum_le += i;
		}
		else sum_chan += i;
	}
	printf("\nTong cac so le: %d\n",sum_le);
	printf("Tong cac so chan: %d\n",sum_chan);
	printf("Tong cac so nguyen to: %d\n",sum_snt);
	printf("Tong cac so chia het cho 3: %d\n",sum_3);
	return 0;
}
