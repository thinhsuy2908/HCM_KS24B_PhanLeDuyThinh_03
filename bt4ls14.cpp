#include <stdio.h>
#include<string.h>

int main()
{
    char thinh[]="hello word";
    char n;
    int a=0;
    printf("vui long nhap vao 1 ky tu\n ");
    scanf("%c",&n);
    for(int i=0;i<strlen(thinh);i++){
    	if (thinh[i]==n){
    		a++;}
    		}	
	printf("chu %c co %d lan xuat hien trong chuoi\n",n,a);
    return 0;
}

