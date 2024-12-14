#!/bin/bash

name="GT5"
: ${name:?"Please Enter or Set variable values."} # Check the variable value is set or not, if not they return error message which written here and exit the code. Also empty string not allowed.

echo "I am here."

# For command line arguments
: ${1:?"Please Enter or Set variable values."} # Check the variable value is set or not, if not they return error message which written here and exit the code. Also empty string not allowed.

echo "I am here."