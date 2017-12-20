#include <stdio.h>
#include<string.h>
int main(void)
{
int i,k,len,arr[7];
char rom[7];
scanf("\n%s",rom);
len=strlen(rom);
for(i=0;i<len;i++)
{
    if(rom[i]=='I')
    arr[i]=1;
    else if(rom[i]=='V')
    arr[i]=5;
    else if(rom[i]=='X')
    arr[i]=10;
    else if(rom[i]=='L')
    arr[i]=50;
    else if(rom[i]=='C')
    arr[i]=100;
    else if(rom[i]=='D')
    arr[i]=500;
    else if(rom[i]=='M')
    arr[i]=1000;
    else
    printf("invalid");
}
k=arr[len-1];
for(i=len-1;i>0;i--)
{
    if(arr[i]>arr[i-1])
    k=k-arr[i-1];
    else
    k=k+arr[i-1];
}
