#include<stdio.h>
main()
{
 char s[100];
 int j,a[5],length,i;
 printf("Enter the text : ");
 scanf("%s",s);
 length=0;
 j=0;
 i=0;
while(s[i]!='\0'){
if(s[i]=' ')
i++;
 else
while(s[i]!=' ')
{
length++;
i++;
}
a[j]=length;
j++;
length=0;
}
for(i=0;i<5;i++)
printf("Word %d : %d characters\n",i+1,a[i]);
}
