#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[])
{
	std::cout<<"\n \n"<<std::endl;

	//Ex6-Using commandline arguments
	const std::vector<std::string> cmdLineArgs{argv,argv+argc};
	std::string input_file, output_file;
	for (size_t i{1}; i<cmdLineArgs.size(); i++)
	{
		std::cout<<" Argument: "<<cmdLineArgs[i]<<std::endl;
		if (cmdLineArgs[i]=="--help" ||cmdLineArgs[i]=="-h")
		{
			std::cout<<"  Options:"<<std::endl;
			std::cout<<"    -h or --help: Display options."<<std::endl;
			std::cout<<"    -i  : Consider next argument as input file."<<std::endl;
			std::cout<<"    -o  : Consider next argument as output file name."<<"\n"<<std::endl;
		}
		else if(cmdLineArgs[i]=="-i")
		{
			i+=1;
			input_file=cmdLineArgs[i];
			std::cout<<"  Input file is:"<<input_file<<"\n"<<std::endl;
		}
		else if(cmdLineArgs[i]=="-o")
		{
			i+=1;
			output_file=cmdLineArgs[i];
			std::cout<<"  Output file is:"<<output_file<<"\n"<<std::endl;
		}
		else if(cmdLineArgs[i]=="--version")
		{
			std::cout<<"  Version: 1.0.1 \n"<<std::endl;
		}
		else
		{
			std::cout<<"  Error: Option non existent."<<std::endl;
			std::cout<<"  Try: -h or --help for allowed options.\n"<<std::endl;
		}
	}

	//Ex1-Hello World
	std::cout<<"\n Hello World \n"<<std::endl;

	//Ex2-Variables part1
	int a0=0;
	std::cout<<" int a0 = "<<a0<<std::endl;
	double a1=1.11;
	std::cout<<" double a1 = "<<a1<<std::endl;
	int a2=a1;
	std::cout<<" int a2 = double a1 = "<<a2<<"\n"<<std::endl;

	//Ex3-Variables part2
	/*const int a{8};
	a = 9;*/

	//Ex4-Variables part3
	int b{2}, c{7};
	double d{6.66};
	b = 3;
	std::cout<<" b = "<<b<<std::endl;
	std::cout<<" c = "<<c<<std::endl;
	std::cout<<" d = "<<d<<"\n"<<std::endl;
	double e = b*c*d;
	std::cout<<" b.c.d = "<<e<<std::endl;
	e = d / b;
	std::cout<<" d/b = "<<e<<std::endl;
	e =  c / b; //converts to integer
	std::cout<<" c/b = "<<e<<std::endl;
	e =  c / (double)b; //converts to double
	std::cout<<" c/(double)b = "<<e<<"\n"<<std::endl;

	std::string msg {" Message "};
	char lll{'2'};
	msg+=lll;
	std::cout<<msg<<std::endl;
	std::cout<<" Third letter of message is: "<<msg[3]<<"\n"<<std::endl;

	//Ex5-User Input
	std::string str,str2;
	char inChar{'x'};
	char arrChar[]={'0','1','2','3','4','5','6','7','8','9'};
	std::string arrStr[]={"zero", "one","two","three","four","five","six","seven","eight","nine"};
	std::cout<<"Only alpha-numerical characters will be accepted: \n"<<std::endl;
	while(std::cin>>inChar)
	{
			if (isalnum(inChar))
			{
				//LONG WINDED METHOD
				/*switch (inChar)
				{
					case '0': str2="zero";
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
						break;
				}*/

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
