#include <stdio.h>

void sort_cot(int n,int m,int a[n + 1][m + 1]){
	int i,j,k;
    for(j = 1;j <= m;j++){
    	for(i = 1;i <= n;i++){
    		for(k = i + 1;k <= n;k++){
    			if (a[i][j] > a[k][j]){
                    int tmp = a[i][j];
                    a[i][j] = a[k][j];
                    a[k][j] = tmp;
                }
			}
		}
	}
}

signed main(){
	int n,m,i,j;
	scanf("%d %d",&n,&m);
	int a[n + 1][m + 1];
	for(i = 1;i <= n;i++){
		for(j = 1;j <= m;j++){
			scanf("%d",&(a[i][j]));
		}
	}
	sort_cot(n,m,a);
	for(i = 1;i <= n;i++){
		for(j = 1;j <= m;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
