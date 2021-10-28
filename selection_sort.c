#include <stdio.h>
//calculate the maximum
int max(int a[],int len){
    int maxid=0;
    for(int i=1;i<len;i++){
 	if(a[i]>a[maxid]){
        maxid=i;
    }
    }
    return maxid;
}
int main(void){
    int a[]={2,5,3,56,16,72};
    int len=sizeof(a)/sizeof(a[0]);
    //swap a[maxid],a[len-1]
    int i=0;
    for(i=len-1;i>0;i--){
	    int maxid;
	    maxid=max(a,i+1);
	    int t=a[maxid];
	    a[maxid]=a[i];
	    a[i]=t;
	
	}
    for (int i=0; i<len;i++){
	    printf("%d ",a[i]);
	}
	return 0;
}
