#include <stdio.h>
#include <stdlib.h>	/* Give us EXIT statuses */
#include <errno.h>	/* Give us the ability to error out safely */
#include <math.h>	/* Provide exp() and log() functions */

void main(int argc, char *argv[]) {	/* Take in two command-line arguments: the radicand (the number under the radical mark) and then the index (number in the corner of the radical mark) */
	double index, radicand;		/* Declare two doubles to store the arguments: we will be converting from the character strings sent in from the command line */
					/* into floats during value assignment below. */
	if(argc != 3) {			/* Check for exactly three arguments in the program call: The program name itself, the radicand, and the index. No more, no less */
		errno = 1;		/* If the check fails, set errno to 1: Operation not permitted. We could check for too many arguments, but no errno for too few */
		perror("Use EXACTLY two numbers separated by a space");	/* Display an error message and quit program if there are not exactly two command line arguments */
		exit(EXIT_FAILURE);
	}
	else {				/* Should everything be called correctly, do the actual math and return the value */
		radicand = atof(argv[1]);	/* From stdlib, convert the ascii value of the first argument (not the program name) into a float, and save it in radicand */
		index = atof(argv[2]);		/* From stdlib, convert the ascii value of the second argument into a float and save it in index */
		printf("%.4lf root of %.4lf is %.4lf\n", index, radicand, exp(log(radicand)/index));	/* Print with a declimal precision of four decimal points the values of the index, the radicand, and the root */
		exit(EXIT_SUCCESS);	/* Exit the program successfully */
	}
}
