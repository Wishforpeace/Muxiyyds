package main
import "fmt"
func  main()  {
	var m,n int 
	fmt.Scanf("%d %d",&m,&n)
	var island[1000][1000] int 
	var(
		i int =0
		j int =0
		p int =0
		q int =0
	)//辅助
	for i=0;i<m;i++{
		for j=0;j<n;j++{
			fmt.Scanf("%d",&island[i][j])
		}
	}
	var count int =0//统计次数
	var x[1000] int
	var y[1000] int
	//记录坐标
	
	for ; ; count++{
		if infect(island,m,n){
			break
		}else{
			for i=0;i<m;i++{
				for j=0;j<n;j++{
					if island[i][j] == 1{
						y[p]=i
						p++	
						x[q]=j
						q++
					}
				}
			}
			for i=0;i<p;i++{
				if y[i]== 0 {
					island[y[i]+1][x[i]]=1 
				}
				if y[i]==m {
					island[y[i]-1][x[i]]=1
				}
				if (y[i]!=0&&y[i]!=m){
					island[y[i]+1][x[i]]=1
					island[y[i]-1][x[i]]=1
				}
				if x[i]==0 {
					island[y[i]][x[i]+1]=1
				}
				if x[i]==m {
					island[y[i]][x[i]-1]=1
				}
				if (x[i]!=m&&x[i]!=0){
					island[y[i]][x[i]-1]=1
					island[y[i]][x[i]+1]=1
				}
			}
		}

	}
	fmt.Println(count)
}
func infect(a[1000][1000] int,m int,n int)bool{
	var (
		i int =0
		j int =0
		index int =0
	)
	for i=0;i<m;i++{
		for j=0;j<n;j++{
			if a[i][j]==1{
				index ++
			}
		}
	}
	if index !=m*n{
		return false
	}
	return true
}