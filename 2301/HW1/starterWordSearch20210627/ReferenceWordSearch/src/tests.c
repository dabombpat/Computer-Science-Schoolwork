/*
 * tests.c
 *
 *  Created on: Jul 4, 2019
 *      Author: Therese
 */

#include "tests.h"
#include "production.h"

bool tests()
{
	bool allOK = true; //so far, so good
	//test the functions that get used
	//order the tests from simplest first -- this produces building blocks for use in more complex tests
	//check how functions are used in production code, this gives clues about how to provide the arguments for the invocation
	bool ok1 = testLengthDetermination();
	bool ok2 = testSubstringExtraction();
	bool ok3 = testPrintout();
	allOK = ok1 && ok2 && ok3;
	return allOK;
}

bool testLengthDetermination()                  // This function checks that the input is a non-zero number
{
	bool answer = true;                         //so far

    char* word = "Testing";                     // In this instance, the test word is "Testing"
    int stringLength = strlen(word)-1;

    if(stringLength >= 0 && stringLength <= 100)
    {
        puts("testLengthDetermination passed.");
    }
    else
    {
        puts("testLengthDetermination failed.");
        answer = false;
    }

	return answer;
}


bool testSubstringExtraction()                  // This function tests the extraction of possible substrings
{
	bool answer = true;                         //so far

	char* whole = "Another";                    // The test word in this case is "Another"
	int itsLength = strlen(whole) - 1;        //contained words are expected to be "A", "no", "not", "the", "her"
	int resultsArray[(itsLength+1)];                //records how many words of that length are found
	for(int i = 0; i<=itsLength; i++)
	{
		resultsArray[i]= (itsLength+1) - i;
	}

    puts("we should see:");
    printf("%d trials of length 1.\n", resultsArray[0]);
    printf("%d trials of length 2.\n", resultsArray[1]);
    printf("%d trials of length 3.\n", resultsArray[2]);
    printf("%d trials of length 4.\n", resultsArray[3]);
    printf("%d trials of length 5.\n", resultsArray[4]);
    printf("%d trials of length 6.\n", resultsArray[5]);
    printf("%d trials of length 7.\n", resultsArray[6]);


	substringExtraction(whole, resultsArray);

	if(getYesNo("Did the program function as expected?"))
	{
		puts("testSubstringExtraction passed.");
	}
	else
	{
		puts("testSubstringExtraction failed.");
		answer = false;
	}

	return answer;                              //contained words are expected to be "A", "no", "not", "the", "her"
}


bool testPrintout()
{
	bool answer = true; //so far

	return answer;
}
