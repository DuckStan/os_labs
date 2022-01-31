#!/bin/bash
input_f=/tmp/procs.log
output_f=/tmp/procs_o.log
ps -eo euser,ruser,comm | tail -n +2 > "$input_f"
while read  user_e user_r command_k ; do
 if [[ "$user_e" != "$user_r" ]] 
 then
  echo "$command_k" 
 fi		
done < "$input_f"
