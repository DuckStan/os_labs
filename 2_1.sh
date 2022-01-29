#!/bin/bash
FILE=/tmp/run.log
date >> $FILE
echo Helllo world!
wc -l $FILE  >&2
