// bai 6: vi?t ch??ng tr�nh t�nh chu vi v� di?n t�ch h�nh tr�n c� b�n k�nh r (???c nh?p t? b�n ph�m).
//H??ng d?n: Chu vi =2* p*r;  S= p * r * r.
#include <stdio.h>

signed main(){
	int p,r;
	scanf("%d %d",&p,&r);
	int cv = 2 * p * r;
	int s = p * r * r;
	printf("Chu vi: %d dientich: %2d",cv,s);
	return 0;
}
