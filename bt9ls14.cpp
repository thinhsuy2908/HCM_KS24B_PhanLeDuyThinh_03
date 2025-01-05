#include <stdio.h>
#include<string.h>

int main()
{
    char thinh[]="hello word";
    char n;
    printf("nhap vao 1 ky tu bat ki\n");
    scanf("%c",
	&n);
    for(int i=0;i<strlen(thinh);i++){
    	if (n==thinh[i]){
    		thinh[i]=thinh[i]+1;
			i--;}
    		}	
	printf(" %s",thinh);
    return 0;
}

