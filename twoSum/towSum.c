#include "towSum.h"

/* Question is:
 * Given an array of integers, find two numbers such that they add up to a specific target number.
 * The function twoSum should return indices of the two numbers such that they add up to the target, where index1 must be less than index2. Please note that your returned answers (both index1 and index2) are not zero-based.
 * You may assume that each input would have exactly one solution.
 * Input: numbers={2, 7, 11, 15}, target=9
 * Output: index1=1, index2=2
*/
int *twoSum(int numbers[], int n, int target)
{
	int *rst = NULL;
	int index1,index2 = 0;
	
	rst = (int *)malloc(2 * sizeof(int));
	if (!rst) return NULL;
	
	for (index1 = 0; index1 < n; index1++)
	{
		for (index2 = index1+1; index2 < n; index2++)
		{
			if (numbers[index1] + numbers[index2] == target)
			{
				break;
			}
		}
	}
	
	rst[0] = index1+1;
	rst[1] = index2+1;
	return rst;
}