#include <stdio.h>
#define SIZE 100

int main()
{

	int counter = 0, i = 0;
	char character;
	char result[SIZE];

	while ((character = getchar()) != EOF)
	{

		if (character > 64 && character < 91 || character > 96 && character < 123)
		{
			if (character != 'a' && character != 'e' && character != 'i' && character != 'o' && character != 'u'
				&& character != 'A' && character != 'E' && character != 'I' && character != 'O' && character != 'U')
			{

				if (character > 64 && character < 91)
					result[i++] = character;

				if (character > 96 && character < 123)
					result[i++] = character - 32;
			}
			counter++;
		}
	}
	result[i] = '\0';	//Arrayin geri kalan digitlerinde hafizada 
	// baska abuk sabuk karakter olabilir, onlari gostermemek icin

	printf("%d %s", counter, result);
}

