#include <iostream>
#include <stdlib.h>
#include <Windows.h>

using namespace std;

char* SetName(char* name) {
	cout << "Set the name of your bruto!" << endl;
	scanf_s(" %c", name);
	return name;
}

char* GetName(char* name) {
	cout << name << endl;
	return name;
}



int main(int argc, char** argv) {
	char* name = new char[30];
	int c = 0;
	bool quit = true;
	while (quit) {
		cout << "Create your own bruto!\n" \
			<< "SetName 1\n" \
			<< "GetName 2\n" \
			<< "PrintName 3\n" \
			<< "SetNumDisciples 4\n" \
			<< "GetNumDisciples 5\n" \
			<< "SetClanName 6\n" \
			<< "GetClanName 7\n" \
			<< "PrintClanName 8\n" \
			<< "GetNumWeapons 9\n" \
			<< "SetWeapon 10\n" \
			<< "HasWeapon 11\n" \
			<< "PrintAviableWeapons 12\n" \
			<< "GetNumAnimals 13\n" \
			<< "SetAnimal 14\n" \
			<< "HasAnimal 15\n" \
			<< "PrintAviableAnimals 16\n" \
			<< "RegisterNextTournament 17\n" \
			<< "IsRegisteredNextTournament 18\n" \
			<< "PrintRegisterStatus 19\n" \
			<< "SetLevel 20\n" \
			<< "SetLive 21\n" \
			<< "SetStregth 22\n" \
			<< "SetAgility 23\n" \
			<< "SetSpeed 24\n" \
			<< "Quit 25\n";
		scanf_s(" %d", c);

		switch (c)
		{
		case 1:
			SetName(name);
			break;
		case 2:
			GetName(name);
			Sleep(1000);
			break;
		case 25:
			quit = false;
			break;
		default:
			break;
		}

	}


	system("pause");
	return 0;
}