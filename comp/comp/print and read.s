	.data
promptInt: .asciiz "Please input an integer:"
resultInt: .asciiz "result is:"
	.text
main:
	li	$v0,4			#put in v0 that we will Call print_string
	la	$a0,promptInt	#$let $a0 point to print_string
	syscall				#call print_string function
	li 	$v0,5			#call read_int (5) and put it into $v0
	syscall				#call read_int
	move	$t0,$v0		#assign value from $v0 into $t0
	addi	$t0,$t0,1	#$t0 := $t0+1
	li		$v0,4		#now prepare $v0 to vall print_string(4)
	la		$a0,resultInt	#set the string resultInt as parameter for print_string
	syscall				#call procedure
	li		$v0,1		#print_int
	move	$a0,$t0		#set value witch is in $t0 to print_int as first parameter
	syscall				#call print_int
	