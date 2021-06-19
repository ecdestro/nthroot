#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <math.h>

void main(int argc, char *argv[]) {
	double index, radicand;

	if(argc != 3) {
		errno = 1;
		perror("Use EXACTLY two numbers separated by a space");
		exit(EXIT_FAILURE);
	}
	else {
		radicand = atof(argv[1]);
		index = atof(argv[2]);
		printf("%.4lf root of %.4lf is %.4lf\n", index, radicand, exp(log(radicand)/index));
		exit(EXIT_SUCCESS);
	}
}
