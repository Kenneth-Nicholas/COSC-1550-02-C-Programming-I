//*******************************************************************************************************
//
//        File:              rockPaperScissorsGameUserVsAI.cpp
//
//        Student:           Kenneth Nicholas
//
//        Assignment:        Assignment 7
//
//        Course Name:       Programming I
//
//        Course Number:     COSC 1550 - 02 
//
//        Due:               Mar 10, 2017
//
//
//        This program allows a user to play rock-paper-scissors against the computer
//        he or she is running it on. The user makes a choice and the computer does
//        so using a random number generator. Both choices are displayed on the 
//        screen as well as whether or not the choices resulted in a win, loss, or 
//        draw for the user.
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

	unsigned int randNumOneToThreeModTime;

	char userInRPOrS;

	srand( static_cast < unsigned int > ( time ( 0 ) ) );

	randNumOneToThreeModTime = rand( ) % 3 + 1;

	cout << "Do you think that you can beat this " 
		 << "computer at a game of Rock-Paper-Scissors?" << endl
		 << endl
		 << "To find out, please make one of the following selections:" << endl
		 << endl
		 << "Type \"R\" or \"r\" to select rock;" << endl
		 << endl
		 << "Type \"P\" or \"p\" to select paper;" << endl
		 << endl
		 << "Type \"S\" or \"s\" to select scissors." << endl
		 << endl;

	cin >> userInRPOrS;

	if ( userInRPOrS == 114 || userInRPOrS == 82 )
	{

		cout << endl
			 << "You have selected rock." << endl
			 << endl;

		if ( randNumOneToThreeModTime == 1 )
		{

			cout << "The computer has selected rock." << endl
				 << endl
				 << "The result is a draw." << endl
				 << endl;

		}

		else if ( randNumOneToThreeModTime == 2 )
		{

			cout << "The computer has selected paper." << endl
				 << endl
				 << "You lose." << endl
				 << endl;

		}

		else if ( randNumOneToThreeModTime == 3 )
		{

			cout << "The computer has selected scissors." << endl
				 << endl
				 << "You won." << endl
				 << endl;

		}

	}

	else if ( userInRPOrS == 112 || userInRPOrS == 80 )
	{

		cout << endl
			 << "You have selected paper." << endl
			 << endl;

		if ( randNumOneToThreeModTime == 2 )
		{

			cout << "The computer has selected paper." << endl
				 << endl
				 << "The result is a draw." << endl
				 << endl;

		}

		else if ( randNumOneToThreeModTime == 1 )
		{

			cout << "The computer has selected rock." << endl
				 << endl
				 << "You won." << endl
				 << endl;

		}

		else if ( randNumOneToThreeModTime == 3 )
		{

			cout << "The computer has selected scissors." << endl
				 << endl
				 << "You lose." << endl
				 << endl;

		}

	}

	else if ( userInRPOrS == 115 || userInRPOrS == 83 )
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

		}
		
		else if ( randNumOneToThreeModTime == 2 )
		{

			cout << "The computer has selected paper." << endl
				 << endl
				 << "You won." << endl
				 << endl;

		}

		else if ( randNumOneToThreeModTime == 1 )
		{

			cout << "The computer has selected rock." << endl
				 << endl
				 << "You lose." << endl
				 << endl;

		}

	} 

	else
	{

		cout << endl
			 << "Invalid input. Game over." << endl
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