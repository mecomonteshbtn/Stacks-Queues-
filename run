#!/bin/bash                                                                                          
gcc -Wall -Werror -Wextra -pedantic *.c -o monty -g

echo "**********    USAGE MONTY FILE   **************"
echo "HBTN: just ./monty without file_name"
./monty
echo " ---exit = 1 Usage: monty file_name"
echo $?

echo "**********     bytecode  100.m   **************"
echo "HBTN: file 100 exist?"
./monty bytecodes/100.m
echo " ---exit = 1    Cant open file 100"
echo $?

echo "**********     bytecode  00.m   **************"
echo "HBTN: simple push 1, 2, 3 and pall"
./monty bytecodes/00.m
echo "  ---exit = 0"
echo $?

echo "**********     bytecode  01.m   **************"
echo "HBTN: simple push 1, 2, 3 and pall"
./monty bytecodes/01.m
echo "  ---exit = 0"
echo $?

echo "**********     bytecode  02.m   **************"
echo "HBTN: check delimit push and pall"
./monty bytecodes/02.m
echo "  ---exit = 0"
echo $?

echo "**********     bytecode  03.m   **************"
echo "HBTN: push non-integer and pall"
./monty bytecodes/03.m
echo " ---exit = 1"
echo $?

echo "**********     bytecode  04.m   **************"
echo "HBTN: push negative number with spaces and pall"
./monty bytecodes/04.m
echo " ---exit = 0"
echo $?

echo "**********     bytecode  05.m   **************"
echo "HBTN: 3 pushes and 3 palls"
./monty bytecodes/05.m
echo " ---exit = 0"
echo $?

echo "**********     bytecode  06.m   **************"
echo "HBTN: push and pint"
./monty bytecodes/06.m
echo " ---exit = 0"
echo $?

echo "**********     bytecode  07.m   **************"
echo "HBTN: 3 pushes pall and pop 3 times together"
./monty bytecodes/07.m
echo " ---exit = 0"
echo $?

echo "**********     bytecode  08.m   **************"
echo "HBTN: just pall to printing nothing"
./monty bytecodes/08.m
echo " ---exit = 0"
echo $?

echo "**********     bytecode  09.m   **************"
echo "HBTN: push, pall and swap"
./monty bytecodes/09.m
echo " ---exit = 0"
echo $?

echo "**********     bytecode  10.m   **************"
echo "HBTN: An empty file"
./monty bytecodes/10.m
echo " ---exit = 0"
echo $?

echo "**********     bytecode  11.m   **************"
echo "HBTN: push 1 and pall at the same line, ignore pall, but print all at the end"
./monty bytecodes/11.m
echo " ---exit = 0"
echo $?

echo "**********     bytecode  13.m   **************"
echo "HBTN: push, pall and pall with empty lines"
./monty bytecodes/13.m
echo " ---exit = 0"
echo $?

echo "**********     bytecode  14.m   **************"
echo "HBTN: push without integer"
./monty bytecodes/14.m
echo " ---exit = 1     usage: push <int>"
echo $?

echo "**********     bytecode  19.m   **************"
echo "HBTN: push, sub and pall"
./monty bytecodes/19.m
echo " ---exit = 0"
echo $?

echo "**********     bytecode  28.m   **************"
echo "HBTN: push and pchar"
./monty bytecodes/28.m
echo " ---exit = 0"
echo $?

echo "**********     bytecode  31.m   **************"
echo "HBTN: push and pstr"
./monty bytecodes/31.m
echo " ---exit = 0"
echo $?

echo "**********     bytecode  35.m   **************"
echo "HBTN: push and rotl"
./monty bytecodes/35.m
echo " ---exit = 0"
echo $?

echo "**********     bytecode  15.m   **************"
echo "HBTN: #"
./monty bytecodes/15.m
echo " ---exit = 0"
echo $?

echo "**********     bytecode  16.m   **************"
echo "HBTN: nop"
./monty bytecodes/16.m
echo " ---exit = 0"
echo $?

echo "**********     bytecode  17.m   **************"
echo "HBTN: pushes"
./monty bytecodes/17.m
echo " ---exit = 1"
echo $?
