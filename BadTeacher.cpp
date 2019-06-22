#include <iostream>

int main()
{
	char grade;
	std::cout << "Podaj otrzymaną ocenę (6-0): ";
	std::cin >> grade;
	switch (grade)
	{
		case '6':
		std::cout << "Jedyny Mądry!\n";
		break;
		
		case '5':
		std::cout << "Wreszcie!\n";
		break;
		
		case '4':
		std::cout << "Stać cię na więcej!\n";
		break;
		
		case '3':
		std::cout << "Rozczarowałeś mnie!\n";\
		break;
		
		case '2':
		std::cout << "Nie jesteś zbyt bystry!\n";
		break;
		
		case '1':
		std::cout << "Precz mi z oczu!\n";
		break;
		
		case '0':
		std::cout << "Przyjdź to poprawić.\n";
		break;
		
		default:
		std::cout <<"To nie jest ocena!\n";
		break;
	}
	return 0;
}