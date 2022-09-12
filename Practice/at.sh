#!/bin/bash

if [ -e ./$1 ]; then
	echo " file '$1' is already exists."
else
	cp temp.cpp $1
	code -a $1
fi
