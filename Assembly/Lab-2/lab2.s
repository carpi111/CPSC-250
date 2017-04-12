main: 
addi $a0,$0,8 		# n = 8, calculate fib(8) in this lab
addi $t0,$0,0		# t0 is f(n), or the result
addi $t1,$0,1		# fib(0) and fib(1)
addi $t2,$0,1		# next
addi $t3,$0,1		# counter

loop:
beq $t3, $a0, done	# when counter = a, stop
add $t2, $t0, $t1	# f(n+1) = f(n) + f(n-1)
add $t0, $t1, $0	# f(n-1) = f(n)
add $t1, $t2, $0	# f(n) = f(n+1)
addi $t3, $t3, 1	# counter += 1

j loop

done:
jr $ra
