# nthroot
find the nth root of a number to five decimal places.

Depends on stdlib, errno, and math libraries.

Compile with -lm flag to link libm:
```
cc -o nthroot nthroot.c -lm

./nthroot radicand index
```
Needs exactly two positive real number arguments for the radicand (the number under the radical) and the index (the number in the upper left corner of the radical)

Python version built for Python3. Uses x<sup>(1.0/n)</sup> to calculate the nth root
```
python nthroot.py radicand index
```

# The Maths

This C program approximates the nth root of a given number by way of natural logarithms.

Suppose that the natural logarithm of the nth root of x is equal to the natural log of x all over n:

ln <sup>n</sup>&radic;x = ln(x)/n

You can then approximate the nth root of x with e (the natural constant, approx. 2.71828) to the result of the log of x all over n:

e<sup>ln(x)/n</sup> &asymp; <sup>n</sup>&radic;x
