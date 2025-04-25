package main

import "fmt"

func main() {
	fmt.Println("For loop array manually:")
	arr := [...]int{0, 1, 2, 3}
	for i := 0; i < len(arr); i++ {
		fmt.Println("\t", arr[i])
	}

	fmt.Println("\nFor loop over range:")
	for index, value := range arr {
		fmt.Printf("\t%d: %d\n", index, value)
	}

	fmt.Println("\nFor loop as while loop:")
	i:= 0
	for i < 4 {
		fmt.Println("\t", i)
		i++
	}
}