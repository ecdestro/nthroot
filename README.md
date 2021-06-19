# nthroot
find the nth (index) root of a number (radicand) in C.

This program will find the indexed root of the radicand to a decimal precision of four.

Depends on stdlib, errno, and math libraries.

Compile with -lm flag to link libm:

cc -o nthroot nthroot.c -lm

./nthroot radicand index

Needs exactly two positive real number arguments for the radicand (the number under the radix) and the index (the number in the upper left corner of the radix)

# The Maths

This program approximates the nth root of a given number by way of natural logarithms.

Suppose that the natural logarithm of the nth root of x is equal to the natural log of x all over n:

ln <sup>n</sup>&radic;x = ln(x)/n

You can then approximate the nth root of x with e to the result of the log of x all over n:

e<sup>ln(x)/n</sup> &asymp; <sup>n</sup>&radic;x
