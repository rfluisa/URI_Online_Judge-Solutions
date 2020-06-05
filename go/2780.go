//2780	Basquete de Robôs	Accepted	Go	0.208	19/10/2018 16:39:14
package main

import (
	"fmt"
)

func main() {

	var a int
	
	fmt.Scanf("%d", &a)

	if a<=800{
		fmt.Printf("1\n")
	}else if a>800 && a<=1400{
		fmt.Printf("2\n")
	}else{
		fmt.Printf("3\n")
	}
}