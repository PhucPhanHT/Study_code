/*Bài 32.	Viết chương trình nhập vào một xâu:
1.	Loại bỏ kí tự vô nghĩa ở đầu xâu, cuối xâu, giữa xâu
2.	Chữ cái đầu câu viết hoa
3.	Đếm số từ trong xâu. Đưa ra màn hình từ có độ dài lớn nhất. 

*/
#include <stdio.h>

signed main(){
	char s[100];
	fflush(stdin);
	gets(s);
	int i;
	for(i = 0;i < (int)s.strlen;i++){
		if ((s[i] >= 'A' && s[i] <= 'Z'))
	}
	
	return 0;
}
