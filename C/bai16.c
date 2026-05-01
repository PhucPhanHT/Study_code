/*Bài 16.	Viết chương trình nhập vào một ký tự. Kiểm tra xem ký tự đó là chữ cái, chữ số hay các ký tự khác. */
#include <stdio.h>

signed main(){
    char c;
    scanf("%c",c);
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
        printf("Ky tu do la chu cai");
    }
    else if (c >= '0' && c <= '9'){
        printf("Ky tu do la chu so");
    }
    else{
        printf("Ky tu do la ky tu khac");
    }
    return 0;
}