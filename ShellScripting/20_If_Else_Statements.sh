#!/bin/bash

# Make sure during pass condition in square brackets we need to give space before and at the end

# if commands or conditions
# then 
#     Written your code here when condition true or commands run successfully.
# fi # end condition

# if ls # command run successfully and execute if blocks.
# then
#     echo "Command run successfull."
# fi


# if lsl # Command not run successfully and exit code.
# then
#     echo "Command run successfull."
# fi

# echo "I am Here"

## "if test $number -eq 5" is alternative of "if [$number -eq 5]"
number=4

if [ $number -le 5 ] # -eq, -le, -ge, -gt, -lt
then
    echo "That's true ${number} is less than equal to 5."
fi

echo
if [ "itg" == "itg" ]
then
    echo "both are equals..."
fi

echo
if [ itg == itg ]
then
    echo "both are equals..."
fi

name=itg
echo
if [ $name == itg ]
then
    echo "both are equals..."
fi

# Let's check Strings contains space
name="Techno World"
if [ $name == "Techno World" ]
then
    echo "both strings are same"
else 
    echo "Both are not same"
fi

# if [ $name == Techno World ] # gives error because of string contains space and teminal or shell takes as commands
# then
#     echo "both strings are same"
# fi

nName="Techno World"
if [ $name == $nName ] # It gives error too many arguments because it contains space in value
then
    echo "both strings are same"
else 
    echo "Both are not same"
fi

if [ "$name" == "$nName" ] # We have to enclosed under double inverted commas
then
    echo "both strings are same"
else 
    echo "Both are not same"
fi

if [[ $name == $nName ]] # Otherewise enclosed condition under double square brackets
then
    echo "both strings are same"
else 
    echo "Both are not same"
fi

# Let's perform nexted if-else

num=10
if [[ ${num} -eq 10 ]]
then
    echo "Number is 10"
else
    if [[ ${num} -gt 10 ]]
    then
        echo "Number is Greater than 10."
    else
        echo "Number is less than 10"
    fi
fi

age=18
if [[ ${age} -ge 18 ]]
then
    if [[ ${age} -ge 65 ]]
    then
        echo "YOur age to large..."
    else
        echo "Eligible to get Lincence."
    fi
else
    echo "You are too young..."
fi

# Let's perform if else ladder
marks=56
if [[ ${marks} -gt 90 ]]; then
    echo "Grade A+"
elif [[ ${marks} -gt 80 ]]; then
    echo "Grade A"
elif [[ ${marks} -gt 70 ]]; then
    echo "Grade B"
else
    echo "Grade C or D"
fi