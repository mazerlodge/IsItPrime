//
//  main.c
//  IsItPrime
//
//  Created by Mazerlodge on 9/10/20.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char * argv[]) {
	
	if (argc < 2) {
		printf("Usage: One integer argument, e.g. isItPrime 58811\n");
		return -1;
		
	}
	
	if ((argc == 3) && (strncmp(argv[2], "42", 2) == 0))
		printf("Build Path: %s\n", argv[0]);
	

	int targetVal = atoi(argv[1]);

	for (int x=2; x<targetVal; x++) {
		int remainder = targetVal % x;
		
		if (remainder == 0)
			printf("%d evenly divisible by %d\n", targetVal, x);
		
	}
	
	
	return 0;
}
