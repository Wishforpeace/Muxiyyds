

#include<stdio.h>


int main()
{
     int N = 0;
     scanf("%d",&N);
     int num[N];
     int friend[37] = {};//999和为36
     for(int i = 0 ; i < N ;i++)
     {
          scanf("%d",&num[i]);
          int tem = 0;
          while(num[i])//num[i]不等于0
          {
               tem += num[i] %10;
               num[i] /= 10;
          }
          friend[tem]++;//统计朋友数
     }
     
     int count[1000] = {};
     int index = 0;
     for(int i = 0 ; i < 50 ;i++)
     {
          if(friend[i] >=1)
              
               count[index++] = i;
               
     }
     printf("%d\n",index);
     for(int i = 0 ; i < index-1; i++)
     {
          printf("%d ",count[i]);     
     }
          printf("%d",count[index-1]);     


     return 0;     
}
	


