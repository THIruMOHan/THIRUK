#include<stdio.h>
#include<conio.h>
int main()
{
char a[5]={'a','e','i','o','u'};
char b;
printf("ENTER YOUR LETTER");
scanf("%c",&b);
if(a&&b)
printf("its vowel");
else
printf("no..no..its not a vowel...");
getch();
return 0;
}
