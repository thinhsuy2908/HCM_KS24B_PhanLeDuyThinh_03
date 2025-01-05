#include <stdio.h>
#include<string.h>

int main()
{
    char thinh[]="hello word";
    int a=1;
    for(int i=0;i<strlen(thinh);i++){
    	if (thinh[i]==' '){
    		a++;}
    		}	
	printf("so tu trong chuoi la : %d\n",a);
    return 0;
}

