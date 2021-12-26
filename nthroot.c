#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <math.h>  // Provides pow()

void main(int argc, char *argv[]) {
	double index, radicand, power;

	if(argc != 3) {
		errno = 1;
		perror("Use EXACTLY two numbers separated by a space");
		exit(EXIT_FAILURE);
	}
	else {
		radicand = atof(argv[1]);
		index = atof(argv[2]);
		power = pow(radicand, (1.0/index));
		printf("%.5lf root of %.5lf is %.5lf\n", index, radicand, power);	/* Print the index, the radicand, and the root (five dec places) */
		exit(EXIT_SUCCESS);
	}
}
