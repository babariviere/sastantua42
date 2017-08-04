#!/bin/sh

echo "==> Compiling..."
gcc -o sastantua sastantua.c
echo "==> Testing sastantua 1"
./sastantua 1
echo "==> Testing sastantua 5"
./sastantua 5
