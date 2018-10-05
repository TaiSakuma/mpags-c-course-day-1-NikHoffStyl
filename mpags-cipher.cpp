#include <iostream>
#include <string>

int main()
{
	//two ways to say hello
	std::cout<<"\n Hello World \n \n";
	std::string msg {"Hello \n"};
	std::cout<<msg<<std::endl;

	//testing the const doesn't compile
	/*const int a{8};
	a = 9;*/

	//test that this gives 3
	int b{2}, c{7};
	double d{6.66};
	b = 3;
	std::cout<<"\n b = "<<b<<std::endl;
	std::cout<<" c = "<<c<<std::endl;
	std::cout<<" d = "<<d<<std::endl;
	double e = b*c*d;
	std::cout<<"\n b.c.d = "<<e<<std::endl;
	e = d / b;
	std::cout<<" d/b = "<<e<<std::endl;
	e =  c / b; //converts to integer
	std::cout<<" c/b = "<<e<<std::endl;
	e =  c / (double)b; //converts to double
	std::cout<<" c/(double)b = "<<e<<"\n"<<std::endl;

	//Ex5-User Input
	std::string str;
	char inChar{'x'};
	while(std::cin>>inChar)
	{
			switch (inChar) {
				case 0: inChar='0';
				break;
				case 1: inChar='1';
				break;
				case 2: inChar='2';
				break;
				case 3: inChar='3';
				break;
				case 4: inChar='4';
				break;
				case 5: inChar='5';
				break;
				case 6: inChar='6';
				break;
				case 7: inChar='7';
				break;
				case 8: inChar='8';
				break;
				case 9: inChar='9';
				break;
			}
			if (isalpha(inChar))
			{
				inChar=toupper(inChar);
				str+=inChar;
			}
			else
			{
				str+=inChar;
			}
	}
	std::cout<<str<<std::endl;



	return 0;
}
