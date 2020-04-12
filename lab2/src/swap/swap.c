#include "swap.h"

void Swap(char *left, char *right)
{
  	char mid;
	mid  = *left;
	*left = *right;
	*right = mid;
}
