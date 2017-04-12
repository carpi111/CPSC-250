main:
addi $a0, $0, 20	# f = 20
addi $a1, $0, 30	# g = 30
addi $a2, $0, 40	# h = 40
addi $a3, $0, 50	# i = 50
jal diffofsums
add $s0, $v0, $0
jal done
diffofsums:
add $t0, $a0, $a1	# t0 = f + g
add $t1, $a2, $a3	# t1 = h + i
sub $s0, $t0, $t1	# s0 = (f + g) - (h + i)
add $v0, $s0, $0
jr $ra
done:
jr $ra
