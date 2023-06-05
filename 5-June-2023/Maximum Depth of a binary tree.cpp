#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
	TreeNode(int v){
		val = v;
		left = right = NULL;
	}
};

class BeingZero{
	public:
		
    int maxDepth(TreeNode* root) {
    if(root==NULL)
    {
        return 0;
    }
    int l=maxDepth(root->left);
    int r=maxDepth(root->right);
    return 1+max(l,r);
    }
};
