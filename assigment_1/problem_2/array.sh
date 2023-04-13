read N
declare -a array
read -a array

declare num_alone

if [ $((N%2)) == 0 ]; then
	echo "wrong input-- Number have to odd number"
else
	if [ ${#array[@]} != $N ]; then
		echo "the number of array not mach"
	else
		for index in ${array[@]}
		do
			index2=$((index+1))
			count=0
			while [ $index2 -lt $N ]
			do
				if [ $index == $index2 ] ; then
					$count=$((count+1))
				fi
			done
			
			if [ $count == 0 ]; then
				num_alone=$index
				echo $num_alone
				exit
			fi
		done
	
	fi
 
fi
