// Stop processing input after reading the number 42
package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	var previousNumbers []string

	scanner := bufio.NewScanner(os.Stdin)
	scanner.Split(bufio.ScanLines)

	for scanner.Scan() {
		str := scanner.Text()

		if str != "42" {
			previousNumbers = append(previousNumbers, str)
		} else {
			break
		}
	}

	for _, s := range previousNumbers {
		fmt.Println(s)
	}
}
