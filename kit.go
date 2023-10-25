package main

import (
	"fmt"
	"math/big"
)

func main() {
	// Initialize the first two Fibonacci numbers
	a := big.NewInt(0)
	b := big.NewInt(1)

	// Number of Fibonacci numbers to generate
	numFibonacci := 200

	fmt.Println("First", numFibonacci, "Fibonacci numbers:")

	for i := 0; i < numFibonacci; i++ {
		fmt.Printf("%3d: %s\n", i, a)

		// Calculate the next Fibonacci number
		next := new(big.Int)
		next.Add(a, b)

		// Swap a and b to continue the sequence
		a, b = b, next
	}

	// Check for any errors when calculating large Fibonacci numbers
	if a.Cmp(b) > 0 {
		fmt.Println("Warning: Overflow may occur for large Fibonacci numbers.")
	}
}
