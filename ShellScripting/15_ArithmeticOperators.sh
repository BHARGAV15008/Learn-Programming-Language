#!/bin/bash

# Lets Perform Some Arithmetic Operations
num1=30
num2=6

echo ":-> $((num1+num2))"
echo ":-> $((num1-num2))"
echo ":-> $((num1*num2))"
echo ":-> $((num1/num2))"
echo ":-> $((num1%num2))"
echo ":-> $((2**3))" # 2*2*2

# Here Double round brackets use for performing some arithmentic operations
echo "${num1}"
((num1++))
echo "${num1}"
((num1+=3))
echo "${num1}"