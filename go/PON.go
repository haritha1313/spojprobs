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

	possiblePrimes := make([]int, amountCases)

	for i := 0; i < amountCases; i++ {
		temp, err := reader.ReadString('\n')
		if err != nil {
			fmt.Println("could not read from stdin:", err)
			return
		}

		num, err := strconv.Atoi(strings.TrimSpace(temp))
		if err != nil {
			fmt.Println("could not convert input to integer:", err)
			return
		}

		possiblePrimes[i] = num
	}

	fmt.Println("")

	for _, prime := range possiblePrimes {
		if isPrime(prime) {
			fmt.Println("YES")
		} else {
			fmt.Println("NO")
		}
	}
}
