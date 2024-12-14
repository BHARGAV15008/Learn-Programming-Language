#!/bin/bash

echo $? # Checking for if last command execution successfull or not
# It's return 0 when commands wiill execute successfully, otherwise return non-zero value.

test $a -eq 5 # test commands used to check condition followed by test commands.