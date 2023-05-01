#include <iostream> 
#include <cstdlib> 

using namespace std;
int main()
{
	srand(144);
	for (int i = 0; i < 200; i++)
	{
		cout << rand() % 6 + 1 << ' ';
		if ((i + 1) % 4 == 0) cout << endl;
	}
}