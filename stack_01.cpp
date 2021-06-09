#include <iostream>
#include <stack>

int main(){
	std::stack<int> st;
	for (int i = 0; i < 5; i++){
		st.push(i);
	}

	// std::cout << "Stack contains: ";
	// while(!st.empty()){
	// 	std::cout << " " << st.top();
	// 	st.pop();
	// }
	// std::cout << "\n";
	std::cout << st.top() << "\n";
	return 0;
}