#!/bin/bash

# Check if the correct number of arguments is provided
if [ "$#" -ne 2 ]; then
    echo "Error: Incorrect number of arguments."
    echo "Usage: $0 <writefile> <writestr>"
    exit 1
fi

# Extract arguments
writefile="$1"
writestr="$2"

# Check if writefile argument is specified
if [ -z "$writefile" ]; then
    echo "Error: Missing writefile argument."
    echo "Usage: $0 <writefile> <writestr>"
    exit 1
fi

# Check if writestr argument is specified
if [ -z "$writestr" ]; then
    echo "Error: Missing writestr argument."
    echo "Usage: $0 <writefile> <writestr>"
    exit 1
fi

# Create the directory path if it doesn't exist
mkdir -p "$(dirname "$writefile")"

# Write content to the file, overwrite if it exists
echo "$writestr" > "$writefile"

# Check if the file was created successfully
if [ "$?" -ne 0 ]; then
    echo "Error: Unable to create the file."
    exit 1
fi

echo "File '$writefile' successfully created with content: '$writestr'"
exit 0
