/*Bài 22.	Nhâp vào một sô một ở dạng nhị phân, in ra số đó ở dạng thập phân
		Nhâp vào một sô một ở dạng thập, in ra số đó ở dạng nhị phân. 
*/
#include <stdio.h>
#include <string.h>
#include <math.h>

void bin_to_dec(char s[]){
    int nums = 0;
    for(int i = 0;i < strlen(s);i++){
        int num = s[i] - '0';
        nums += (num * pow(2,i));
    }
    printf("Dang thap phan cua so nhi phan %s la:  %d",s,nums);
}

void rev(char s[]){
    int l = 0,r = strlen(s) - 1;
    while(l <= r){
        int tmp = s[l];
        s[l] = s[r];
        s[r] = tmp;
        ++l;
        --r;
    }
}

void dec_to_bin(int n){
    char np[100];
    int i = 0;
    while(n != 0){
        np[i] = (char) ((n % 2) + '0');
        n /= 2;
        ++i;
    }
    rev(np);
    printf("So %d duoc the hien duoi dang nhi phan la: %s",n,np);
}

signed main(){
    char s[100];
    printf("Nhap so o dang nhi phan: ");
    gets(s);
    bin_to_dec(s);
    int n;
    printf("\nNhap so o dang thap phan: ");
    scanf("%d",&n);
    dec_to_bin(n);
    return 0;
}