#include <stdio.h>
#include<string.h>

int main()
{
    char thinh[]="hello word";
    int a=0;
    for(int i=0;i<strlen(thinh);i++){
    	if (thinh[i]>='A'&&thinh[i]<='Z'||thinh[i]>='a'&&thinh[i]<='z'){
    		a++;}
    		}	
	printf("so tu trong chuoi la : %d\n",a);
    return 0;
}

