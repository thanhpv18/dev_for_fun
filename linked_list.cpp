#include <iostream>

class Node{
public:
	int val;
	Node* next;
};
int main(){
	Node* op = new Node();
	op->val = 0;

	for (int i = 0; i <= 5; ++i){
		op->val = i;
		op = op->next;
	}
	std::cout << op->val << "\n";
	std::cout << op->next << "\n";
}