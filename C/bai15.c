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
    scanf("%d %d",&a,&b);
    fflush(stdin);
    ch = getchar();
    switch (ch){
    	case '+':
    		printf("%d + %d = %d",a,b,a + b);
    		break;
    	case '-':
    		printf("%d - %d = %d",a,b,a - b);\
    		break;
    	case '*':
    		printf("%d * %d = %d",a,b,a * b);
    		break;
    	case '/':
    		printf("%d / %d = %d",a,b,(float)(a / (float)b));
    		break;
	}
	
    return 0;
}
