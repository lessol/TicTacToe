#ifndef GAME_H
#define GAME_H

// libraries
#include "stdio.h"
#include "conio.h"
#include "stdlib.h"
#include "windows.h"


// global variable

// each number represents the position in the tic tac toe square
char square[10] = {'o', '1', '2','3','4','5','6','7','8','9'};

// function prototypes

// check if a player has won
int checkWin(); // check if there is a winner

// function that draws the tictactoe board
void drawBoard();



#endif