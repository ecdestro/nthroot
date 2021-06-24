#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <math.h>	/* Provide exp() and log() functions */

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
		printf("%.5lf root of %.5lf is %.5lf\n", index, radicand, exp(log(radicand)/index));	/* Print the index, the radicand, and the root (five dec places) */
		exit(EXIT_SUCCESS);
	}
}
