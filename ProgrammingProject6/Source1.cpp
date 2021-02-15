#include<iostream>
#include<string>
#include<iomanip>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include<time.h> 
using namespace std;

void gameChoice(int);
void Madlibs(int);
void lovelife(char);
void school(char);
void finance(char);
void Psychic(int);
void Adventure(int);
void Treasure(int);
void Guess(int);

int main()
{
	bool again = true;
	int gamechosen;
	while (again == true)
	{
		cout << "\n****************************************************************************************************\n";
		cout << "                                     Welcome!                                                       ";
		cout << "\nPlease choose a number from the following options: \n \n 1. Madlibs! \n 2. Choose Your Own Adventure! \n 3. Psychic future! \n 4. Find the Treasure! \n 5. Guessing game!\n 6. Exit!\n";
		cout << "\n****************************************************************************************************\n";
		cin >> gamechosen;
		if (gamechosen == 6)
		{
			again = false;

		}
		else
		{
			gameChoice(gamechosen);
		}
	}
	return 0;
}

void gameChoice(int a)
{

	cout << "\n";


	if (a == 1)
	{
		Madlibs(a);

	}
	else if (a == 2)
	{
		Adventure(a);

	}
	else if (a == 3)
	{
		Psychic(a);

	}
	else if (a == 4)
	{
		Treasure(a);
	}
	else if(a == 5)
	{
		Guess(a);
	}



}

void Madlibs(int a)
{
	cout << "StoryFun!";
	cout << "\n -------------------------------------------------------------------------------------------------------------";
	string input1;
	cout << "\nI wanted to ";
	cout << "\nVerb:";
	cin >> input1;
	string input2;
	cout << "but I was ";
	cout << "\nVerb (ing form):";
	cin >> input2;
	string input3;
	cout << "away from the ";
	cout << "\nNoun (plural):";
	cin >> input3;
	string input4;
	cout << "since it was ";
	cout << "\nAdjective:";
	cin >> input4;
	string input5;
	cout << "and I hurt my ";
	cout << "\nBody Part:";
	cin >> input5;
	string input6;
	cout << "I am ";
	cout << "\nAdjective:";
	cin >> input6;
	string input7;
	cout << "but I like this ";
	cout << "\nNoun:";
	cin >> input7;
	string input8;
	cout << "since it goes very ";
	cout << "\nVerb:";
	cin >> input8;
	string input9;
	cout << "and it looks very ";
	cout << "\nAdjectiive:";
	cin >> input9;
	string input10;
	cout << "My friend owns a ";
	cout << "\nNoun:";
	cin >> input10;
	string input11;
	cout << "and it is very ";
	cout << "\nAdjective:";
	cin >> input11;

	cout << "\n\n Final Result:" << "\n I wanted to " << input1 + " but I was " + input2 + " away from the " + input3 + " since it was " + input4 + " and I hurt my " + input5 + ". I am" + input6 + " but I like " + input7 + " since it goes very " + input8 + " and it looks very " + input9 + ". My friend owns a " + input10 + " and it is very " + input11 + ".";

}

void Adventure(int a)
{

	cout << "Hi, welcome to the NYC transit system. Please enter only the numbers 1 or 2 in answer to questions!\n";
	cout << "You are currently at the 86st and 5th ave station in Booklyn, where do you want to go?\n";
	cout << "Do you wish to go to \n 1. Manhattan  \n 2. Coney Island \n";
	int choice1;
	cin >> choice1;
	int choice2;
	int choice3;
	int choice4;
	int choice5;
	if (choice1 == 1)
	{
		cout << " 1. B or\n 2. Q\n";
		cin >> choice2;
		cout << "You are in China Town, do you want to get off?\n 1. yes\n 2. no\n";
		cin >> choice3;
		if (choice3 == 1)
		{
			cout << "Have Fun";

		}
		else
		{
			cout << "Broadway express, pay attentionto the stops!";
		}
	}
	else
	{
		cout << "1. D OR\n2. N\n";
		cin >> choice4;
		cout << "You are at Coney Island, do you want to get off?\n 1. yes\n 2. no\n";
		cin >> choice5;
		if (choice5 == 1)
		{
			cout << "Have fun at the beach";
		}
		else
		{
			cout << "Pay attention to the upcoming stops";
		}



	}

}

void Psychic(int a)
{
	srand(time(0));  //srand function with time to get a different int every time
	int luckynum; // lukcynumber that will be enetered
	char prediction; //what the user wants to find out
	bool again = true; // for while loop
	char ans; // response to if they want to play again

	cout << "Welcome to the Physhic Computer Network\n";
	cout << "My name is Dionne, and I willl be your psychic computer guide\n";
	cout << "\nPlease enter your lucky number: ";
	cin >> luckynum; // takes in lucky number

	cout << "\nPlease enter an 'L' for my predictions on your lovelife.";
	cout << "\nEnter the letter 'S' for my predictions on your school life.";
	cout << "\nEnter the letter 'M' for my predictions on your financial situation.\n";
	cin >> prediction; //takes in what they want to be predicted

	cout << "\nI am looking into my crystal ball\n";


	if (prediction == 'L')
	{
		lovelife(prediction); // lovelife function called
	}
	else if (prediction == 'S')
	{
		school(prediction); //school function called
	}
	else if (prediction == 'M')
	{
		finance(prediction); //finance function called
	}
	else if (prediction != 'L' || prediction != 'S' || prediction != 'M') //checks if valid input was given
	{
		cout << "You did not enter a valid input";
		return; //breaks if a invalid input was given
	}






}

void lovelife(char a) // lovelife function 
{
	int val = rand() % 5 + 1; // random number calculated between 1 and 5
	switch (val) // switch statement for every possibility between 1 and 5
	{
	case 1:
		cout << "\nYou will find the love of your life soon";
		break;
	case 2:
		cout << "\nSoon you wil meet your blessing";
		break;
	case 3:
		cout << "\nYou will be alone for the time being";
		break;
	case 4:
		cout << "\nYou will get married soon";
		break;
	case 5:
		cout << "\nYou will meet your significant other in three months";

	}

}

void school(char b) //school function
{
	int a = rand() % 5 + 1; //random number between 1 and 5 calculated

	switch (a) //swicth statement for every possibility
	{
	case 1:
		cout << "\nParking will not be a problem tomorrow";
		break;
	case 2:
		cout << "\nYou will pass every class";
		break;
	case 3:
		cout << "\nYou will have a 4.0 GPA";
		break;
	case 4:
		cout << "\nYou wil need to work harder";
		break;
	case 5:
		cout << "\nYou will prosper this week";
	}

}




void finance(char c) //finance function
{
	int x = rand() % 5 + 1; //random number between 1 and 5 calculated
	switch (x) //switch stament for every possibility 
	{
	case 1:
		cout << "\nInvest a dime today, see a dollar tomorrow";
		break;
	case 2:
		cout << "\nYour poverty today will turn into wealth tomorrow";
		break;
	case 3:
		cout << "\nYou will become wealthy very soon";
		break;
	case 4:
		cout << "\nSave for the future and life will remain comfortable";
		break;
	default:
		cout << "\nLearn today and earn tomorrow";
	}

}


void Treasure(int a)
{

	int x = 15, y = 15;
	int x1, y1;
	char direction;
	int steps;
	double distance;
	int count = 0;
	bool treasure = false;

	srand(time(0));
	x1 = rand() % 30 + 1;
	y1 = rand() % 30 + 1;

	while (!(treasure == true))
	{
		cout << "Please enter direction (n,s,e,w) and number of steps in that direction. " << endl;
		cin >> direction;
		cin >> steps;
		if (direction == 'n')
		{
			y += steps;
		}
		else if (direction == 's')
		{
			y -= steps;
		}
		else if (direction == 'e')
		{
			x -= steps;
		}
		else
		{
			x += steps;
		}

		cout << "You are at " << x << "," << y << endl;
		distance = sqrt(static_cast<double> ((x - x1) * (x - x1)) + ((y - y1) * (y - y1)));
		cout << "You are " << distance << " from the treasure " << endl;
		if (distance == 0)
		{
			treasure = true;
		}
		count++;
	}

	cout << "It took you " << count << " tries to find the treasure";


}

void Guess(int a)
{

	srand(time(0)); //seeds the random number generator (gives it a starting point)  ONLY ONCE AT THE START OF PROGRAM
	//variable to hold the number that the user is trying to guess
	int randomNum;
	int guess;
	int i; //loop variable
	bool guessedRight;
	int counterWon = 0, counterLost = 0;
	char answer = 'y';

	while (answer == 'Y' || answer == 'y')
		//LOOPS TO PLAY GAME OVER AND OVER!
	{
		//assign randomNum a random number between 1 and 10
		randomNum = rand() % 10 + 1; //random number between 1 and 10
		
		//input?

		//user gets 3 guesses

		guessedRight = false; //so far we did not guess right  bool a type can hold 0 (false) and 1 (true)
		i = 0; //set to zero each time before the game starts
		while (i < 3 && !guessedRight)  //3 times or guessedRight was set to true makes me drop out
		{
			//cout << "Entering the loop and i has a value of:" << i << endl;
			cout << "Enter your guess: ";
			cin >> guess;
			if (guess == randomNum)
			{
				guessedRight = true;
				//increment the counterWon here would work!
			}
			else   //if (guess != randomNum)
			{
				cout << "Sorry, you guessed wrong!\n";
				//can I put the increment for counterLost here?????  NO! because it would increment with every wrong guess
			}

			i++;
			//cout << "Ending this iteration and i has a value of: " << i << endl;
		}
		if (!guessedRight) //this is true when guessedRight is still false
		{
			cout << "Nice try, better luck next time!!\n";
			counterLost++;
		}
		else
		{
			cout << "You win! It only took you " << i << " guesses!\n";
			counterWon++;
		}


		//END THE GAME TO PLAY AGAIN!
		cout << "Do you want to play again (y/n)? ";
		cin >> answer;
	}
	//prints out how many times I won the game (guessed correctly) and how many times I lost the game
	cout << "YOU WON: " << counterWon << endl;
	cout << "YOU LOST: " << counterLost << endl;


}

/*
My output:
---------------------------------------------------------------

****************************************************************************************************
									 Welcome!
Please choose a number from the following options:

 1. Madlibs!
 2. Choose Your Own Adventure!
 3. Psychic future!
 4. Find the Treasure!
 5. Guessing game!
 6. Exit!

****************************************************************************************************
5

Enter your guess: 2
Sorry, you guessed wrong!
Enter your guess: 5
Sorry, you guessed wrong!
Enter your guess: 3
Sorry, you guessed wrong!
Nice try, better luck next time!!
Do you want to play again (y/n)? n
YOU WON: 0
YOU LOST: 1

****************************************************************************************************
									 Welcome!
Please choose a number from the following options:

 1. Madlibs!
 2. Choose Your Own Adventure!
 3. Psychic future!
 4. Find the Treasure!
 5. Guessing game!
 6. Exit!

****************************************************************************************************
6


*/