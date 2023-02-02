#include <iostream>
using namespace std;
int main()
{
	int x, z;
	cin >> x;
	if (x % 5 == 0)
	{
		z = x / 5;
		cout << z << endl;
	}
	else
	{
		//áæ ÍÊì ÈæÇÍÏ åÊÈÝì 
		//1+0.5=1.5   by integer --> z=1

		z = (x / 5) + 1;
		cout << z << endl;
	}


		
	return 0;
}
