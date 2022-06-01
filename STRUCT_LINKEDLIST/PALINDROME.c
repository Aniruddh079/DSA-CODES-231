#include<stdio.h>
main()
{
char str[20];
printf("Enter a string\n");
gets(str);
if(palindrome(str))

printf("palindrome");
else
printf("not a palindrome");
}

int palindrome(char s[])
{
    int i,l;
    l=strlen(s);
    for(i=0;i<i/2;i++)
    {
        if([i]!=s[l-1-i])
            return 0;
    }
    return 1;
}
