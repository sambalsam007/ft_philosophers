#!/bin/bash
# Why this script?: 
# to run program multiple times to check for race conditions

cc producer_consumer.c -o producer_consumer.out

NBR=0
FOUND_ZERO=0
while [ $NBR -lt 100 ]; do
	OUTPUT=$(./producer_consumer.out)
	echo -ne "test $NBR\t"
	echo $OUTPUT
	echo $OUTPUT | grep 0 &>/dev/null && echo "--found a zero" && FOUND_ZERO=1 && break
	((NBR++))
done
[[ "$FOUND_ZERO" == 0 ]] && echo "try again"
