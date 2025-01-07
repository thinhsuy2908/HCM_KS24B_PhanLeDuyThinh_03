#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void a(int *thinh, int *phan) {
	int temp = *thinh;
	*thinh = *phan;
	*phan = temp;
	
}
int main(){
	int thinh=10,phan=50;
	a(&thinh, &phan);
	printf("in gia tri cua thinh sau khi thay doi %d\n",thinh);
	printf("in gia tri cua phan sau khi thay doi %d\n ",phan);
return 0;
}
