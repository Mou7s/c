#include <iostream>
using namespace std;
int main()
{
	int x, y, z;

	for (x = 0; x <= 33; x++)
	{
		for (y = 0; y <= 50; y++)
		{
			for (z = 0; z <= 100; z++)
			{
				if ((x + y + z) == 100)
				{
					if ((3 * x + 2 * y + 0.5 * z) == 100)
					{
						cout << x << y << endl;
					}
				}
			}
		}
	}
}
