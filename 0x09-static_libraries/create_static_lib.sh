#/bin/bash
gcc -c -std=gnu89 -L. *.c
ar rc liball.a *.o
ranlib liball.a
