#!/bin/bash

myPackage="nginx"
function install() {
    # Hey their, this install function;
    shellVariable="Variable" # This variable can use inside or outside functions because this variable crese on shell storage.
    echo "I am calling from install ${1}"
}

configuration() {
    # Hey their, this is configuration function.
    local localVariable="Local Variable" # This variable cant be used outside the function.
    echo "I am calling from Configuration ${1}, ${localVariable}" 
}

function deploy {
    # Hey their, this deploy function.
    myPackage="ExpressJs"
    echo "I am calling from deploy ${1}"
}

# Here we have to call above function with passing arguments for execution.
echo "-> ${myPackage}"
install "${myPackage}"
echo "-> ${shellVariable}"
echo "-> ${myPackage}"
configuration "${myPackage}"
echo "-> ${localVariable}"
echo "-> ${myPackage}"
deploy "${myPackage}"
echo "-> ${myPackage}"