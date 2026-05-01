/*Bài 15.	Nhập vào 2 số nguyên a, b và một kí tự ch. Hãy kiểm tra ch:
               Nếu ch=’+’ thì thực hiện phép tính: a + b
               Nếu ch=’-‘ thì thực hiện phép tính: a-b
               Nếu ch=’*’ thì thực hiện phép tính: a * b
               Nếu ch=’/’ thì thực hiện phép tính: a/b. 
    Còn lại thì đưa ra thông báo không phải là phép toán  
*/
#include <stdio.h>

signed main(){
    int a,b;
    char ch;
    printf("Vui long nhap so a,b va phep toan ch: ");
    scanf("%d %d %c",&a,&b,&ch);
    if (ch == '+'){
        printf("%d + %d = %d",a,b,a + b);
    }
    else if (ch == '-'){
        printf("%d - %d = %d",a,b,a - b);
    }
    else if (ch == '*'){
        printf("%d * %d = %d",a,b,a * b);
    }
    else if (ch == '/'){
        printf("%d * %d = %d",a,b,a / b);
    }
    else{
        printf("Khong phai phep toan");
    }
    return 0;
}