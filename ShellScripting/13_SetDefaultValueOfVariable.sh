#!/bin/bash

read -p "Please enter your name " name

echo "Your name is ${name}"

# Set default value here
name=${name:-GT5} # Its working on every variable which assign empty values
echo "Your name is ${name}"

nameX=""
name=${nameX:-GT5} # Its working on every variable which assign empty values
echo "Your name is ${name}"

name=${nameY-TG5}  # Its work on only unset values
echo "Your name is ${name}"

nameY=""
name=${nameY-TG5}
echo "Your name is ${name}"