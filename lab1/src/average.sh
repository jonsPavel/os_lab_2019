#!/bin/bash
while read num; 
do 
let "i=i+1"
let "sum = sum+num"
done < numbers.txt
echo "Сумма чисел = $sum"
echo "Количество: $i"
let "sa=sum/i"
echo "Среднее арифметическое: $sa"