#!/bin/bash

## File is dir
## Block Device
## Character Device
## It's Exist
## Read Permission
## Write Permission
## Execute Permission

filePath="/home"
if [ -d ${filePath} ]
then
    echo "${filePath} - File is dir"
fi

if [ -b ${filePath} ]
then
    echo "${filePath} - Block Device"
fi

if [ -c ${filePath} ]
then
    echo "${filePath} - Character Device"
fi

if [ -e ${filePath} ]
then
    echo "${filePath} - It's Exist"
fi

if [ -r ${filePath} ]
then
    echo "${filePath} - Read Permission"
fi

if [ -w ${filePath} ]
then
    echo "${filePath} - Write Permission"
fi

if [ -x ${filePath} ]
then
    echo "${filePath} - Execute 
    Permission"
fi

# ! -> not operator