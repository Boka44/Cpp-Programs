#include <iostream>
#include <iomanip>
using namespace std;

void getData(double *, int);
void selectionSort(double *, int);
double getAverage(double *, int);
void displayData(double *, int, double);

int main()
{
	double *Test,		
		   Average;		
	int Scores;			


	cout << "How many scores do you have to average? ";
	cin  >> Scores;

	Test = new double[Scores];	

	getData(Test, Scores);

	selectionSort(Test, Scores);

	Average = getAverage(Test, Scores);

	displayData(Test, Scores, Average);

	return 0;
}


void getData(double *Test, int Scores)
{
	cout << "Enter each of the scores.\n";
	for (int i = 0; i < Scores; i++)
	{
		do
		{
			cout << "Score #" << (i + 1) << ": ";
			cin  >> *(Test + i);

			if (*(Test + i) < 0)
			{
				cout << "Scores must be greater than 0.\n"
					 << "Re-enter ";
			}

		} while (*(Test + i) < 0);
	}
}

void selectionSort(double *Test, int Scores)
{
	int startscan, minIndex;
	double minValue;

	for (startscan = 0; startscan < (Scores - 1); startscan++)
	{
		minIndex = startscan;
		minValue = *(Test + startscan);
		for (int i = startscan + 1; i < Scores; i++)
		{
			if (*(Test + i) < minValue)
			{
				minValue = *(Test + i);
				minIndex = i;
			}

		}
		*(Test + minIndex) = *(Test + startscan);
		*(Test + startscan) = minValue;
	}
} 

double getAverage(double *Test, int Scores)
{
	double Total;

	for (int i = 0; i < Scores; i++)
	{
		Total += *(Test + i);
	}

	return Total / Scores;
} 

void displayData(double *Test, int Scores, double Avg) 
{
	cout << "\n    Test scores\n";
	cout << "Number of scores: " << Scores << endl;
	cout << "Scores in ascending-order:\n";
	for (int i = 0; i < Scores; i++)
	{
		cout << "#" << (i + 1) << ": " << *(Test + i) << endl;
	}
	cout << fixed << showpoint << setprecision(2);
	cout << "Average score: " << Avg << endl; 
}

