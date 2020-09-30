#include <iostream> 
using namespace std;


void findNumber(char str[]) {
	int size = 0;
	while (str[size] != '\0')
		++size;
	for (int i = 0; i < size; i++)
		if (str[i] >= '0' && str[i] <= '9') {
			cout << str << endl;
			break;
		}
}
int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "");
	char str[256];
	char words[128][128];
	cout << "Введите строку: ";
	cin.getline(str, 255);
	char * buf, *token;
	int i = 0;
	buf = strtok_s(str, " ", &token);
	while (buf != NULL)
	{
		strcpy_s(words[i], buf);
		++i;
		buf = strtok_s(NULL, " ", &token);
	}
	for (int k = 0; k < i; k++)
		findNumber(words[k]);
	system("pause");
	return 0;
}
