#include <stdio.h>
#include <string.h>
int main() {
int i,m=0;
char a[100],b[100];
printf("Enter = ");
gets(a);
for(i=0;i<strlen(a);i++)
{
if(a[i]!=32)
{
b[m]=a[i];
m++;
}
}
printf("string = %s",b);
	return 0;
}
