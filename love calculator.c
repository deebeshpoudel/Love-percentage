  /* Program on love calculator*/ 
#include<stdio.h>
#include<string.h>
int main()
{
	char name[100],partner[100],ch='%';
	int i,l,sum1=0,sum2=0,r;
	printf("Enter your name\n");
	gets(name);
	l=strlen(name);
	for(i=0;i<l;i++)
	{
		sum1=sum1+name[i];
	}
	printf("Enter your partner name\n");
	gets(partner);
	l=strlen(partner);
	for(i=0;i<l;i++)
	{
		sum1=sum1+partner[i];
	}
	r=(sum1+sum2)%100;
	printf("Love between %s and %s = %d%c",name,partner,r,ch);
}
