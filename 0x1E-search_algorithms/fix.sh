#!/bin/bash

# convert DOS line endings to UNIX
dos2unix -q $1

# remove trailing whitespace
sed -i 's/[[:space:]]*$//' $1