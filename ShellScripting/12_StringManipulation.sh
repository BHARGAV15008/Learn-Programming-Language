#!/bin/bash

# str="this is scripting tutorial." 

# echo "${str}"
# echo "${str^}"  # make first letter of string capitals
# echo "${str^^}" # convert whole string to upper case

# str="MY NAME IS TECHNO"
# echo "${str}"
# echo "${str,}" # make it first letter lower
# echo "${str,,}" # convert whole string to lower case

# echo "Length of the string: ${#str}." # printing length of the strings 

# Sub-String
str="Hello print anythings."

# Skipping character from starting
# echo "${str:0}"
# echo "${str:1}"
# echo "${str:3}"

# Fetch sub-string using strating and ending index of string
# echo "${str:0:5}" # index 0 to 5 fetch sub-string from str
# echo "${str:1:1}" # index 1 to 1
# echo "${str: 5}" # Skip 5 character from starting and return whole string
# echo "${str: -5}" # Printing only last % characters as sub-string

# echo "${str#H*o}" # Delete first or shortest match from starting to o in string
# echo "${str#*o}" # Delete first or shortest match from starting to o in string

# echo "${str##H*o}" # Delete longest match from  starting to o
# echo "${str##*o}" # Delete longest match from  starting to o


echo "${str%t*.}" # Delete first or shortest match from ending to t in string
echo "${str%t*}" # Delete first or shortest match from starting to t in string

echo "${str%%t*.}" # Delete longest match from  starting to t
echo "${str%%t*}" # Delete longest match from  starting to t


echo "${str/print/display}" # First match print replace by display string
echo "${str//print/display}" # All matching pting will replace by display string

echo "${str/print}" # Remove first match print sub-string from string
echo "${str//print}" # Remove all match sub-string print from string