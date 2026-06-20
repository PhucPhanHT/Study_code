/*Bài 10.	Viết chương trình nhập vào 2 số a, b. Giải và biện luận phương trình dạng ax+b=0*/
#include <stdio.h>

signed main(){
    float a,b;
    printf("Vui long nhap a va b: ");
    scanf("%f %f",&a,&b);
    if (a == 0){
        if (b == 0){
            printf("Phuong trinh co vo so nghiem\n");
        }
		}
        else{
            printf("Phuong trinh vo nghiem\n");
        }
    }
    else{
        float x = -b/a;
        printf("Phuong trinh co nghiem duy nhat: %f\n",x);
    }
    return 0;
}
