#include <iostream>
#include <string>

int main()
{
	//two ways to say hello
	std::cout<<"\n Hello World \n \n";
	std::string msg {"Hello "};
	char lll{'W'};
	msg+=lll;
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
	std::string str,str2;
	char inChar{'x'};
	char arrChar[]={'0','1','2','3','4','5','6','7','8','9'};
	std::string arrStr[]={"zero", "one","two","three","four","five","six","seven","eight","nine"};
	while(std::cin>>inChar)
	{
			if (isalnum(inChar))
			{
				//LONG WINDED METHOD
				switch (inChar)
				{
					/*case '0': str2="zero";
						break;
					case '1': str2="one";
						break;
					case '2': str2="two";
						break;
					case '3': str2="three";
						break;
					case '4': str2="four";
						break;
					case '5': str2="five";
						break;
					case '6': str2="six";
						break;
					case '7': str2="seven";
						break;
					case '8': str2="eight";
						break;
					case '9': str2="nine";
						break;
					default:
						inChar=toupper(inChar);
						str2=inChar;
						break;*/



				}
				//MEDIUM METHOD
				for (int i=0; i<10; i++)
				{
					if (inChar==arrChar[i])
					{
						str2=arrStr[i];
						break;
					}
					else
					{
						inChar=toupper(inChar);
						str2=inChar;
						break;
					}
				}
				str+=str2 +' ';
			}
	}
	std::cout<<str<<std::endl;
	return 0;
}
