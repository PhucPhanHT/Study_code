/*Bài 17.	Cần có tổng 20.000đ từ 3 loại giấy bạc 1.000đ, 2.000đ, 5.000đ. Lập chương trình để tìm tất cả các phương án có thể. */
#include <stdio.h>

signed main(){
    // x + 2y + 5z = 20;
    for(int x = 0;x <= 20;x++){
        for(int y = 0;y <= 10;y++){
            for(int z = 0;z <= 4;z++){
                if (x + 2*y + 5*z == 20){
                    printf("%d to 1.000, %d to 2.000, %d to 5.000\n",x,y,z);
                }
            }
        }
    }
    return 0;
}