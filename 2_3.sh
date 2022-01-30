#!/bin/bash
SRC=/home/nursultan/bash.txt
FILE_Z=/tmp/zeros
FILE_NZ=/tmp/nozeros
grep 000000 $SRC > $FILE_Z
grep -v 000000 $SRC > $FILE_NZ
head $FILE_Z
tail $FILE_NZ
