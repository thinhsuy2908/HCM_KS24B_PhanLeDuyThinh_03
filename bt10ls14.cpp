#include <stdio.h>
#include<string.h>

int main()
{
    char thinh[]="hello word";
    char phan[strlen (thinh)]={0};
    int a,b=0;
    for(int i=0;i<strlen(thinh);i++){
    	a=i;
    	if (i!=0){
    		for(int j=i-1;j>=0;j--){
    			if(thinh[i]==thinh[j]){
    				a=j;}
				    		}
				}
	phan[a]++;	
	if (phan[a]==1){
	b++;}
	}						
	for (int i=0;i<b;i++){
		printf("%c:%d\n",thinh[i],phan[i]);
		}
    return 0;
}
