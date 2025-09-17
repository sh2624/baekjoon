// [실버 5] 1343 - 폴리오미노

#include <stdio.h>
#include <string.h>

int main(void)
{
	char board[51], res[51] = "";
	int cnt = 0;

	// 보드판 입력
	scanf("%s", board);
	int len = strlen(board);

	for (int i = 0; i < len; i++)
	{
		// X라면 카운트
		if (board[i] == 'X')
			cnt++;

		// .이라면 결과 배열에 . 추가
		if (board[i] == '.')
		{
			strcat(res, ".");

			// 근데 . 전까지 X 개수가 홀수라면 덮을 수 없음
			if (cnt % 2 == 1)
				break;
			else
				cnt = 0;
		}

		// 카운트가 2개고 다음이 X가 아니면 BB
		if (cnt == 2 && board[i + 1] != 'X')
		{
			strcat(res, "BB");
			cnt = 0;
		}

		// 카운트가 4개면 AAAA
		if (cnt == 4)
		{
			strcat(res, "AAAA");
			cnt = 0;
		}
	}

	// 결과 출력
	if (cnt % 2 == 1)
		printf("-1");
	else
		printf("%s", res);

	return 0;
}