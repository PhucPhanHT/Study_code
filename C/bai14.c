/*Bài 14.	Nhập vào điểm của một HS – SV gồm 3 môn: Toán, lý, hoá (điểm từng môn nằm trong đoạn [0..10]). Hãy tính tổng điểm và in ra màn hình:
	- In chữ : ‘Xuất sắc’   nếu tổng điểm = 30  
	- In chữ : ‘Giỏi’          nếu tổng điểm = 24 .. 29
	- In chữ : ‘Khá’          nếu tổng điểm = 21 .. 23
	- In chữ : ‘TB’            nếu tổng điểm = 15 .. 20
	- In chữ : ‘Yếu, kém’ nếu tổng điểm < 15
*/
#include <stdio.h>

signed main(){
    int t,l,h;
    printf("Vui long nhap diem 3 mon toan ly hoa: ");
    scanf("%d %d %d",&t,&l,&h);
    int total_points = t + l + h;
    if (total_points < 15){
        printf("Yeu,Kem");
    }
    else if (total_points >= 15 && total_points <= 20){
        printf("TB");
    }
    else if (total_points >= 21 && total_points <= 23){
        printf("Kha");
    }
    else if (total_points >= 24 && total_points <= 29){
        printf("Gioi");
    }
    else{
        printf("Xuat Sac");
    }
    return 0;
}