#include <stdio.h>
int main(void) 
{
int N,n[10],K,i,j,t;
scanf("%d%d",&N,&K);
for(i=0;i<N;i++)
scanf("%d",&n[i]);
for(i=0;i<N;i++)
  for(j=0;j<N;j++)
      if(n[i]>n[j])
       {
       	t=n[i];
       	n[i]=n[j];
       	n[j]=t;
       }
       printf("%d",n[K]);
            return 0;
	}
