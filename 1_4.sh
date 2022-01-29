#!/bin/bash
DIR=/home/nursultan
echo "GOOD MORNING,"$(whoami)""
echo "It is "$(date)""
echo "You have some errands:"
cat "$DIR/TODO"
