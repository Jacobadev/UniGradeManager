#!/bin/bash

# Define variables for source code files and executable
source_dir="C:/Users/Jacoba/Documents/Coding/C/Projetos/Banco_De_Dados/src"
source_files=("view.c" "model.c" "handleFunc.c" "studentFunc.c")
output_dir="C:/Users/Jacoba/Documents/Coding/C/Projetos/Banco_De_Dados/src"
executable="database"

# Change to the source directory
cd "$source_dir" || { echo "Error: Unable to change to the source directory."; exit 1; }

# Compile the source files individually and check for errors
for file in "${source_files[@]}"; do
  gcc -c "$file" || { echo "Error: Compilation of $file failed."; exit 1; }
done

# Link the object files and create the executable
gcc *.o -o "$output_dir/$executable" || { echo "Error: Linking object files failed."; exit 1; }

# Execute the program
"$output_dir/$executable"
