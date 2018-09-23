#include <stdio.h>
#include <unistd.h>

int main()
{

int a;

printf("enter number:");
scanf("%d",&a);

if(a>=10)
	printf("a>=10\n%d",a);
else
	printf("a<10\n%dn",a);



}
