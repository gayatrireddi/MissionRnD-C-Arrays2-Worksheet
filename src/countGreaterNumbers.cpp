/*
OVERVIEW: You are given a bank statement where transactions are ordered by date. Write a function that finds the number of transactions in that statement after a given date.
-- find the count of numbers greater than a given number in a sorted array.
E.g.: Input: A[3] = { { 10, "09-10-2003", "First" }, { 20, "19-10-2004", "Second" }, { 30, "03-03-2005", "Third" } };
date = "19-10-2004"
Output: 1 (as there is only one transaction { 30, "03-03-2005", "Third" })

INPUTS: One bank statement (array of transactions) and date.

OUTPUT: Return the number of transactions in that statement after a given date.

ERROR CASES: Return NULL for invalid inputs.

NOTES:
*/
#include<string.h>
#include<stddef.h>

struct transaction{
	int amount;
	char date[11];
	char description[20];
};

int countGreaterNumbers(struct transaction *Arr, int len, char *date) {
	if (Arr == nullptr || len < 0||date==nullptr)
		return -1;
	int i = 0, j; j = len;
	while (j>0)
	{
		
		if (strcmp(Arr[i].date, date) == 0)
		{
			if (strcmp(Arr[i].date, Arr[i + 1].date) == 0) return 0;
			return len - 1 - i;
		}
		i++; j--;
	}
	return 0;
}
