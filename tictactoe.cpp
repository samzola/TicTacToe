#include <iostream>

using namespace std;

bool checkXWin(char board[3][3]);
bool checkOWin(char board[3][3]);
bool checkTie(char board[3][3]);
void reset(char board[3][3]);

void printBoard(char board[3][3]) {
  cout << "  1 2 3" << endl;
  cout << "a " << board[0][0] << " " << board[0][1] << " " << board[0][2] << endl;
  cout << "b " << board[1][0] << " " << board[1][1] << " " << board[1][2] << endl;
  cout << "c " << board[2][0] << " " << board[2][1] << " " << board[2][2] << endl;
}

int main() {
  int turn = 0;
  char board[3][3];
  char input[2];
  bool playing = true;
  int xwins = 0;
  int owins = 0;

  cout << "Welcome to Tic Tac Toe!" << endl;
  cout << "This is a two player game, where one player is O, and the other is X." << endl;
  cout << "Moves are made by typing a letter (a, b, or c), followed by a number (1, 2, or 3)." << endl;
  cout << endl;
  
  printBoard(board);
  cout << endl;

  while (playing == true) {
    if (turn == 0) {
      cout << endl;
      cout << "X's turn! Enter a valid letter and number combo to place an X on the board." << endl;
      cin >> input;
    }
    else if (turn == 1) {
      cout << endl;
      cout << "O's turn! Enter a valid letter and number combo to place an O on the board." << endl;
      cin >> input;
    }

    
    if (input[0] == 'a') {
      if (input[1] == '1') {
	if (board[0][0] != 'X' && board[0][0] != 'O') {
	  if (turn == 0) {
	    board[0][0] = 'X';
	    printBoard(board);
	    char input = 'z';
	    turn = 1;
	  }
	  else if (turn == 1) {
	    board[0][0] == 'O';
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
      else if (input[1] == '2') {
	if (board[0][1] != 'X' || board[0][1] != 'O') {
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
      else if (input[1] == '3') {
	if (board[0][2] != 'X' || board[0][2] != 'O') {
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
      else {
	cout << "Please enter a letter (a, b, or c) a number (1, 2, or 3)." << endl;
	char input = 'z';
      }
    }
    else if (input[0] == 'b') {
      if (input[1] == '1') {
	if (board[1][0] != 'X' || board[1][0] != 'O') {
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
      else if (input[1] == '2') {
	if (board[1][1] != 'X' || board[1][1] != 'O') {
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
      else if (input[1] == '3') {
	if (board[1][2] != 'X' || board[1][2] != 'O') {
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
    else if (input[0] == 'c') {
      if (input[1] == '1') {
	if (board[2][0] != 'X' || board[2][0] != 'O') {
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
      else if (input[1] == '2') {
	if (board[2][1] != 'X' || board[2][1] != 'O') {
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
      else if (input[1] == '3') {
	if (board[2][2] != 'X' || board[2][2] != '3') {
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
    if (checkXWin(board) == true) {
      cout << "X wins!" << endl;
      xwins++;
      cout << endl;
      cout << "X has won " << xwins << " time(s)." << endl;
      cout << "O has won " << owins << " time(s)." << endl;
      playing = false;
    }
    if (checkOWin(board) == true) {
      cout << "O wins!" << endl;
      owins++;
      cout << "X has won " << xwins << " time(s)." << endl;
      cout << "O has won " << owins << " time(s)." << endl;
      playing = false;
    }
    if (checkTie(board) == true) {
      cout << "Tie!" << endl;
      cout << "X has won " << xwins << " time(s)." << endl;
      cout << "O has won " << owins << " time(s)." << endl;
      playing = false;
    }
  }
  return 0;
}

bool checkXWin(char board[3][3]) {
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

bool checkOWin(char board[3][3]) {
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

bool checkTie(char board[3][3]) {
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

void reset(char board[3][3]) {
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
