#include <stdio.h>
#define max 10000007
int num[max]={0};
void sieves()
{int i;
for(i=2;i<=max;i++)
{
if (num[i]!=0) continue;
for (int j=2*i;j<=max;j+=i)
{
if (num[j]==0)
num[j]=i;
}
}
}
int main()
{
int k;
sieves();
while(scanf("%d",&k)!=EOF)
{
if (k==1)
{
printf("%d\n",k);
continue;
}
else printf("1");
if (num[k]!=0)
{
while(k%num[k]==0)
{
printf(" x %d",num[k]);
if(num[k]==0) break;
k/=num[k];
if(num[k]==0) break;
}
}
printf(" x %d",k);
printf("\n");
}
return 0;
}

