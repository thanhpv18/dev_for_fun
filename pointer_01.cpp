#include <iostream>
#include <vector>

int getelement(std::vector<int>& nums){
	nums[9] = 0;
	for (int i = 0; i < nums.size(); ++i){
		std::cout << nums[i] << " - ";
	}
	std::cout <<"====================\n";
	return nums.size();
}

int main(){
	std::vector<int> vt;
	for (int i = 1; i <= 10; ++i){
		vt.push_back(i);
	}
	int n = getelement(vt);
	std::cout << n << "\n";
	std::cout << vt[9] << "\n";
	return 0;

}