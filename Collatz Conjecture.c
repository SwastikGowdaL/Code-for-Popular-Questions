#include <stdio.h>
int main() {
int n;
printf("Enter = ");
scanf("%d\n",&n);
while(n>1)
{
if(n%2==0)
{
printf("%d/2=",n);
n=n/2;
printf("%d\n",n);
}
else
{
printf("%d*3+1=",n);
n=(n*3)+1;
printf("%d\n",n);
}
}
	return 0;
}
