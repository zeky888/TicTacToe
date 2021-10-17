#include <iostream>

using namespace std;

int main() {
  int finished = 0;
  int Moves = 0;
  char x = 'X';
  char o = 'O';
  int choice;
  string line1, line2, line3;

  line1 = line2 = line3 = " | | ";

  while (finished == 0 and Moves < 9) {

    cin >> choice;

    if (choice == 1) {
      line1[0] = x;
    }

    if (choice == 2) {
      line1[2] = x;
    }

    if (choice == 3) {
      line1[4] = x;
    }

    if (choice == 4) {
      line2[0] = x;
    }

    if (choice == 5) {
      line2[2] = x;
    }

    if (choice == 6) {
      line2[4] = x;
    }

    if (choice == 7) {
      line3[0] = x;
    }

    if (choice == 8) {
      line3[2] = x;
    }

    if (choice == 9) {
      line3[4] = x;
    }

    if (x == 'X') x = 'O';
    else if (x == 'O') x = 'X';

    cout << endl;
    cout << line1 << endl;
    cout << "------" << endl;
    cout << line2 << endl;
    cout << "------" << endl;
    cout << line3 << endl << endl << endl << endl << endl;

    ++Moves;

    if (line1[0] == 'X'
      and line1[2] == 'X'
      and line1[4] == 'X') {
      cout << "X won the game!" << endl;
      finished = 1;
    } else if (line2[0] == 'X'
      and line2[2] == 'X'
      and line2[4] == 'X') {
      cout << "X won the game!" << endl;
      finished = 1;
    } else if (line3[0] == 'X'
      and line3[2] == 'X'
      and line3[4] == 'X') {
      cout << "X won the game!" << endl;
      finished = 1;
    }
    //horizantally X 
    else if (line1[0] == 'X'
      and line2[0] == 'X'
      and line3[0] == 'X') {
      cout << "X won the game!" << endl;
      finished = 1;
    } else if (line1[2] == 'X'
      and line2[2] == 'X'
      and line3[2] == 'X') {
      cout << "X won the game!" << endl;
      finished = 1;
    } else if (line1[4] == 'X'
      and line2[4] == 'X'
      and line3[4] == 'X') {
      cout << "X won the game!" << endl;
      finished = 1;
    }
    //vertically X
    else if (line1[0] == 'X'
      and line2[2] == 'X'
      and line3[4] == 'X') {
      cout << "X won the game!" << endl;
      finished = 1;
    } else if (line3[0] == 'X'
      and line2[2] == 'X'
      and line1[4] == 'X') {
      cout << "X won the game!" << endl;
      finished = 1;
    }
    //diagonally X
    else if (line2[0] == 'O'
      and line2[2] == 'O'
      and line2[4] == 'O') {
      cout << "O won the game!" << endl;
      finished = 1;
    } else if (line3[0] == 'O'
      and line3[2] == 'O'
      and line3[4] == 'O') {
      cout << "O won the game!" << endl;
      finished = 1;
    } else if (line1[0] == 'O'
      and line1[2] == 'O'
      and line1[4] == 'O') {
      cout << "O won the game!" << endl;
      finished = 1;
    }
    //horizontally O
    else if (line1[2] == 'O'
      and line2[2] == 'O'
      and line3[2] == 'O') {
      cout << "O won the game!" << endl;
      finished = 1;
    } else if (line1[4] == 'O'
      and line2[4] == 'O'
      and line3[4] == 'O') {
      cout << "O won the game!" << endl;
      finished = 1;
    } else if (line1[0] == 'O'
      and line2[0] == 'O'
      and line3[0] == 'O') {
      cout << "O won the game!" << endl;
      finished = 1;
    }
    //vertically O
    else if (line3[0] == 'O'
      and line2[2] == 'O'
      and line1[4] == 'O') {
      cout << "O won the game!" << endl;
      finished = 1;
    } else if (line1[0] == 'O'
      and line2[2] == 'O'
      and line3[4] == 'O') {
      cout << "O won the game!" << endl;
      finished = 1;
    }

    //diagonally O
    else if (Moves == 9)
      cout << "It's a draw!" << endl;
  }

  return 0;

}