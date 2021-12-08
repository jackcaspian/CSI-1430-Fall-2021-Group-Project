// Authors: Zhongbo Sun,
// Assignment Title: Group project
// Assignment Description: Game: Falling ball
// Due Date: 12/8/2020
// Date Created: 11/10/2020
// Date Last Modified: 11/10/2020

/*
* Author: Jake Caraway
* Assignment Title: Sorting Students
* Assignment Description: This program reads student data from a file and 
  sorts it and reports it
* Due Date: 12/01/21
* Date Created: 11/29/21
* Date Last Modified: 12/01/21
*/

/*
* Data Abstraction:
*         1 variable, studentArray[ARRAY_SIZE], is initialized as an Student 
          array with 100 indicies to hold Student objects
*         5 variables, fileName, firstName1, lastname1, classString1, and 
          homeTown1, are initialized as strings to hold user and file input
*         1 variable, inputFile, is initialized as an ifstream to open the 
          data file
*         1 variable, GPA1, is initialized as a double to hold file input
*         5 variables, h, count, zip1, age1, and GPA1, are initialized as 
          integers to iterate, count, and store data from the file
* Input:
*         The program opens the file and reads in data
*         As each classString is read, its corresponding classInt is set
* Process:
*         The array is sorted to specification
* Output:
*         The sphere array's contents are reported and any duplicate 
          students are reported as such
* Assumptions:
*         It is assumed that the user will input valid data
*/

#include "Game.h"
 
int main(){
    game Game;
    
    SDL_Plotter screen(WINDOW_Y_SIZE,WINDOW_X_SIZE);
    
    Game.init(screen);
    
    Game.play(screen);
    
    while(!Game.over(screen))
    {
        Game.update(screen);
    }
    return 0;
    
}
