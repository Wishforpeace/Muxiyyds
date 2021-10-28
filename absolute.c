#include<stdio.h>
#include<math.h>
int main()
{
 int i,j,m,n,t,a[1000];
 while(scanf("%d",&n)!=EOF)//多次输入
 {
  if(n==0)//如果输入的数为0结束输入
   break;
   //dismiss the first number
  for(i=1;i<=n;i++)//把输入的n个整数存入数组中
  {
   scanf("%d",&m);
   a[i]=m;
  }
  for(j=n;j>0;j--)//用冒泡排序法把n个整数按绝对值的大小从大到小排序
  {
     for(i=j-1;i>0;i--)//比较第n个数和n-1个数，以此类推
     {
    if(fabs(a[j])>fabs(a[i]))//调用计算绝对值函数比较它们的绝对值的大小
    {
     t=a[j];
     a[j]=a[i];
     a[i]=t;
    }
   }
  }
   for(i=1;i<=n;i++)//把排序后的数组输出，ignore the first number
   {
    if(i!=n)
    printf("%d ",a[i]);
    else
     printf("%d\n",a[i]);
   }
 }
    return 0;
}





