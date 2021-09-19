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
