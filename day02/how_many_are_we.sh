#!/bin/bash
#
all=$(wc -l)

echo $1

if [ -z "$1" ];
then
	echo "$1"
	echo "all students : $all"
	exit 0

else
	count=$(echo"$(</dev/stdin)" | grep -ci "par")
	echo "$1 matched $count times"

fi
