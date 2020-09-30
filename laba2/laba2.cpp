#include <iostream> 
using namespace std;


void findNumber(char str[]) {
	int startWord = 0;
	int endWord = 0;
	int number = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
			number++;
		if (str[i + 1] == ' ' || str[i + 1] == '\0')
		{
			endWord = i + 1;
			if (number == 1)
			{
				for (int j = startWord; j < endWord; j++)
					cout << str[j];
				cout << endl;
			}
			startWord = endWord + 1;
			number = 0;
		}
	}
}

int main()
{
	setlocale(LC_ALL, "");
	char str[256];
	cout << "Введите строку: ";
	cin.getline(str, 255);
	findNumber(str);
	system("pause");
	return 0;
}
