#!/bin/bash
DIR=/home/nursultan
FILE_T=/tmp/list_txts.log
find $DIR *.txt 2>/dev/null | grep .txt > $FILE_T
echo Size of txts in bytes:
cat $FILE_T | xargs du -acb | tail -n 1 | cut -f1
echo SIZE of txts in lines:
cat $FILE_T |xargs wc -l | tail -n 1| cut -f1


