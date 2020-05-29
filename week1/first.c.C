#include<stdio.h>
#include<conio.h>
int main()
{
int sum=0,s[100][100],n,m,i,j,c1=0,c2=0;
clrscr();
scanf("%d%d",&n,&m);
for(i=0;i<n;i++)
{
 for(j=0;j<m;j++)
 {
   scanf("%d",&a[i][j]);
 }
}
for(i=0;i<n-1;i++)
 {
 for(j=0;j<m;j++)
 {
  if(a[i][j]==1)
  {
   c1++;
  }
  if(a[i+1][j]==1)
  {
   c2++;
  }
 }
 sum+=c1*c2;
 c1=0;
 c2=0;
 }
 printf("%d",sum);

getch();
return 0;
}