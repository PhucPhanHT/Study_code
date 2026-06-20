#include <stdio.h>
#include <string.h>

char* rev(char a[]){
	int l = 0,r = (int) strlen(a) - 1;
	while(l <= r){
		int tmp = a[l];
		a[l] = a[r];
		a[r] = tmp;
		++l;
		--r;
	}
	return a;
}

char* lower(char a[]){
	for(int i = 0;i < (size_t)strlen(a);i++){
		if (a[i] >= 'A' && a[i] <= 'Z'){
			a[i] += 32;
		}
	}
	return a;
}

signed main(){
	// do dai xau
	// tu chu hoa thanh chu thuong
	// dao nguoc
	char s[20];
	printf("Hay nhap chuoi s: ");
	fflush(stdin);
	gets(s);
	printf("Do dai cua xau s: %d\n",strlen(s));
	printf("xau sau khi chuyen thanh chu thuong: %s\n",lower(s));
	printf("Xau sau khi dao nguoc: %s",rev(s));
	return 0;
}
