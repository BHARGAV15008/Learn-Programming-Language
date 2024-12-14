#!/bin/bash

# Takes input from user
# UseDefine Variable
# read name
# read age

read -p "Enter your Name " name
read -p "Enter your age " age
read -p "Enter your Password " password1 # simple way to takes password
read -p "Enter your Password " -s password2 # Secure way to takes password

echo "Hello, I am ${name}, and I am ${age} year old."
echo "Your Password is ${password1} - ${password3}."