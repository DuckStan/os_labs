#!/bin/bash
bash_p=$$
./2_3 > a.out
echo -n "$bash_p->"
read parent_p < a.out
echo -n "$parent_p->"
cut -d\n -f1- a.out > /dev/null
while read line
do
	echo -n "$line "
done < a.out
