#include<stdio.h>
#include<conio.h>
void delete(int arr[],int n)
{
	int pos,i,num;
	for(i=0;i<n;i++)
	printf("%d",arr[i]);
	printf("enter the pos of num");
	scanf("%d",&pos);
	printf("enter the number");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	if(arr[i]==num)
	{
		break;
	}
	for(i=pos;i<n;i++)
	arr[i]=arr[i+1];
	n--;
	for(i=0;i<n;i++)
	printf("%d",arr[i]);
}

int main()
{
	int size,num,i;
	printf("enter the size");
	scanf("%d",&size);
	int arr[size];
	printf("enter the array");
	for(i=0;i<size;i++)
	scanf("%d",&arr[i]);
	delete(arr,size);
}
