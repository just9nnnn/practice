#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int my_strlen(char* string)
{
	int count = 0;
	while (*string != '\0')
	{
		count++;
		string++;
	}
	return count;
}
void reverse_string(char* string)
{
	char tmp = *string;
	int len = my_strlen(string) - 1;
	*string = *(string + len);
	*(string + len) = '\0';
	if (my_strlen(string + 1) >= 2)
	{
		reverse_string(string + 1);
	}
	*(string + len) = tmp;
}
int main()
{
	char arr[] = "abcdefg";
	reverse_string(arr);
	printf("%s", arr);
	return 0;
}