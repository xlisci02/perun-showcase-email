// regex_match example
#include <iostream>
#include <string>
#include <regex>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <unistd.h>
int main(int argc, char ** argv)
{
	usleep(5000);
	std::ifstream file;
	file.open (argv[1]);
	if (!file.is_open()) return 0;

	std::string line;
	if(getline(file, line)){
		// std::cout << line << std::endl;
		std::regex r("^([a-zA-Z0-9])(([\\-.]|[_]+)?([a-zA-Z0-9]+))*(@){1}[a-z0-9]+[.]{1}(([a-z]{2,3})|([a-z]{2,3}[.]{1}[a-z]{2,3}))$");
		// std::regex r("^[a-zA-Z0-9_+&*-]+(?:\\.[a-zA-Z0-9_+&*-]+)*@(?:[a-zA-Z0-9-]+\\.)+[a-zA-Z]{2,7}$");
		std::smatch m;
		std::regex_match(line, m, r);
    	for(auto v: m) std::cout << "# " << v << "|" << std::endl;
    }
    
}
