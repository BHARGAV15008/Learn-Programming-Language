#!/bin/bash

# While loop
# number=0
# while [[ $number != 9 ]]
# do
#     echo ${number}
#     ((number=number+1))
# done

# while [[ $say != 'yes' ]]
# do
#     echo "Hii, everybody..."
#     read -p "Say yes" say
# done

# Runs loop infinite times
# while true
# do
#     echo "Runs Infinite"
# done

# Printing Table
# tab=1
# read -p "Enter your Number: " number
# while [[ $tab -le 10 ]]
# do
#     echo "${number}  ${tab}  $((number*tab))"
#     ((tab++))
# done

# followed while loop {bash -x filename}

# Fetch line by line from variable fetching by read
# First statements output is input of read line
# # Case I
# echo -e "Hello \n World \n Vijay \n Hii" | while read line
# do
#     echo "${line}"
# done

# # Case II
# cat /etc/sudoers | while read line
# do
#     echo "${line}"
# done

# # Case III
# while read line
# do
#     echo "${line}"
# done > /etc/sudoers