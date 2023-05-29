#include<stdio.h>
#include<conio.h>
void insert(int arr[],int n)
{
	int pos,i,num;
	for(i=0;i<n;i++)
	printf("%d",arr[i]);
	printf("enter the pos of num");
	scanf("%d",&pos);
	printf("enter the number");
	scanf("%d",&num);
	for(i=n;i>=pos;i--)
	arr[i+1]=arr[i];
	arr[pos]=num;
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
	insert(arr,size);
}
