#pragma once
#include <iostream>
class Tic
{
public:
	Tic();
	~Tic();
};


int main()
{
	int nummer = 5;

	if (nummer == 0)
	{
		std::cout << "Die nummer kann nicht 0 sein" << std::endl;


	}

	else if (nummer % 3 == 0)
	{
		std::cout << "Tic" << std::endl;
	}




	else if (nummer % 5 == 0)
	{
		std::cout << "tac" << std::endl;
	}


	system("PAUSE");

	return 0;


}