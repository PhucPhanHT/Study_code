#include <stdio.h>

// Copy struct: struct Student1 = student;
// Khai bao: Student x{val1,val2,...};
// b)Tao ctdl
// Typedef trong struct: Chi doc khong thay doi duoc no 
// nested struct: Cau truc long nhau
// fflush(stdin): dung de xoa dau '\n' sau khi nhap du lieu tranh truong hop nham lan giua cac chuoi


struct Student{
	char name[50];
	int age;
	float grade;
};

struct Class{
	int table;
	struct Student x;
};


// b)
struct A{
	int x;
};

void increment(struct A a,struct A* b){
	a.x++; // Chi cong phan tu sao chep
	b->x++; // Co tham chieu
}

typedef struct{
	int x;
} num;

typedef struct{
	int x;
}num2;


signed main(){
	struct Student x{"Toan",12,12.3};
	//printf("%s %d %.2f\n",x.name,x.age,x.grade);
	// b)
//	struct A a{10};
//	struct A b{10};
//	increment(a,&b);
//	printf("a.x = %d b.x = %d",a.x,b.x);
	//c)
//	num a{10};
//	num2 b{1000};
//	printf("a.x = %d b.x = %d",a.x,b.x);
	struct Class A1{1,"Toan",12,12.3};
	printf("%d %s %d %f",A1.table,A1.x.name,A1.x.age,A1.x.grade);
	return 0;
}
