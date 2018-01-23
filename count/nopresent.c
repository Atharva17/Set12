#include<stdio.h>
int main()
{
	int i,nums[10],n,k,count=0;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	scanf("%d",&nums[i]);
	for(i=0;i<n;i++)
	if(k==nums[i])
	count++;
	printf("%d",count);
	return 0;
}
