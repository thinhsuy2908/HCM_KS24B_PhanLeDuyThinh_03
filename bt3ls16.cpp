#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void a(int *thinh, int *phan,int*tong) {
	*tong=*thinh+*phan;
}
int main(){
	int tong;
	int thinh=10,phan=50;
	a(&thinh, &phan,&tong);
	printf("in gia tri tong cua thinh phan la %d\n",tong);
return 0;
}
