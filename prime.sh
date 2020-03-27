#!/bin/bash
#
#prime.sh to display first n prime numbers. The value of n is input by user
#

prime=0   
echo -n "Enter the value of n: " 
read n                            
echo -n "First $n prime numbers are: "  
echo -n "2 "
counter=1
for((i=3;$counter<n;))
do
for((j=i-1;j>=2;))
do
if [ `expr $i % $j` -ne 0 ] 
then
prime=1
else
prime=0
break
fi
j=`expr $j - 1`
done
if [ $prime -eq 1 ] 
then
echo -n "$i "
counter=`expr $counter + 1`
fi
i=`expr $i + 1`

done
echo " "

