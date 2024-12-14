#!/bin/bash

# -> Declared Variables
# -> Declared Functions
# -> Call the Functions

#!/bin/bash

# We have three ways rto define function

# Case I
function install() {
    # Hey their, this install function;
    echo "I am calling from install ${1}"
    echo "${0}" # It prints script file name only
    echo "${FUNCNAME}" # It's print function name
}

# Case II
configuration() {
    # Hey their, this is configuration function.

    echo "I am calling from Configuration ${1} - ${2}"
    echo "${0}" # It prints script file name only
    echo "${FUNCNAME}" # It's print function name
}


# Case III
function deploy {
    # Hey their, this deploy function.

    echo "I am calling from deploy ${1} - ${3}"
    echo "${0}" # It prints script file name only
    echo "${FUNCNAME}" # It's print function name
}

# Here we have to call above function with passing arguments for execution.
install "nodeJs"
configuration "NodeJs" "Bash"
deploy "Web Application" "version" 1.1