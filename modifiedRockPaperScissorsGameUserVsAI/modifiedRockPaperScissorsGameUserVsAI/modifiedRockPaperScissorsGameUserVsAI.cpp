//*******************************************************************************************************
//
//        File:              modifiedRockPaperScissorsGameUserVsAI.cpp
//
//        Student:           Kenneth Nicholas
//
//        Assignment:        Assignment 8
//
//        Course Name:       Programming I
//
//        Course Number:     COSC 1550 - 02 
//
//        Due:               Mar 28, 2017
//
//
//        This program allows a user to play ten games of Rock-Paper-Scissors against an AI character in
//        a row (i.e., the computer using a random number generator seeded with time); Upon completion
//        of 10 games, the score is displayed to the user, and if the user does not enter a valid
//        selection, he or she automatically loses one of the ten games.
//
//*******************************************************************************************************

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

//*******************************************************************************************************

int main()
{
	int numberOfDraws = 0,
		numberOfWins = 0,
		numberOfLosses = 0,
		gameNumberCounter;

	unsigned int randNumOneToThreeModTime;

	char userInRPOrS;

	cout << "Do you think that you can beat this "
		 << "computer at 10 consecutive games of Rock-Paper-Scissors?" << endl
		 << endl
		 << "To find out, please make one of the following selections:" << endl
		 << endl;

	for (gameNumberCounter = 1; gameNumberCounter <= 10; gameNumberCounter++)
	{

		srand(static_cast <unsigned int> (time(0)));

		randNumOneToThreeModTime = rand() % 3 + 1;

		cout << "Type \"R\" or \"r\" to select rock;" << endl
			 << endl
			 << "Type \"P\" or \"p\" to select paper;" << endl
			 << endl
			 << "Type \"S\" or \"s\" to select scissors." << endl
			 << endl
			 << "Begin game number " << gameNumberCounter << endl
			 << endl;

		cin >> userInRPOrS;

		if (userInRPOrS == 114 || userInRPOrS == 82)
		{

			cout << endl
				 << "You have selected rock." << endl
				 << endl;

			if (randNumOneToThreeModTime == 1)
			{

				cout << "The computer has selected rock." << endl
					 << endl
					 << "The result is a draw." << endl
					 << endl;

				numberOfDraws += 1;

			}

			else if (randNumOneToThreeModTime == 2)
			{

				cout << "The computer has selected paper." << endl
					 << endl
					 << "You lose." << endl
					 << endl;

				numberOfLosses += 1;

			}

			else if (randNumOneToThreeModTime == 3)
			{

				cout << "The computer has selected scissors." << endl
					 << endl
					 << "You won." << endl
					 << endl;

				numberOfWins += 1;

			}

		}

		else if (userInRPOrS == 112 || userInRPOrS == 80)
		{

			cout << endl
				 << "You have selected paper." << endl
				 << endl;

			if (randNumOneToThreeModTime == 2)
			{

				cout << "The computer has selected paper." << endl
					 << endl
					 << "The result is a draw." << endl
					 << endl;

				numberOfDraws += 1;

			}

			else if (randNumOneToThreeModTime == 1)
			{

				cout << "The computer has selected rock." << endl
					 << endl
					 << "You won." << endl
					 << endl;

				numberOfWins += 1;

			}

			else if (randNumOneToThreeModTime == 3)
			{

				cout << "The computer has selected scissors." << endl
					 << endl
					 << "You lose." << endl
					 << endl;

				numberOfLosses += 1;

			}

		}

		else if (userInRPOrS == 115 || userInRPOrS == 83)
		{

			cout << endl
				 << "You have selected scissors." << endl
				 << endl;

			if (randNumOneToThreeModTime == 3)
			{

				cout << "The computer has selected scissors." << endl
					 << endl
					 << "The result is a draw." << endl
					 << endl;

				numberOfDraws += 1;

			}

			else if (randNumOneToThreeModTime == 2)
			{

				cout << "The computer has selected paper." << endl
					 << endl
					 << "You won." << endl
					 << endl;

				numberOfWins += 1;

			}

			else if (randNumOneToThreeModTime == 1)
			{

				cout << "The computer has selected rock." << endl
					 << endl
					 << "You lose." << endl
					 << endl;

				numberOfLosses += 1;

			}

		}

		else
		{

			cout << endl
				 << "You lose." << endl
				 << endl;

			numberOfLosses += 1;

		}

	}

	if (numberOfWins > 1)
	{

		cout << "You won " << numberOfWins << " games against the computer." << endl
			 << endl;

	}

	else if (numberOfWins = 1)
	{

		cout << "You won " << numberOfWins << " game against the computer." << endl
			 << endl;

	}

	else
	{

		cout << "You did not win any games against the computer." << endl
			 << endl;

	}

	if (numberOfLosses > 1)
	{

		cout << "You lost " << numberOfLosses << " games against the computer." << endl
			 << endl;

	}

	else if (numberOfLosses = 1)
	{

		cout << "You lost " << numberOfLosses << " game against the computer." << endl
			 << endl;

	}

	else
	{

		cout << "You did not lose any games against the computer." << endl
			 << endl;

	}

	if (numberOfDraws > 1)
	{

		cout << numberOfDraws << " games resulted in a draw." << endl
			 << endl;

	}

	else if (numberOfDraws = 1)
	{

		cout << numberOfDraws << " game resulted in a draw." << endl
			 << endl;

	}

	else
	{

		cout << "No games resulted in a draw." << endl
			 << endl;

	}

	return 0;

}

//*******************************************************************************************************
// Do you think that you can beat this computer at a game of Rock - Paper - Scissors ?
//
// To find out, please make one of the following selections :
// 
// Type "R" or "r" to select rock;
//
// Type "P" or "p" to select paper;
// 
// Type "S" or "s" to select scissors.
// 
// R
//
// You have selected rock.
// 
// The computer has selected scissors.
//
// You won.
// 
// Press any key to continue . . .