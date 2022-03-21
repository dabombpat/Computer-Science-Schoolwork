/*
 ============================================================================
 Name        : ReferenceWordSearch.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "tests.h"
#include "production.h"
#include "teamMembers.h"

int main(int argc, char* argv[]) {
    int total_words_found = 0;

	puts("Hello World, let's do a Word Search!!!");
	if(1) // tests()
	{
		puts("The tests all passed.");
		total_words_found = production(argc, argv);
	}
	else
	{
		puts("Not all tests passed; better luck next time");
	}

    printf("Successfully found %d words in the wordsearch! \n", total_words_found);
	return EXIT_SUCCESS;
}

