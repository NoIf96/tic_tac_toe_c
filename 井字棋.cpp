//x行， y列
#include<stdio.h>

int main(void)
{
	int player = 0;
	int winner = 0;
	int choice = 0;
	int x = 0;
	int y = 0;

	char board[3][3] =
	{
						  {'1','2','3'},
						  {'4','5','6'},
						  {'7','8','9'}
	};

	for (int i = 0; i < 9; i++)
	{
		printf("\n");
		printf(" %c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
		printf("---+---+---\n");
		printf(" %c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
		printf("---+---+---\n");
		printf(" %c | %c | %c\n", board[2][0], board[2][1], board[2][2]);
		player = i % 2 + 1;

		do
		{
			printf("payer %d,你的符号是：%c\n", player, (player == 1) ? 'x': 'o');
			scanf_s(" %d", &choice);

			choice = --choice;
			x = choice / 3;
			y = choice % 3;

		} while (choice < 0 || choice > 8 || board[x][y] > '9');

		board[x][y] = (player == 1) ? 'x' : 'o';

		if ((board[0][0] == board[1][1] && board[0][0] == board[2][2]) || (board[0][2] == board[1][1] && board[0][2] == board[2][0]))
		{
			winner = player;
			break;
		}
		else if ((board[0][0] == board[0][1] && board[0][0] == board[0][2]) || (board[1][0] == board[1][1] && board[1][0] == board[1][2]) || (board[2][0] == board[2][1] && board[2][0] == board[2][2]))
		{
			winner = player;
			break;
		}
		
		else if ((board[0][0] == board[1][0] && board[0][0] == board[2][0]) || (board[0][1] == board[1][1] && board[0][1] == board[2][1]) || (board[0][2] == board[1][2] && board[0][2] == board[2][2]))
		{
			winner = player;
			break;
		}
		
	}

	printf("\n");
	printf(" %c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
	printf("---+---+---\n");
	printf(" %c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
	printf("---+---+---\n");
	printf(" %c | %c | %c\n", board[2][0], board[2][1], board[2][2]);

	if (winner)
		printf("\n player%d你赢了 \n游戏结束\n", winner);
	else
		printf("\n平局\n");

	return 0;
}



				
				
		
	


