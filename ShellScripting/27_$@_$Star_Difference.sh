#!/bin/bash

# Case I: Schenario
echo "=========== loop one ========"
for i in $*
do
    echo $i
done

echo "=========== loop two ========"
for i in $@
do
    echo $i
done

echo
# Case II: Schenario
echo "=========== loop one ========"
for i in "$*"
do
    echo $i
done

echo "=========== loop two ========"
for i in "$@"
do
    echo $i
done


# Read files
for i in $(cat 26_ForLoop.sh)
do
    echo "${i}"
done
