#!/bin/bash

if [ ! -e ./$1 ]; then
	echo " file '$1' is NOT exists."
else
	g++ $1
	count=0

	while true
	do
		echo -e "\n====== TEST$((++count)) ======"
		./a.out
	done
fi
