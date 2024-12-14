#!/bin/bash

# We have three ways rto define function

# Case I
function install() {
    # Hey their, this install function;
    echo "I am calling from install _1"
    echo "I am calling from install _2"
}

# Case II
configuration() {
    # Hey their, this is configuration function.

    echo "I am calling from Configuration _1"
    echo "I am calling from Configuration _2"
}


# Case III
function deploy {
    # Hey their, this deploy function.

    echo "I am calling from deploy _1"
    echo "I am calling from deploy _2"
}

# Here we have to call above function for execution.
install
configuration
deploy