#include<stdio.h>
int main()
{
	int i,nums[10],n;
	for(i=0;i<10;i++)
	scanf("%d",&nums[i]);
	scanf("%d",&n);
	for(i=0;i<10;i++)
	if(n==nums[i])
	printf("yes");
	return 0;
}
