#include <stdio.h>
int main() {
int a[100],n,r,g=0,m,k;
scanf("%d",&n);
k=n;
while(n!=0)
{
r=n%10;
a[g++]=r;
n=n/10;
}
m=a[--g]*10+a[0];
if(k%m==0)
printf("True");
else 
printf("False");
return 0;
}
