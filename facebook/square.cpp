#include <stdio.h>

int main()
{
	int T, N;
	char ch;
	int blackCnt, whiteCnt;
	int startIndex, cellCnt;
	scanf("%d", &T);

	while (T--)
	{
		scanf("%d", &N);

		startIndex = -1;
		cellCnt = 0;
		for (int i = 0; i < N; i++)
		{
			blackCnt = whiteCnt = 0;
			for (int j = 0; j < N; j++)
			{
				scanf("%c", &ch);
				if (ch == '#') {
					if (startIndex == -1) {
						startIndex = j;
					}
				} else {
				}
			}
		}
	}
}
