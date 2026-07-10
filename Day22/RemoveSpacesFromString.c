#include <stdio.h>
#include <string.h>
int main()
{       int length,i,j;
    char ch;
    char str[100];
    printf("Enter String:");
    fgets(str, sizeof(str), stdin);
 //as we have used fgets so'\n' it will be there hence 1 character increase ho gya so that's why we will subtract 1 from strlen(str);
   // length=(strlen(str)-1);
    //lookabove can work but it is not good practice;
        //we can use str[strcspn(str,"\n")]=0; for removing newline if it exits ;
        //this  will make our code  better.
        str[strcspn(str,"\n")]=0;
        length=strlen(str);
printf("length is:%d\n",length);
for(i=0;str[i]!='\0';i++){
    ch=str[i];
    if((ch==' ')||(ch=='\t')||(ch=='\n')){
        for(j=i;j<length-1;j++){
            str[j]=str[j+1];
        }
        length=length-1;
    }
}
printf("\nlength after removing spaces :%d",length);
printf("\nNew String is:\n");
for(int i=0;i<length;i++){
    printf("%c",str[i]);
}
    return 0;
}