#include <stdio.h>
int main()
{	int n,i,sum,m;
 	
 	while(scanf("%d",&n)!=EOF)//多次输入
    {		
    sum=1;
    for(i=1;i<=n;i++)
    {
    scanf("%d",&m);
    if(m%2!=0)
       sum*=m;
    
   }
    printf("%d\n",sum);
    
      
    }
    return 0;
    
}

