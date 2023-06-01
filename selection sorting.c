#include<stdio.h>
int main()
{
	int i,j,a[5],temp,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("The sorted list is\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
