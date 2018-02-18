#include <stdio.h>
int main(void) 
{
int n[10],k,N,i,j,b[10];
scanf("%d%d",&N,&k);
for(i=0;i<N;i++)
scanf("%d",&n[i]);
for(j=1,i=0;i<N;i++)
if(n[i]%2==1)
 {
 b[j]=n[i];
 j++;
 }
 printf("%d",b[k]);
	return 0;
}
