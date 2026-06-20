#include <stdio.h>

signed main(){
	int n,m,i,j;
	printf("Nhap n,m: ");
	scanf("%d%d",&n,&m);
	int a[n][m];
	for(i = 0;i < n;i++){
		for(j = 0;j < m;j++){
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i = 0;i < n;i++){
		for(j = 0;j < n;j++){
			if (i == j){
				printf("%d",a[i]);
			}
		}
	}
//	int cnt_chan = 0,sum_2 = 0;
//	for(i =0 ;i < n;i++){
//		for(j = 0;j < m;j++){
//			if (i == 2){
//				sum_2 += a[i][j];
//			}
//			if (a[i][j] % 2 == 0 &	& a[i][j] % 3 == 0){
//				++cnt_chan;
//			}
//		}
//	}
//	printf("Tong cac phan tu chan va chia het cho 3: %d\n",cnt_chan);
//	printf("Tong cac phan tu o hang 2: %d\n",sum_2);
//	for(i = 0;i < n;i++){
//		for(j = 0;j < m;j++){
//			printf("%d ",a[i][j]);
//		}
//		printf("\n");
//	}
	return 0;
}
