#!/bin/bash

name="TechnoG" # value changable

age="24"
readonly age # make it age read only

echo "(${name}, ${age})"

name="GTechno"
age=45 # Here we got an error
echo "(${name}, ${age})"

# unset variable
# name=  # case I
unset name # case II
unset age # readonly variable never be unset
echo "(${name}, ${age})"