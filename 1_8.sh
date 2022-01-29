#!/bin/bash
echo The number of $(whoami) processes:
ps -u $(whoami) | wc -l
echo The number of root processes:
ps -u root | wc -l
