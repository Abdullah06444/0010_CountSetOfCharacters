#include <iostream>

using namespace std;

int main()
{

	int counter = 0;
	char character;
	string result;

	while ((character = getchar()) != EOF)
	{

		if (character > 64 && character < 91 || character > 96 && character < 123)
		{
			if (character != 'a' && character != 'e' && character != 'i' && character != 'o' && character != 'u'
				&& character != 'A' && character != 'E' && character != 'I' && character != 'O' && character != 'U')
			{

				if (character > 64 && character < 91)
					result += character;

				if (character > 96 && character < 123)
					result += character - 32;
			}
			counter++;
		}
	}

	cout << counter << " " << result;
}