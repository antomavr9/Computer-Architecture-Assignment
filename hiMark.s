#demo Program
#
# Filename
#
#Addition of Registers

	#Ddata Section
	.data

	# Text Section
	.text

	.globl my_main

my_main:

	#Main code goes here

	li	$t1, 0x1111
	li	$t2, 0x2222
	add	$t3, $t1, $t2

	#Exit the program
	li	$v0, 10
	syscall