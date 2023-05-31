#include<stdio.h>
void binsearch(int arr[],int n);
main()
{
	int arr[15],n,ele;
	int mid,i,sind,eind;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	binsearch(arr,n);
}
void binsearch(int arr[],int n)
{
    int sind,eind,i,mid,ele;
    scanf("%d",&ele);
	sind=0;
	eind=n-1;
	while(sind<=eind)
	{
		mid=(sind+eind)/2;
		if(arr[mid]==ele) 
		{
		printf("Loc:%d",mid,ele);
		break;
	    }
		if(arr[mid]>ele)
		    eind=mid-1;
		    else
		    sind=mid+1;
	}

}
