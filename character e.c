//playing with characters//
#include<stdio.h>
int main()
{
	char ch;
	char s[100];
	char sen[100];
	scanf("%c%s",&ch,&s);
	
	scanf("%[^\n]%*c",sen);
	printf("%c\n%s\n%s",ch,s,sen);
	
}
