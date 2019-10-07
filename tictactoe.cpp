/*
 * Author: Sam Zola
 * Date: 10/01/2019
 * Program: This program allows two players to play tic tac toe using the command line.
 */

#include <iostream>

using namespace std;

bool checkXWin(char board[3][3]); //checks if X wins
bool checkOWin(char board[3][3]); //checks if O wins
bool checkTie(char board[3][3]); // checks for a tie
void reset(char board[3][3]); //resets the board

void printBoard(char board[3][3]) { //prints the board with a, b, and c on top, 1, 2, and 3 on left
  cout << "  1 2 3" << endl;
  cout << "a " << board[0][0] << " " << board[0][1] << " " << board[0][2] << endl;
  cout << "b " << board[1][0] << " " << board[1][1] << " " << board[1][2] << endl;
  cout << "c " << board[2][0] << " " << board[2][1] << " " << board[2][2] << endl;
}

int main() {
  int turn = 0; //initialize all variables
  char board[3][3];
  char input[2];
  char endInput;
  bool playing = true;
  int xwins = 0;
  int owins = 0;
  //tell user what the program is about and how to play
  cout << "Welcome to Tic Tac Toe!" << endl;
  cout << "This is a two player game, where one player is O, and the other is X." << endl;
  cout << "Moves are made by typing a letter (a, b, or c), followed by a number (1, 2, or 3)." << endl;
  cout << endl;
  reset(board);
  printBoard(board);
  cout << endl;

  while (playing == true) { //keeps track of if the game is being played
    if (turn == 0) { //turn == 0 means x's turn
      cout << endl; //tell x to move
      cout << "X's turn! Enter a valid letter and number combo to place an X on the board." << endl;
      cin >> input; //take in an input for where to place a move
    }
    else if (turn == 1) { //turn == 1 means o's turn
      cout << endl; //tell o to move
      cout << "O's turn! Enter a valid letter and number combo to place an O on the board." << endl;
      cin >> input; //take in an input for where to place a move
    }

    //NOTE: The following moves are the same for all 9 squares on the board. I will only be commenting...
    //... on one of them (a1) because they have the same code, except for a slight change for each square
    
    if (input[0] == 'a') { //a1 means top left square
      if (input[1] == '1') {
	cout << input << endl;
	if (board[0][0] != 'X' && board[0][0] != 'O') { //if the square is empty
	  if (turn == 0) { //if it is x's turn
	    board[0][0] = 'X'; //make an x
	    printBoard(board); //print the updated board
	    char input = 'z'; //change input so it doesn't try to move in the same place next turn
	    turn = 1; //make it o's turn
	  }
	  else if (turn == 1) { //if it is o's turn
	    board[0][0] = 'O'; //make an o
	    printBoard(board); //print the updated board
	    char input = 'z'; //change input so it doesn't try to move in the same place next turn
	    turn = 0;
	  }
	}
	else { //if the square is taken, tell user and have them go again
	  cout << "That place on the board is already taken. Please enter another space." << endl;
	  char input = 'z'; //change input so it doesn't try to move in the same place next turn
	}
      }
      else if (input[1] == '2') { //a2 means top middle square
	if (board[0][1] != 'X' && board[0][1] != 'O') {
	  if (turn == 0) {
	    board[0][1] = 'X';
	    printBoard(board);
	    char input = 'z';
	    turn = 1;
	  }
	  else if (turn == 1) {
	    board[0][1] = 'O';
	    printBoard(board);
	    char input = 'z';
	    turn = 0;
	  }
	}
	else {
	  cout << "That place on the board is already taken. Please enter another space." << endl;
	  char input = 'z';
	}
      }
      else if (input[1] == '3') { //a3 means top right square
	if (board[0][2] != 'X' && board[0][2] != 'O') {
	  if (turn == 0) {
	    board[0][2] = 'X';
	    printBoard(board);
	    char input = 'z';
	    turn = 1;
	  }
	  else if (turn == 1) {
	    board[0][2] = 'O';
	    printBoard(board);
	    char input = 'z';
	    turn = 0;
	  }
	}
	else {
	  cout << "That place on the board is already taken. Please enter another space." << endl;
	  char input = 'z';
	}
      }
      else { //if the input is not a letter then a number, tell user and have them retry
	cout << "Please enter a letter (a, b, or c) a number (1, 2, or 3)." << endl;
	char input = 'z';
      }
    }
    else if (input[0] == 'b') { //b1 means middle left square
      if (input[1] == '1') {
	if (board[1][0] != 'X' && board[1][0] != 'O') {
	  if (turn == 0) {
	    board[1][0] = 'X';
	    printBoard(board);
	    char input = 'z';
	    turn = 1;
	  }
	  else if (turn == 1) {
	    board[1][0] = 'O';
	    printBoard(board);
	    char input = 'z';
	    turn = 0;
	  }
	}
	else {
	  cout << "That place on the board is already taken. Please enter another space." << endl;
	  char input = 'z';
	}
      }
      else if (input[1] == '2') { //b2 means middle middle square
	if (board[1][1] != 'X' && board[1][1] != 'O') {
	  if (turn == 0) {
	    board[1][1] = 'X';
	    printBoard(board);
	    char input = 'z';
	    turn = 1;
	  }
	  else if (turn == 1) {
	    board[1][1] = 'O';
	    printBoard(board);
	    char input = 'z';
	    turn = 0;
	  }
	}
	else {
	  cout << "That place on the board is already taken. Please enter another space." << endl;
	  char input = 'z';
	}
      }
      else if (input[1] == '3') { //b3 means middle right square
	if (board[1][2] != 'X' && board[1][2] != 'O') {
	  if (turn == 0) {
	    board[1][2] = 'X';
	    printBoard(board);
	    char input = 'z';
	    turn = 1;
	  }
	  else if (turn == 1) {
	    board[1][2] = 'O';
	    printBoard(board);
	    char input = 'z';
	    turn = 0;
	  }
	}
	else {
	  cout << "That place on the board is already taken. Please enter another space." << endl;
	  char input = 'z';
	}
      }
      else {
	cout << "Please enter a letter (a, b, or c) and a number (1, 2, or 3)" << endl;
	char input = 'z';
      }
    }
    else if (input[0] == 'c') { //c1 means bottom left square
      if (input[1] == '1') {
	if (board[2][0] != 'X' && board[2][0] != 'O') {
	  if (turn == 0) {
	    board[2][0] = 'X';
	    printBoard(board);
	    char input = 'z';
	    turn = 1;
	  }
	  else if (turn == 1) {
	    board[2][0] = 'O';
	    printBoard(board);
	    char input = 'z';
	    turn = 0;
	  }
      	}
	else {
	  cout << "That place on the board is already taken. Please enter another space." << endl;
	  char input = 'z';
	}
      }
      else if (input[1] == '2') { //c2 means bottom middle square
	if (board[2][1] != 'X' && board[2][1] != 'O') {
	  if (turn == 0) {
	    board[2][1] = 'X';
	    printBoard(board);
	    char input = 'z';
	    turn = 1;
	  }
	  else if (turn == 1) {
	    board[2][1] = 'O';
	    printBoard(board);
	    char input = 'z';
	    turn = 0;
	  }
      	}
	else {
	  cout << "That place on the board is already taken. Please enter another space." << endl;
	  char input = 'z';
	}
      }
      else if (input[1] == '3') { //c3 means bottom right square
	if (board[2][2] != 'X' && board[2][2] != 'O') {
	  if (turn == 0) {
	    board[2][2] = 'X';
	    printBoard(board);
	    char input = 'z';
	    turn = 1;
	  }
	  else if (turn == 1) {
	    board[2][2] = 'O';
	    printBoard(board);
	    char input = 'z';
	    turn = 0;
	  }
      	}
	else {
	  cout << "That place on the board is already taken. Please enter another space." << endl;
	  char input = 'z';
	}
      }
      else {
	cout << "Please enter a letter (a, b, or c) and a number (1, 2, or 3)" << endl;
	char input = 'z';
      }
    }
    else {
      cout << "Please enter a letter (a, b, or c) and a number (1, 2, or 3)." << endl;
      char input = 'z';      
    }

    //This is the end of the section where most code is the same for all moves.
    
    if (checkXWin(board) == true) { //if x wins
      cout << "X wins!" << endl; //tell user
      xwins++; //add a win to x's total
      cout << endl;
      cout << "X has won " << xwins << " time(s)." << endl; //display how many times both have won
      cout << "O has won " << owins << " time(s)." << endl;
      cout << endl;
      //ask if the user wants to play again
      cout << "Would you like to play again? Type 'y' for yes, and 'n' for no." << endl;
      cin >> endInput; //take in an input to tell
      if (endInput == 'y' || endInput == 'Y') { //if yes...
	reset(board); //reset the board
	char input = 'z';
	turn = 0;
	playing = true; //make the game restart
	printBoard(board);
      }
      else if (endInput == 'n' || endInput == 'N') { //if no
	cout << "Thank you for playing!" << endl; 
	playing = false; //end the game
      }
    }
    if (checkOWin(board) == true) { //if o wins
      cout << "O wins!" << endl; //tell user
      owins++; //add a win to o's total
      cout << "X has won " << xwins << " time(s)." << endl; //display how many times both have won
      cout << "O has won " << owins << " time(s)." << endl;
      cout << endl;
      //ask if the user wants to play again
      cout << "Would you like to play again? Type 'y' for yes, and 'n' for no." << endl;
      cin >> endInput;
      if (endInput == 'y' || endInput == 'Y') { //if yes...
	reset(board); //reset the board
	char input = 'z';
	turn = 0;
	playing = true; //make the game restart
	printBoard(board);
      }
      else if (endInput == 'n' || endInput == 'N') { //if no
	cout << "Thank you for playing!" << endl;
	playing = false; //end the game
      }
    }
    if (checkTie(board) == true) { //if there is a tie
      cout << "Tie!" << endl; //tell user
      cout << "X has won " << xwins << " time(s)." << endl; //display how many times both have won
      cout << "O has won " << owins << " time(s)." << endl;
      cout << endl;
      //ask if the user wants to play again
      cout << "Would you like to play again? Type 'y' for yes, and 'n' for no." << endl;
      cin >> endInput;
      if (endInput == 'y' || endInput == 'Y') { //if yes...
	reset(board); //reset the board
	char input = 'z';
	turn = 0;
	playing = true; //make the game restart
	printBoard(board);
      }
      else if (endInput == 'n' || endInput == 'N') { //if no
	cout << "Thank you for playing!" << endl;
	playing = false; //end the game
      }
    }
  }
  return 0;
}

bool checkXWin(char board[3][3]) { //checks all possible lines of 3 for x wins
  if (board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X') {
    return true;
  }
  if (board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X') {
    return true;
  }
  if (board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X') {
    return true;
  }
  if (board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X') {
    return true;
  }
  if (board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X') {
    return true;
  }
  if (board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X') {
    return true;
  }
  if (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X') {
    return true;
  }
  if (board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X') {
    return true;
  }
  return false;
}

bool checkOWin(char board[3][3]) { //checks all possible lines of 3 for o wins
  if (board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O') {
    return true;
  }
  if (board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O') {
    return true;
  }
  if (board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O') {
    return true;
  }
  if (board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O') {
    return true;
  }
  if (board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == 'O') {
    return true;
  }
  if (board[0][2] == 'O' && board[1][2] == 'O' && board[2][2] == 'O') {
    return true;
  }
  if (board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O') {
    return true;
  }
  if (board[0][2] == 'O' && board[1][1] == 'O' && board[2][0] == 'O') {
    return true;
  }
  return false;
}

bool checkTie(char board[3][3]) { //checks if all squares are filled and nobody has won
  if (checkXWin(board) == false && checkOWin(board) == false) {
    if (board[0][0] == 'X' || board[0][0] == 'O') {
      if (board[0][1] == 'X' || board[0][1] == 'O') {
	if (board[0][2] == 'X' || board[0][2] == 'O') {
	  if (board[1][0] == 'X' || board[1][0] == 'O') {
	    if (board[1][1] == 'X' || board[1][1] == 'O') {
	      if (board[1][2] == 'X' || board[1][2] == 'O') {
		if (board[2][0] == 'X' || board[2][0] == 'O') {
		  if (board[2][1] == 'X' || board[2][1] == 'O') {
		    if (board[2][2] == 'X' || board[2][2] == 'O') {
		      return true;
		    }
		  }
		}
	      }
	    }
	  }
	}
      }
    }
  }
  return false;
}

void reset(char board[3][3]) { //sets all squares to blank
  board[0][0] = ' ';
  board[0][1] = ' ';
  board[0][2] = ' ';
  board[1][0] = ' ';
  board[1][1] = ' ';
  board[1][2] = ' ';
  board[2][0] = ' ';
  board[2][1] = ' ';
  board[2][2] = ' ';
}
