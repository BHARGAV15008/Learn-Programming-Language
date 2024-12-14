#!/bin/bash

# User Define Variables.
name="TechnoG"
age=24


# Sysytem Define Variables.
# When type in terminal 'env' we have to show all system variables


echo "My self ${name} and my age is ${age}."
echo My self ${name} and my age is ${age}.
# echo "My self $name and my age is $age."
# echo My self $name and my age is $age.


echo ${HOME}
echo ${OSTYPE}
echo ${PATH}
echo ${$}   # Process ID
echo ${PPID} # Parent ID of Process
echo ${PWD}
echo ${HOSTNAME}

echo $SECONDS  # time required to run scripts