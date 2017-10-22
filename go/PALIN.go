// Find the next palindrome
package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

type StringReverser string

func (s *StringReverser) Reverse() string {
	runes := []rune(string(*s))

	for i, j := 0, len(runes)-1; i < j; i, j = i+1, j-1 {
		runes[i], runes[j] = runes[j], runes[i]
	}

	return string(runes)
}

func isPalindrome(s string) bool {
	reverser := StringReverser(s)

	if s == reverser.Reverse() {
		return true
	}

	return false
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

	kValues := make([]int, amountCases)

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

		kValues[i] = num
	}

	fmt.Println("")

	for i := 0; i < amountCases; i++ {
		found := false
		currVal := kValues[i] + 1 // the next value after k

		for found != true {
			if isPalindrome(strconv.Itoa(currVal)) {
				fmt.Println(currVal)
				found = true
			}

			currVal++
		}
	}
}
