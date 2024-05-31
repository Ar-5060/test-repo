#include<stdio.h>
#include<string.h>
int main(){
    int digit=0;
    int small=0,capital=0;
    char str[40]="habib is a Good boy";
    for (int i = 0; str[i]!='\0'; i++)
    {
        

        if (str[i]>=65 && str[i]<=90 )
        {
            capital++;
        }
        else if (str[i]>=97 && str[i]<=122) {
            small++;
        }
       
        digit++;
    }
            printf("Total number of vowel :%d\n",digit);
            printf("Total number of capital :%d\n",capital);
            printf("Total number of small :%d\n",small);
    
    return 0;

}
