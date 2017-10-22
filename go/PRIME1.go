// Generate prime numbers
package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

func isPrime(num int) bool {
	if num <= 1 {
		return false
	} else if num == 2 {
		return true
	}

	for i := 2; i <= num/2; i++ {
		if num%i == 0 {
			return false
		}
	}

	return true
}

func main() {
	reader := bufio.NewReader(os.Stdin)
	amountCasesStr, err := reader.ReadString('\n')
	if err != nil {
		fmt.Println("could not read from stdin:", err)
		return
	}

	amountCases, err := strconv.Atoi(strings.TrimSpace(amountCasesStr))
	if err != nil {
		fmt.Println("could not convert input to integer:", err)
	}

	startEndValues := make([][2]int, amountCases)

	for i := 0; i < amountCases; i++ {
		temp, err := reader.ReadString('\n')
		if err != nil {
			fmt.Println("could not read from stdin:", err)
			return
		}

		numbersAsSlice := strings.Fields(temp)

		for j, v := range numbersAsSlice {
			num, err := strconv.Atoi(v)
			if err != nil {
				fmt.Println("could not convert input to integer:", err)
				return
			}

			startEndValues[i][j] = num
		}
	}

	fmt.Println("")

	for i := 0; i < amountCases; i++ {
		for j := startEndValues[i][0]; j <= startEndValues[i][1]; j++ {
			if isPrime(j) {
				fmt.Println(j)
			}
		}
		fmt.Println("")
	}
}
