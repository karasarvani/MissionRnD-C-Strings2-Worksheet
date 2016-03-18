/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char *get_last_word(char *str)
{
	int index = 0, index1 = 0;
	char *str1;
	for (index = 0; str[index] != '\0';)
	{
		index++;
	}
	if (index == 0)
	{
		str1 = (char*)malloc(sizeof(char) * 1);
		str1[index1] = '\0';
		return str1;
	}
	str1 = (char*)malloc(sizeof(char)*index);
	index = index - 1;
	while (str[index] == ' ')
		index--;
	if (index == -1)
	{
		str1[0] = '\0';
		return str1;
	}
	for (; str[index] != ' '; index--)
	{
		if (index == 0)
			break;
	}
	if (index != 0)
		index = index + 1;
	for (; str[index] != '\0'&&str[index] != ' '; index++)
	{
		str1[index1] = str[index];
		index1++;
	}
	str1[index1] = '\0';
	return str1;
}

