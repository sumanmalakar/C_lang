#include <stdio.h>

int main()
{
	int n = 3;
	int a[3][3] = {{2, 1, 7},
								 {3, 7, 2},
								 {5, 4, 9}};

	int row, col, c;
	c = (n + 1) / 2 - 1;

	for (int i = 0; i < n; i++)
	{
		row = 1, col = 1;
		for (int j = 0; j < n; i++)
		{
			if (j == 1)
			{
				col = col * a[i][j];
			}
			if (i == 1)
			{
				row = row * a[i][j];
			}
		}
	}

	printf("the results is %d ", row);
	printf("the results is %d ", col);

	return 0;
}
