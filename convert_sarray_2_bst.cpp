class Solution {
public:
	TreeNode* sortedarraytoBST(vector<int>& nums, int start, int end){
		if (start > end){
			return NULL;
		}
		int mid = start + (end - start)/2;
		TreeNode* root = new TreeNode(nums[mid]);
		root->left = sortedarraytoBST(nums, start, mid-1);
		root->right = sortedarraytoBST(nums, mid+1, end);
		return root;
	}
	TreeNode* sortedarrayToBST(vector<int>& nums){
		int n = nums.size();
		return sortedarraytoBST(nums, 0, n-1);
	}
};