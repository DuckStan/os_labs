#!/bin/bash
#touch /tmp/usr.log
#touch /tmp/home.log
#FILE_U=/tmp/usr.log
#FILE_H=/tmp/home.log
#echo "$USER" > $FILE_U
#echo "$HOME" > $FILE_H
NUM_USR=$(echo "$USER" | wc -c)
NUM_H=$(echo "$HOME" | wc -c)
NUM=$(($NUM_USR+$NUM_H-2))
echo "$USER $HOME $NUM" 
