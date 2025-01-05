#include <stdio.h>
#include<string.h>

int main()
{
    char thinh[]="hello word";
   
    for(int i=0;i<strlen(thinh);i++){
    	if (i==0||(i>0&&thinh[i-1]==' ')){
    		thinh[i]-=32;
    	}
    		}	
	printf("%s",thinh);
	
    return 0;
}
