#include <stdio.h>
#include<string.h>

int main(void)
{
	char str[40],temp;
	int i;
	scanf("%s",str);
	if(strlen(str)%2==0)
	{
	for(i=0;i<=strlen(str);i+=2)
	{
		temp=str[i];
		str[i]=str[i+1];
		str[i+1]=temp;
	}
	}
	else
	{
	for(i=0;i<=strlen(str);i+=3)
	{
		temp=str[i];
		str[i]=str[i+1];
		str[i+1]=temp;
	}
	}
	printf("%s",str);
	return 0;
}
