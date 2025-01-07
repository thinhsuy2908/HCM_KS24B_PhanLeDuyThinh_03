#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void a(int *thinh,int size){
	for(int i=0;i<size;i++){
		printf("%d",*(thinh+i));
		}
		}
int main(){
	int thinh[]={1,2,3,4,5};
	int size =sizeof(thinh)/sizeof(int);
	printf("cac phan tu trong mang la ");
	a(thinh,size);

return 0;
}
