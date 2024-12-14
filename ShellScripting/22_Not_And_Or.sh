#!/bin/bash

# Here we have to use diffeerent operator in conditions area like:
# -> Not (!) - Used to complement of conditions, return true when some error occurs
# -> Or - Used to check multiple condition or commands and return true when one of the commands executes successfully.
# -> And - Used to check multiple commands and conditions which return true only when all the commands and conditions return true.


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

if [ ! $number -le 5 ] # -eq, -le, -ge, -gt, -lt
then
    echo "That's true ${number} is not less than equal to 5."
fi

if [ ! $number -le 3 ] # -eq, -le, -ge, -gt, -lt
then
    echo "That's true ${number} is not less than equal to 3."
fi

# And operators
OS_TYPE=(uname)
# if [[ ${OS_TYPE} == "Linux" ]]
# then
#     if [[ ${UID} -eq 1000 ]]
#     then
#         echo "User is Root And Os is Linux."
#     fi
# fi

# Same as above
if [[ ${OS_TYPE} == "Linux" && ${UID} -eq 1000 ]]
then
    echo "User is Root And Os is Linux."
fi


# Or Operators
if [[ ${OS_TYPE} == "Linux" || ${UID} -eq 1000 ]]
then
    echo "User is Root or Os is Linux."
fi
