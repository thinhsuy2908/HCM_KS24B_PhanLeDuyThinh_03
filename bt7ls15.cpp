#include <stdio.h>
#include <string.h>
int main()
{
    int a=0,b=0,c=0;
    char thinh[50]="Hello my gmail is test123@gmail.com";
    for(int i=0;i<strlen(thinh);i++){
        if (thinh[i]>='a' && thinh[i]<='z' || thinh[i]>='A' && thinh[i]<='Z'){
            a++;}
            else if (thinh[i]>='0' && thinh[i]<='9'){
                b++;
                }
                else{
                    c++;
                }
    }
    printf("So ky tu la chu cai: %d\n",a);
    printf("So ly tu la chu so: %d\n",b);
    printf("So ky tu dac biet:%d\n",c);


    return 0;
}s

