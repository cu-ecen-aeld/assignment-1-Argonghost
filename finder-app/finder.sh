#!/bin/bash

# Check if both arguments are provided
if [ "$#" -ne 2 ]; then
    echo "Error: Please provide a directory path and a search string."
    exit 1
fi

filesdir="$1"
searchstr="$2"

# Check if filesdir is a directory
if [ ! -d "$filesdir" ]; then
    echo "Error: $filesdir is not a directory."
    exit 1
fi

# Find matching lines and count them
matching_lines=$(grep -r "$searchstr" "$filesdir" | wc -l)

# Count the number of files in the directory and its subdirectories
num_files=$(find "$filesdir" -type f | wc -l)

# Print the result
echo "The number of files are $num_files and the number of matching lines are $matching_lines"
