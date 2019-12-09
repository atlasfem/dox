#include <iostream>
#include <ostream>
#include <fstream>
#include "TextTable.h"




int main ()
{
	std::string name;
	std::string username;
	std::string email;
	std::string uname;
	std::cout << "What is your name?" << std::endl;
	std::cin >> uname;
	std::cout << "Hello " << uname << std::endl;
	std::cout << "What is the targets name?" << std::endl;
	std::cin >> name;
	std::cout << "What is the targets username?" << std::endl;
	std::cin >> username;
	std::cout << "What is the targets email?" << std::endl;
	std::cin >> email;
	TextTable t( '-', '|', '+' );
	
	t.add( "Username" );
	t.add( "Name" );
	t.add( "Email" );
	t.endOfRow();
	
	t.add (username);
	t.add (name);
	t.add (email);
	t.endOfRow();
	
	std::cout << t;
		
	std::ofstream myfile;
	myfile.open ("results.csv");
	myfile  << "name" << "," << "username" << "," << "email" << std::endl;
    myfile  << name << "," << username << "," << email;
	myfile.close();
	
	return 0;
}

