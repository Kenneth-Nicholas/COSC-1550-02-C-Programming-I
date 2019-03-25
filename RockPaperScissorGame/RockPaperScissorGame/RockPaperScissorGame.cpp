//*******************************************************************************************************
//
//		File:			RockPaperScissorGame.cpp
//		
//		Student:		Kenneth Nicholas
//
//		Assignment:	 	Assignment 11
//
//		Course Name:	Programming I
//
//		Course Number:	COSC 1550 - 02
//
//		Due:			Apr 21, 2017
//
//
//		This program is the same R-P-S game as we did in HW8.
//		
//*******************************************************************************************************

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;            

//*******************************************************************************************************

char get_player_choice();         
int get_AI_choice();            
int decide_who_wins(char userChoice, int aIChoiceNum);
void play_10_games(int &winTotal, int &lossTotal, int &drawTotal);

//*******************************************************************************************************

int main()                      
{
	int winTotal = 0,
		lossTotal = 0,
		drawTotal = 0;

	play_10_games(winTotal, lossTotal, drawTotal);

	cout << "You won " << winTotal
		 << " games, lost " << lossTotal
		 << " games, and " << drawTotal
		 << " games resulted in a draw." << endl
		 << endl;

    return 0;
}

//*******************************************************************************************************

char get_player_choice()          
{
	char userChoice;

	cout << "Please enter 'R' or 'r' to select rock, 'P' or 'p' "
		 << "to select paper, or 'S' or 's' to select scissors" << endl
		 << endl;

	cin >> userChoice;

	cout << endl;

	return userChoice;
}

//*******************************************************************************************************

int get_AI_choice() 
{
	srand(static_cast <unsigned int> (time(0)));

	int aIChoiceNum = rand() % 3;

	return aIChoiceNum;
}

//*******************************************************************************************************

int decide_who_wins(char userChoice, char aIChoice)       
{
	int winLossOrDraw;

	if (((userChoice == 'r') || (userChoice == 'R')) && (aIChoice == 0))
	{
		winLossOrDraw = 0;
	}
	else if (((userChoice == 'p') || (userChoice == 'P')) && (aIChoice == 1))
	{
		winLossOrDraw = 0;
	}
	else if (((userChoice == 's') || (userChoice == 'S')) && (aIChoice == 2))
	{
		winLossOrDraw = 0;
	}
	else if (((userChoice == 'r') || (userChoice == 'R')) && (aIChoice == 2))
	{
		winLossOrDraw = 1;
	}
	else if (((userChoice == 'p') || (userChoice == 'P')) && (aIChoice == 0))
	{
		winLossOrDraw = 1;
	}
	else if (((userChoice == 's') || (userChoice == 'S')) && (aIChoice == 1))
	{
		winLossOrDraw = 1;
	}
	else
	{
		winLossOrDraw = 2;
	}

	return winLossOrDraw;
}

//*******************************************************************************************************

void play_10_games(int &winTotal, int &lossTotal, int &drawTotal)         
{

	for (int gamesPlayed = 0; gamesPlayed < 10; gamesPlayed++)
	{
		char userChoice = get_player_choice();

		char aIChoice = get_AI_choice();

		int winLossOrDraw = decide_who_wins(userChoice, aIChoice);

		if (winLossOrDraw == 0)
		{
			drawTotal += 1;
		}
		else if (winLossOrDraw == 1)
		{
			winTotal += 1;
		}
		else
		{
			lossTotal += 1;
		}
	}
}

//*******************************************************************************************************
// Please enter 'R' or 'r' to select rock, 'P' or 'p' to select paper, or 'S' or 's' to select scissors
//
// r
//
// Please enter 'R' or 'r' to select rock, 'P' or 'p' to select paper, or 'S' or 's' to select scissors
//
// p
//
// Please enter 'R' or 'r' to select rock, 'P' or 'p' to select paper, or 'S' or 's' to select scissors
//
// s
//
// Please enter 'R' or 'r' to select rock, 'P' or 'p' to select paper, or 'S' or 's' to select scissors
//
// R
//
// Please enter 'R' or 'r' to select rock, 'P' or 'p' to select paper, or 'S' or 's' to select scissors
//
// P
//
// Please enter 'R' or 'r' to select rock, 'P' or 'p' to select paper, or 'S' or 's' to select scissors
//
// S
//
// Please enter 'R' or 'r' to select rock, 'P' or 'p' to select paper, or 'S' or 's' to select scissors
//
// 1
//
// Please enter 'R' or 'r' to select rock, 'P' or 'p' to select paper, or 'S' or 's' to select scissors
//
// 2
//
// Please enter 'R' or 'r' to select rock, 'P' or 'p' to select paper, or 'S' or 's' to select scissors
//
// 3
//
// Please enter 'R' or 'r' to select rock, 'P' or 'p' to select paper, or 'S' or 's' to select scissors
//
// r
//
// You won 2 games, lost 6 games, and 2 games resulted in a draw.
//
// Press any key to continue . . .