#include <iostream> 
using namespace std;


void findNumber(char str[]) {
	int startWord = 0;
	int endWord = 0;
	bool number = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
			number++;
		if (str[i] == ' ')
		{
			endWord = i;
			if (number == 1)
			{
				for (int j = startWord; j < endWord; j++)
					cout << str[j];
				cout << endl;
			}
			startWord = i + 1;
			number = 0;
		}
	}
}

int main()
{
	setlocale(LC_ALL, "");
	char str[256];
	cout << "ведите строку: ";
	cin.getline(str, 255);
	findNumber(str);
	system("pause");
	return 0;
}
