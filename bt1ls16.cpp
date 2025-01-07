#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
int num=10;
int *thinh=&num;
printf("gia tri cua bien la %d \n",num);
printf("dia chi cua bien la %p \n",&num);
printf("gia tri cua bien la %d \n",*thinh);
printf("dia chi cua bien la %p \n",thinh);
return 0;
}

