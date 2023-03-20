#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	char pass[84];
	int idx, sum = 0, diff1, diff2;

	srand(time(NULL));

	while (sum < 2773)
	{	
		pass[idx] = 32 + rand() % 95;
		sum += pass[idx++];
	}

	if (sum == 2772)
	{
		pass[idx] = '\0';
		printf("%s", pass);
	}
	else if ((2772 - sum) >= 32 && (2772 - sum) <= 126)
	{
		pass[idx++] = (2772 - sum);
		pass[idx] = '\0';
		printf("%s", pass);
	}
	else
	{
		pass[idx] = '\0';
		diff1 = (2772 - sum) / 2;
		if (((2772 - sum) % 2) == 0)
			diff2 = (2772 - sum) / 2;
		else
			diff2 = ((2772 - sum) / 2) + 1;
		
		for (idx = 0; pass[idx]; idx++)
		{
			if ((126 - pass[idx]) > 50)
			{
				pass[idx] += diff1;
				break;
			}
		}
		for (idx = 1; pass[idx]; idx++)
		{
			if ((126 - pass[idx]) > 50)
			{
				pass[idx] += diff2;
				break;
			}
		}
		printf("%s", pass);
	}
	return (0);
}
