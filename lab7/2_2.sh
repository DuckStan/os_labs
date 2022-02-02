#!/bin/bash
bash_p=$$
./2_2 > a.out
read parent_p child_p < a.out
echo "$bash_p -> $parent_p -> $child_p "
