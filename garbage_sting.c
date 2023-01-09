#include<stdio.h>
#include<string.h>

char garbage_str(char *);
int main()
{
	char str[100];
	printf("Enter the string\n ");
	scanf("%[^\n]",str);
	printf("string is %s\n",str);
	char (*fp)(char*)=garbage_str;
	fp(str);
}

char garbage_str(char *str)
{
	for(int i=0;str[i];i++)
	{
		if((((str[i]>='A')&&(str[i]<='Z'))||((str[i]>='a')&&(str[i]<='z'))||(str[i]==32))!=1)
		{
			memmove(str+i,str+i+1,strlen(str+1)+1);
			i--;
		}
	}
	printf("string = %s\n",str);
}
