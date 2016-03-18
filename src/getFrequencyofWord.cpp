/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>

int count_word_in_str_way_1(char *str, char *word){

	int index = 0, index1 = 0, count = 0, length = 0, index2, length_str = 0;
	for (index = 0; word[index] != '\0'; index++)
		length++;
	for (index = 0; str[index] != '\0'; index++)
		length_str++;

	index = 0;
	index2 = 0;
	for (; index2 <= length_str - length;)
	{
		if (str[index] == word[index1])
		{
			index++;
			index1++;
			if (word[index1] == '\0')
			{
				index1 = 0;
				count++;
				index = ++index2;
			}
		}
		else if (str[index] != word[index1])
		{
			index1 = 0;
			index2++;
			index = index2;
		}
	}
	return count;
}

int count_word_int_str_way_2_recursion(char *str, char *word){
	return 0;
}

