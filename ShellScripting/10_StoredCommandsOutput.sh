#!/bin/bash

pwd # command use without storing their output

CURRENT_WORKING_DIR=${pwd} # Command store their output in variable CURRENT_WORKING_DIR

echo "${CURRENT_WORKING_DIR}"

date=$(date +"%D-%T")
echo ${date}