#!/bin/sh
./rshell
#1.single cmd
ls -a
echo hello
mkdir test
#some check
rm -r test
echo "single cmd test success"
#2.multiple cmd:type A
ls -a; echo hello; mkdir test
#some check
rm -r test
echo "multiple cmd separated by ';' test success"
#3.multiple cmd:type B
ls -a; echo hello && mkdir test || echo world; cd test
#some check
#some backtrace
echo "multiple cmd separated by ';' or '||' or '&&' test success"
