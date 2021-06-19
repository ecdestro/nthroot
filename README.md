# nthroot
find the nth (index) root of a number (radicand) in C.

This program will find the indexed root of the radicand to a decimal precision of four.

Depends on stdlib, errno, and math libraries.

Compile with -lm flag to link libm:

cc -o nthroot nthroot.c -lm

./nthroot <radicand> <index>

Needs exactly two positive real number arguments for the radicand (the number under the radix) and the index (the number in the upper left corner of the radix)
