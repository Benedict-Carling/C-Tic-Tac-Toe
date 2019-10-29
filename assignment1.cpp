#include <iostream>
#include <array>

using namespace std;

int main() 
{
    //Initiating Variables
    string name_1, name_2 = "";
    int select_row, select_column,i = 0;
    char Current_Positions[3][3]={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
    int Num_Rem_Position = 0;
    //Introducing the game
    std::cout << "Welcome to Tic Tac Toe\n";
    //Enter Name of player 1
    std::cout << "Please enter the name of Player 1: ";
    std::cin >> name_1;
    //Enter Name of player 2
    std::cout << "Please enter the name of Player 1: ";
    std::cin >> name_2;
    //test if array is empty

    std::cout << "=====================\n"
                 "||     |     |     ||\n"
                 "---------------------\n"
                 "||     |     |     ||\n"
                 "---------------------\n"
                 "||     |     |     ||\n"
                 "=====================\n";
    //If there's positions remaining we should continue
    for(int i = 0; i!=9; i++) {
      //Alternates the Players
      if (i%2 == 0) {
        std::cout << name_1 << " please choose a row[1-3]: ";
        std::cin >> select_row;
        std::cout << name_1 << " please choose a column[1-3]: ";
        std::cin >> select_column;
        select_row = select_row-1;
        select_column = select_column-1;
        if (Current_Positions[select_row][select_column]!=' '){
          std::cout << "Please enter a empty square!!\n\n";
          i--;
          continue;
        }
        Current_Positions[select_row][select_column]='X';

              //Printing Current Table
        std::cout << "=====================\n"
                 "||  "<<Current_Positions[0][0]<<"  |  "<<Current_Positions[0][1]<<"  |  "<<Current_Positions[0][2]<<"  ||\n"
                 "---------------------\n"
                 "||  "<<Current_Positions[1][0]<<"  |  "<<Current_Positions[1][1]<<"  |  "<<Current_Positions[1][2]<<"  ||\n"
                 "---------------------\n"
                 "||  "<<Current_Positions[2][0]<<"  |  "<<Current_Positions[2][1]<<"  |  "<<Current_Positions[2][2]<<"  ||\n"
                 "=====================\n";

        if ((Current_Positions[0][0]=='X')&&(Current_Positions[0][1]=='X')&&(Current_Positions[0][2]=='X')) {
          std::cout << name_1 << " has won!!\n";
          break;
        }
        if ((Current_Positions[1][0]=='X')&&(Current_Positions[1][1]=='X')&&(Current_Positions[1][2]=='X')) {
          std::cout << name_1 << " has won!!\n";
          break;
        }
        if ((Current_Positions[2][0]=='X')&&(Current_Positions[2][1]=='X')&&(Current_Positions[2][2]=='X')) {
          std::cout << name_1 << " has won!!\n";
          break;
        }
        if ((Current_Positions[0][0]=='X')&&(Current_Positions[1][0]=='X')&&(Current_Positions[2][0]=='X')) {
          std::cout << name_1 << " has won!!\n";
          break;
        }
        if ((Current_Positions[0][1]=='X')&&(Current_Positions[1][1]=='X')&&(Current_Positions[2][1]=='X')) {
          std::cout << name_1 << " has won!!\n";
          break;
        }
        if ((Current_Positions[0][2]=='X')&&(Current_Positions[1][2]=='X')&&(Current_Positions[2][2]=='X')) {
          std::cout << name_1 << " has won!!\n";
          break;
        }
        if ((Current_Positions[0][0]=='X')&&(Current_Positions[1][1]=='X')&&(Current_Positions[2][2]=='X')) {
          std::cout << name_1 << " has won!!\n";
          break;
        }
        if ((Current_Positions[0][2]=='X')&&(Current_Positions[1][1]=='X')&&(Current_Positions[2][0]=='X')) {
          std::cout << name_1 << " has won!!\n";
          break;
        }
      }
      else {
        std::cout << name_2 << " please choose a row[1-3]: ";
        std::cin >> select_row;
        std::cout << name_2 << " please choose a column[1-3]: ";
        std::cin >> select_column;
        select_row = select_row-1;
        select_column = select_column-1;
        if (Current_Positions[select_row][select_column]!=' '){
          std::cout << "Please enter a empty square!!\n\n";
          i--;
          continue;
        }
        Current_Positions[select_row][select_column]='O';

              //Printing Current Table
        std::cout << "=====================\n"
                 "||  "<<Current_Positions[0][0]<<"  |  "<<Current_Positions[0][1]<<"  |  "<<Current_Positions[0][2]<<"  ||\n"
                 "---------------------\n"
                 "||  "<<Current_Positions[1][0]<<"  |  "<<Current_Positions[1][1]<<"  |  "<<Current_Positions[1][2]<<"  ||\n"
                 "---------------------\n"
                 "||  "<<Current_Positions[2][0]<<"  |  "<<Current_Positions[2][1]<<"  |  "<<Current_Positions[2][2]<<"  ||\n"
                 "=====================\n";

        if ((Current_Positions[0][0]=='O')&&(Current_Positions[0][1]=='O')&&(Current_Positions[0][2]=='O')) {
          std::cout << name_2 << " has won!!\n";
          break;
        }
        if ((Current_Positions[1][0]=='O')&&(Current_Positions[1][1]=='O')&&(Current_Positions[1][2]=='O')) {
          std::cout << name_2 << " has won!!\n";
          break;
        }
        if ((Current_Positions[2][0]=='O')&&(Current_Positions[2][1]=='O')&&(Current_Positions[2][2]=='O')) {
          std::cout << name_2 << " has won!!\n";
          break;
        }
        if ((Current_Positions[0][0]=='O')&&(Current_Positions[1][0]=='O')&&(Current_Positions[2][0]=='O')) {
          std::cout << name_2 << " has won!!\n";
          break;
        }
        if ((Current_Positions[0][1]=='O')&&(Current_Positions[1][1]=='O')&&(Current_Positions[2][1]=='O')) {
          std::cout << name_2 << " has won!!\n";
          break;
        }
        if ((Current_Positions[0][2]=='O')&&(Current_Positions[1][2]=='O')&&(Current_Positions[2][2]=='O')) {
          std::cout << name_2 << " has won!!\n";
          break;
        }
        if ((Current_Positions[0][0]=='O')&&(Current_Positions[1][1]=='O')&&(Current_Positions[2][2]=='O')) {
          std::cout << name_2 << " has won!!\n";
          break;
        }
        if ((Current_Positions[0][2]=='O')&&(Current_Positions[1][1]=='O')&&(Current_Positions[2][0]=='O')) {
          std::cout << name_2 << " has won!!\n";
          break;
        }
      }
    }

    if (i==8) {
      std::cout << "DRAW: you have drawn the game by running out of positions"; 
    }
    return 0;
}