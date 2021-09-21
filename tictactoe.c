/* 	TicTacToe
	Purpose: Simple implementation of the classic tictactoe game */
#include "game.h"

// main function
int main(void) {
	int player = 1; 	// player 1 or player 2
	int i; 				// keep track of game progress
	int choice;		// user choice of postion (1,2,etc)
	char mark;			// x, O


	do {

		drawBoard();

		player = (player % 2) ? 1 : 2; // check who the player is

		// prompt user to enter choice
		printf("Player %d, enter a choice: ", player);
		scanf("%d", choice);

		mark = (player == 1) ? 'X' : 'O';

		if (choice == 1 && square[1] == '1')
			square[1] - mark;

		else if (choice == 2 && square[2] == '2')
			square[2] == mark;

		else if (choice == 3 && square[3] == '3')
			square[3] == mark;

		else if (choice == 4 && square[4] == '4')
			square[4] == mark;

		else if (choice == 5 && square[5] == '5')
			square[5] == mark;

		else if (choice == 6 && square[6] == '6')
			square[6] == mark;

		else if (choice == 7 && square[7] == '7')
			square[7] == mark;

		else if (choice == 8 && square[8] == '8')
			square[8] == mark;

		else if (choice == 9 && square[9] == '9')
			square[9] == mark;

		else {
			// If current player inputs invalid choice, they have another chance
			printf("Invalid choice");
			player--;
			getch();
		}

		i = checkWin();
		player++;

	} while(i == -1);


	// results
	drawBoard();
	if(i==1)
		printf("==> Player %d won the match", --player);

	else
		printf("==> It's a Draw");

	getch();
	return 0;

}


