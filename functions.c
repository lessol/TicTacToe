#include "game.h"

// function definitions

// check if a player has won
int checkWin() {
	if(square[1] == square[2] && square[2] == square[3])
		return 1;

	else if (square[4] == square[5] && square[5] == square[6])
		return 1;

	else if (square[7] == square[8] && square[8] == square[9])
		return 1;

	else if (square[1] == square[5] && square[5] == square[9])
		return 1;

	else if (square[1] == square[4] && square[4] == square[7])
		return 1;

	else if (square[2] == square[5] && square[5] == square[8])
		return 1;

	else if (square[3] == square[6] && square[6] == square[9])
		return 1;

	else if (square[1] == square[5] && square[5] == square[9])
		return 1;

	else if (square[3] == square[5] && square[5] == square[7])
		return 1;

	else if (square[1] != '1'  && square[2] != '2' && square[3] != '3'
			&& square[4] != '4'&& square[5] != '5' && square[6] != '6'
			&& square[7] != '7' && square[8] != '8' && square[9] != '9') {

		return 0;
	}

	else
		return -1;
}

// function that draws the tictactoe board
void drawBoard() {
	system("cls");
	printf("\n\n\t Tic Tac Toe \n\n");
	printf("Player 1 (x) v.s Player 2 (O) \n\n\n");
	printf("	 |		|		\n");
	printf("  %c  |  %c   |  %c    \n", square[1], square[2], square[3]);
	printf("_____|______|_____\n");
	printf("	 |		|	  \n");
	printf("  %c  |  %c   |  %c    \n", square[4], square[5], square[6]);
	printf("_____|______|_____\n");
	printf("	 |		|	  \n");
	printf("  %c  |  %c   |  %c    \n", square[7], square[8], square[9]);
	printf("	 |		|		\n");

}