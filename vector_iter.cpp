#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> vt;
	for (int i = 0; i <= 5; i++){
		vt.push_back(i);
	}

	cout << "Iterator: ";
	for (vector<int>::iterator it = vt.begin(); it != vt.end(); ++it){
		cout << *it;
	}
	cout << "\n";

	cout << vt[0] << "\n";
	cout << *vt.begin() << "\n";

	// std::vector<int> vt;

	// for (int i = 1; i <= 5; i++){
	// 	vt.push_back(i);
	// }

	// std::cout << "Iterator in vectors: ";
	// for (std::vector<int>::iterator it = vt.begin(); it!= vt.end(); ++it){
	// 	std::cout << ' ' << *it;
	// }
	// std::cout << "\n";
	// return 0;
}