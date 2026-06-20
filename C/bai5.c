// Bài 5.	Viết chương trình nhập hai số, hoán đổi giá trị hai số rồi in ra hai số.
#include <stdio.h>

signed main(){
	int a,b;
	printf("Vui long nhap a,b: ");
	scanf("%d %d",&a,&b);
	int tmp = a;
	a = b;
	b = tmp;
	printf("a = %d b = %d",a,b);
	return 0;
}
