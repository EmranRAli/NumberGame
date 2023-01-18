#include "NumberPick.h"
#include <ctime>
using namespace std;
#include <vector>




int main()
{
	cout << "Welcome to the Number Pick Game" << endl;
	cout << "-------------------------------------" << endl;

	 int NumberofPlayers;
	cout << "Enter the number of Players: " << endl;
	cin >> NumberofPlayers;

	int rounds;
	cout << "Enter the number of Rounds: " << endl;
	cin >> rounds;

	
	vector<Player> arr;
	arr.resize(NumberofPlayers);

	int pcounter = 1;
	int answer = 0;
	int roundnum = 1;
	
	

	for(int i = 0; i < NumberofPlayers; i++)
	{
		cout << "\nEnter Name of Player: " << pcounter << endl;
		cin >> arr[i].name;
		pcounter++;

	}
	
	for (int x = 0; x < rounds; x++) {
		cout << "Round " << roundnum << endl;
		cout << "------------------------------" << endl;
		for (int i = 0; i < NumberofPlayers; i++)
		{
			cout << arr[i].name << " Guess a number 1 through 10: " << endl;
			cin >> arr[i].number;
			pcounter++;

		}

		srand(time(NULL));

		answer = rand() % 11 + 1;
		

		for (int i = 0; i < NumberofPlayers; i++)
		{
			if (arr[i].number == answer)
			{
				arr[i].wins = arr[i].wins + 1;
			}
			else
			{
				arr[i].wins = arr[i].wins;
			}

		}
		roundnum++;
	}

	cout << "Here are your results!" << endl;
	cout << "-------------------------------" << endl;
	for (int i = 0; i < NumberofPlayers; i++) 
	{
		cout << arr[i].name << " Has " << arr[i].wins << " Wins!" << endl;
	}
	cout << endl;
	
		
	

	for (int i = 0; i < NumberofPlayers; i++)
	{
		for (int x = i + 1; x < NumberofPlayers; x++) {
			if (arr[i].wins == arr[x].wins && arr[i].wins && arr[x].wins > 0)
			{
				cout << "The Game is a Tie" << endl;
				cout << "Thank You For Playing!" << endl;
				cout << "-------------------------------" << endl;
				return 0;
			}
		}
	}

	int winner = 0;
	int counter = -1;

	for (int i = 0; i < NumberofPlayers; i++) {
		
		if (arr[i].wins > winner)
		{
			winner = arr[i].wins;
			counter = i;

		}
		
	}
	if (counter > -1)
		cout << "The Winner is: " << arr[counter].name << endl;
	else
		cout << "There are no Winners!" << endl;

		
	
	
	
	
	/*
		if ((arr[0].wins == arr[1].wins && arr[0].wins > 0) || (arr[1].wins == arr[2].wins && arr[1].wins > 0) || (arr[0].wins == arr[2].wins && arr[0].wins > 0)) {
		
			cout << "The game is a Tie!" << endl;
		}
	
		
		else if (arr[0].wins > arr[1].wins && arr[0].wins > arr[2].wins)
		{
			cout << "The Winner is: " << arr[0].name << endl;
		}
		else if (arr[1].wins > arr[0].wins && arr[1].wins > arr[2].wins)
		{
			cout << "The Winner is: " << arr[1].name << endl;
		}
		else 
		{
			cout << "The Winner is: " << arr[2].name << endl;
		}*/

	
	


	cout << "Thank You For Playing!" << endl;
	cout << "-------------------------------" << endl;





	

	



	
}