#!/bin/bash
DIR=/home/nursultan
all_files=$(ls -a "$DIR" | wc -l)
normal_files=$(ls -A "$DIR" | wc -l)
echo All files entires: $all_files
echo Normal files: $normal_files
echo Hidden files: $(($all_files - $normal_files))
