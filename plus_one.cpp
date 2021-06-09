class Solution{
public:
	vector<int> plusOne(vector<int>& digits){
		int carry = 1;
		for (int i = digits.size()-1; i >= 0; --i){
			carry += digits[i];
			digits[i] = carry % 10;
			carry = carry / 10;
		}

		if (carry == 1){
			digits.push_back(carry);
			int temp = digits[0];
			digits[0] = digits[digits.size() - 1];
			digits[digits.size()-1] = temp;
		}
		return digits;
	}
};