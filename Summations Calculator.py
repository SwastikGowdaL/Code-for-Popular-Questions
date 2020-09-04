
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
int b,c=0,d=0,e=0,f=0,h=0,i,g;
char a[100];
printf("Enter the password = ");
scanf("%s",&a);
g=strlen(a);
for(i=0;i<strlen(a);i++)
{
 b=a[i];
 if(b==" ")
 { 
     h++;
 }
 else
 if(isdigit(b))
 {
	 c++;
 }
 else 
 if(isupper(b))
 {
  d++;   
 }
 else 
 if(islower(b))
 {
	 e++;
 }
 else
 f++;
}
if(g<10&&g>5)
{
	if(c>=1&&d>=1&&e>=1&&f>=1&&h==0)
	{
		printf("TRUE");
	}
	else
	{
		printf("FALSE");
	}
}
else 
{
	printf("FALSE");
}
	return 0;
}
