main:
addi $s0, $0, 1     # pow = 1
addi $s1, $0, 0     # x = 0
addi $t1, $0, 3     # base of exponent
addi $t0, $0, 729   # t0 = 729 for comparison
while:
beq $s0, $t0, done  # if pow == 729, exit while
mul $s0, $s0, $t1
addi $s1, $s1, 1
j while
done:

jr $ra
