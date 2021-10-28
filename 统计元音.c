	#include <stdio.h>
	#include <string.h>
	int main(){
		char a[100];
		int i,k,n;
		int b[5];
		scanf("%d",&n);
		getchar();//读走回车键
		while(n--){
			scanf("%s",a);
			k=strlen(a);//计算长度
			for(i=0;i<5;i++)
				b[i]=0;
			for(i=0;i<k;i++){
				if(a[i]=='a')
					b[0]++;
				if(a[i]=='e')
					b[1]++;
				if(a[i]=='i')
					b[2]++;
				if(a[i]=='o')
					b[3]++;
				if(a[i]=='u')
					b[4]++;
			}
			printf("a:%d\ne:%d\ni:%d\no:%d\nu:%d\n",b[0],b[1],b[2],b[3],b[4]);

				if(n!=0)
				printf("\n");
			}
			return 0;
		}







