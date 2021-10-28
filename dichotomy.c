#include <stdio.h>
int search(int k,int a[],int len)
{		
	
	int left = 0;
	int right =len-1;
	int ret=0;
	while (right>left)
	{
		int mid=(right+left)/2;
		if(a[mid]==k)
		{
			ret=mid;
			break;
		}else if(a[mid]>k)
		{	
			right=mid-1;
		
		}else{
			left=mid+1;
		}

	}
	return ret;

}
int main(void)
{	
	int a[]={1,2,3,4,5,6,7,8};
	int k=5;
	int len=sizeof(a)/sizeof(a[0]);
	int t=0;
	t=search(k,a,len);
	printf("%d",t);

	return 0;




}

