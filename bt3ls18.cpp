#include<stdio.h>
#include<string.h>
struct Student {
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct Student student1[5];
    for(int i=0;i<5;i++){
    	
    printf("Nhap ten sinh vien: ");
    fgets(student1[i].name, sizeof(student1[i].name), stdin);  

    printf("Nhap tuoi sinh vien: ");
    scanf("%d", &student1[i].age);  

    printf("Nhap so dien thoai sinh vien: ");
    scanf("%s", student1[i].phoneNumber);  
    printf("ten sinh vien : %s\n", student1[i].name);
    printf("tuoi sinh vien %d\n", student1[i].age);
    printf("so dien thoai sinh vien: %s\n", student1[i].phoneNumber);
    fflush(stdin);
    }
    
    return 0;
}
