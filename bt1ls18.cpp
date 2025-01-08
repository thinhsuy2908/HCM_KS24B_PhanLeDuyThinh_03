#include<stdio.h>
#include<string.h>
struct Student {
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct Student student1  = {"Phan Le Duy Thinh ", 18, "0707611734"};

    printf("ten sinh vien : %s\n", student1.name);
    printf("tuoi sinh vien %d\n", student1.age);
    printf("so dien thoai sinh vien: %s\n", student1.phoneNumber);
    
    return 0;
}

