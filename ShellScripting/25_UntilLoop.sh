#!/bin/bash

# Until loop exact same as while loop
# But basic difference is that Until loop run until the condition true
# Or while loop runs until the condition false
num=1
until [[ ${num} -eq 10 ]]
do
    echo ${num}
    ((num++))
done