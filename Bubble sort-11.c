#include<stdio.h>
int main()
{
	int i,n,temp,j,a[10];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++){
			if(a[j]>a[j+1])
			{
				a[j]=a[j]+a[j+1];
				a[j+1]=a[j]-a[j+1];
				a[j]=a[j]-a[j+1];
			}
		}
	}
	printf("After Bubble sort");
	for(i=0;i<n;i++)
	printf("%d\n",a[i]);
}
