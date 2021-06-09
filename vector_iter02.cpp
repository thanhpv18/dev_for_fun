#include <iostream>
#include <vector>
#include <string>

int main(){
	std::vector<std::string> v;

	for (int i = 0; i <= 5; i++){
		v.push_back("AAAAA");
	}

	std::cout << v[0] << "\n";
	char n = (*v.begin())[0];
	std::cout << n << "\n";
}