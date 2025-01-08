#include<stdio.h>
#include<string.h>
struct Student {
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct Student student1;
     printf("Nhap ten sinh vien: ");
    fgets(student1.name, sizeof(student1.name), stdin);  

    printf("Nhap tuoi sinh vien: ");
    scanf("%d", &student1.age);  

    printf("Nhap so dien thoai sinh vien: ");
    scanf("%s", student1.phoneNumber);  

    printf("ten sinh vien : %s\n", student1.name);
    printf("tuoi sinh vien %d\n", student1.age);
    printf("so dien thoai sinh vien: %s\n", student1.phoneNumber);
    
    return 0;
}
