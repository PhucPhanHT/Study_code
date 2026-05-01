/*Bài 18.	Viết chương trình tìm các số có 3 chữ số sao cho tổng các chữ số cộng lại bằng 9. In kết quả ra màn hình (ví dụ: 234 có tổng 3 chữ số: 2+3+4=9)*/
#include <stdio.h>

signed main(){
    // abc: a + b + c = 9;
    for(int a = 1;a <= 9;a++){
        for(int b = 0;b <= 8;b++){
            for(int c = 0;c <= 8;c++){
                if (a + b + c == 9){
                    printf("%d%d%d co tong 3 chu so: %d+%d+%d = 9\n",a,b,c,a,b,c);
                }
            }
        }
    }
    return 0;
}