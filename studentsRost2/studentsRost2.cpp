using namespace std;
#include <Windows.h>
#include <iostream>


int main()
{
	int ROST[70];
	int NR[70];
	int amount = 0;
	srand(time(0));

	for (int i = 0; i < sizeof(ROST) / sizeof(int); ++i) {
		ROST[i] = 100 + rand() % 120;
	}

	for (int i = 0 ,j = 0; i < sizeof(ROST) / sizeof(int); ++i) {

		if(ROST[i] < 180){
			ROST[i] = NR[j];
			++j;
		}
		amount = j;
	}

	cout << amount << endl;
	Sleep: 10000;
	
}

