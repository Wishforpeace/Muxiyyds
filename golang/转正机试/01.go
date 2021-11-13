package main
import "fmt"
func main() {
	var h, m, s, addSec int
	fmt.Printf("请输入小时：")
	fmt.Scanf("%d", &h)
	fmt.Printf("请输入分钟：")
	fmt.Scanf("%d", &m)

	fmt.Printf("请输入秒数：")
	fmt.Scanf("%d", &s)
	fmt.Printf("请输入增加的秒数: ")
	fmt.Scanf("%d", &addSec)
	var	addm int
	var	adds int
	adds=addSec+s 
		if adds>=60 {
		s=adds%60
		adds=adds/60	
		addm=m+adds
		
		
	}else{
		s=adds
	}
	
	if addm>=60 {
		m=addm%60
		addm=addm/60
		h=h+addm
		
	}else{	
		m=addm
	}
	for ;h>=24; {
		h=h-24
		if h<24{
			break
		}

	}
	
	fmt.Printf("%02d %02d %02d",h,m,s)

}
	
