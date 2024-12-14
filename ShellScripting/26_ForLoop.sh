#!/bin/bash

# for item in item1 item2 item3 item4 item5
# do
#     echo "${item}"
# done

# # Print number table
# read -p "Enter your Number " number
# for i in {1..10}
# do
#     echo $((i*number))
# done

# Name printing with spaces
for names in "gaurav Sharma" "ankit Joshi" "rajkumar meena"
do
 echo "${names}"
done

# Listing all files and folders from current dir
for i in *
do
  echo $i
done

# Listing all files which have txt extensions
for i in $(ls *.txt)
do
  echo "$i"
done