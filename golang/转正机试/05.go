package main
import (
	"fmt"
	"strconv"
	"strings"
)
func MySprintf(s *string,str string,args [100]int){
	index := strings.Index(str,"%d")
	if index != -1{
		for _,i := range args{
			temp := strconv.Itoa(i)
			str = strings.Replace(str,"%d",temp,1)
			str = strings.Replace(str,"%%","%",1)
			index :=strings.Index(str,"%d")
			if index==-1{
				break
			}
		}
	}else{
		*s=str
	}
	*s=str
}
func main(){
	var str string
	s := &str
	var args[100] int
	args[0]=0
	args[1]=1
	args[2]=2
	MySprintf(s,"ss%dg%%gg%d",args)
	fmt.Println(*s)
}
