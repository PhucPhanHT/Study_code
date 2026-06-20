/*Bài 29.	Viết chương trình nhập vào một mảng số nguyên gồm n dòng, m cột. Yêu cầu tạo menu thực hiện các công việc sau:
1.	Sắp xếp ma trận theo chiều tăng(giảm) dần trái qua phải, từ trên xuống dưới.
2.	Sắp xếp ma trận tăng dần theo dòng
3.	Sắp xếp ma trận tăng dần theo cột
4.	Sắp xếp ma trận giảm dần theo dòng
5.	Sắp xếp ma trận giảm dần theo cột.
6.	Tìm số nhỏ nhất của mảng, lớn lớn nhất của mảng
7.	In các phần tử trên đường viền của ma trận
*/
#include <stdio.h>

//void sort_mt(int n,int m,int a[][]){
//	
//}

void sort_dong(int n,int m,int a[n + 1][m + 1]){
	int i,j,k;
    for(i = 1;i <= n;i++){
        for(j = 1;j <= m;j++){
            for(k = j + 1; k <= m;k++){
                if (a[i][j] > a[i][k]){
                    int tmp = a[i][j];
                    a[i][j] = a[i][k];
                    a[i][k] = tmp;
                }
            }
        }
    }
}

void sort_cot(int n,int m,int a[n + 1][m + 1]){
	int i,j,k;
    for(j = 1;j <= m;j++){
    	for(i = 1;i <= n;i++){
    		for(k = i + 1;k <= n;k++){
    			if (a[i][j] > a[k][j]){
                    int tmp = a[i][j];
                    a[i][j] = a[k][j];
                    a[k][j] = tmp;
                }
			}
		}
	}
}

signed main(){
    int n,m,muc,i,j;
    printf("Vui long nhap n va m: ");
    scanf("%d %d",&n,&m);
    int a[n + 1][m + 1];
    for(i = 1;i <= n;i++){
        for(j = 1;j <= m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("-------------------------------------------------MENU---------------------------------------------\n");
    printf("1. Sap xep ma tran theo chieu tang (giam) dan tu trai qua phai, tu tren xuong duoi\n");
    printf("2. Sap xep ma tran tang dan theo dong\n");
    printf("3. Sap xep ma tran tang dan theo cot\n");
    printf("4. Sap xep ma tran giam dan theo dong\n");
    printf("5. Sap xep ma tran giam dan theo cot\n");
    printf("6. Tim so nho nhat cua mang, lon nhat cua mang\n");
    printf("7. In cac phan tu tren duong vien cua ma tran\n");
//    scanf("%d",&muc);
//    switch (muc)
//    {
//        case 1:
//
//        break;
//    
//        default:
//        break;
//    }
    return 0;
}
