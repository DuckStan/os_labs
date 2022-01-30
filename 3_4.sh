#~/bin/bash
DIR=$1
echo Directories in this path:
ls -l $DIR | grep ^d
echo Ordinary files in this path:
ls -l $DIR | grep ^-
echo Symbolic links in this path:
ls -l $DIR | grep ^l
echo block devices in this path:
ls -l $dir | grep ^b
echo Symbolic devices in this path:
ls -l $dir | grep ^c
