package main
import 	"fmt"
func main(){
	var(
		n int =0
		m int =0
		i int = 0
		j  int = 0
	)
	fmt.Scanf("%d %d",&n,&m)
	var (
		test[100][100] int
		score[100] int
		answer[100] int
	)
	for  i=0;i<m;i++ {
		fmt.Scanf("%d",&score[i])
	}//分值
	for  i=0;i<m;i++ {
		fmt.Scanf("%d",&answer[i])
	}//正确答案
	for  j=0;j<n;j++ {
		for i=0;i<m;i++ {	
			fmt.Scanf("%d",&test[j][i])
		}
	}
	
	var result[100] int
	for i=0;i<n;i++{	
		for j=0;j<m;j++{
			if test[i][j]==answer[j]{
				result[i]+=score[j]
			}
		}
	}
	for i=0;i<n;i++{
		fmt.Printf("%d\n",result[i])
	}
	

}