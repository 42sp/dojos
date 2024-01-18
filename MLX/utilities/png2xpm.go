// made by PHIND
package main

import (
	"fmt"
	"image"
	_ "image/png"
	"os"
	"path/filepath"
	"strings"

	"github.com/xyproto/xpm"
)

func main() {
	// Check if a file name was provided as a command-line argument
	if len(os.Args) < 2 {
		fmt.Fprintf(os.Stderr, "Please provide a file name as an argument.\n")
		os.Exit(1)
	}

	// Get the file name from the command-line arguments
	inputFileName := os.Args[1]

	// Open the PNG file
	f, err := os.Open(inputFileName)
	if err != nil {
		fmt.Fprintf(os.Stderr, "error: %s\n", err)
		os.Exit(1)
	}
	m, _, err := image.Decode(f)
	if err != nil {
		fmt.Fprintf(os.Stderr, "error: %s\n", err)
		os.Exit(1)
	}
	f.Close()

	// Create a new XPM encoder
	enc := xpm.NewEncoder(inputFileName)

	// Get the base name of the input file (without the extension)
	baseName := strings.TrimSuffix(filepath.Base(inputFileName), filepath.Ext(inputFileName))
	outputFileName := baseName + ".xpm"

	// Prepare to output the XPM data to a file
	f, err = os.Create(outputFileName)
	if err != nil {
		fmt.Fprintf(os.Stderr, "error: %s\n", err)
		os.Exit(1)
	}
	defer f.Close()

	// Generate and output the XPM data
	err = enc.Encode(f, m)
	if err != nil {
		fmt.Fprintf(os.Stderr, "error: %s\n", err)
		os.Exit(1)
	}
}
