#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int a(int *thinh, int *phan) {

}
int main(){
	int thinh=10,phan=50;
	a(&thinh, &phan);
	printf("in gia tri tong cua thinh phan la %d\n",thinh+phan);
return 0;
}
