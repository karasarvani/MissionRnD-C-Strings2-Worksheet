/*
OVERVIEW: Given a string, Count the number of consonants and vowels and copy them to 'consonants' and 'vowels' respectively
Notes : Neglect Space and Other Symbols .Consider Capital Letters too

E.g.: Input: "aB c" , Output: consonants should contain 2 and vowels 1

INPUTS: A string and two int pointers

OUTPUT: Modify the consonants and vowels pointers accordingly with their counts (*consonants=?? ;*vowels=??)

INPUT2: Dont Forget they are pointers ;consonants and vowels are addresses of two variables .

Output: consonants should be ??,vowels should be ??

??:Count them :)

NOTES: Don't create new string , Dont return anything ,you have been given two pointers ,copy values into those .
*/

#include <stddef.h>

void count_vowels_and_consonants(char *str, int *consonants, int *vowels){
	int index = 0;
	*consonants = 0; *vowels = 0;
	if (str)
	{
		for (; str[index] != '\0'; index++)
		{
			if (str[index] == 'a' || str[index] == 'e' || str[index] == 'i' || str[index] == 'o' || str[index] == 'u' || str[index] == 'A' || str[index] == 'E' || str[index] == 'I' || str[index] == 'O' || str[index] == 'U')
				(*vowels)++;
			else if ((str[index] >= 65 && str[index] <= 90) || (str[index] >= 97 && str[index] <= 122))
				(*consonants)++;

		}
	}

}

