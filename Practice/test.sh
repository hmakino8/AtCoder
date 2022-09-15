#!/bin/bash

trap 'rm a.out' EXIT

if [ ! -e ./$1 ]; then
	echo " file '$1' is NOT exists."
else
	g++-11 $1
	if [ ! -e a.out ]; then
		exit 1;
	fi
	count=0
	while true
	do
		echo -e "\n====== TEST$((++count)) ======"
		./a.out
	done
fi
