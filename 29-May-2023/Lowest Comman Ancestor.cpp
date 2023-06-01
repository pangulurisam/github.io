#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int v)
    {
        val = v;
        left = right = NULL;
    }
};

bool findPath(TreeNode* root,vector<int>&path,int k)
{
    if(root==NULL)
    {
        return false;
    }
    path.push_back(root->val);
    if(root->val==k)
    {
        return true;
    }
    if((root->left&&findPath(root->left,path,k)) ||  (root->right && findPath(root->right,path,k)))
    {
        return true;
    }
    path.pop_back();
    return false;
}

class BeingZero
{
public:
    TreeNode *lowestCommonAncestor(TreeNode *root, int p, int q)
    {
        vector<int>path1,path2;
        if(!findPath(root,path1,p) || !findPath(root,path2,q)){
            return NULL;
        }
        int i=0;
        for(i=0;i<path1.size()&&i<path2.size();i++)
        {
            if(path1[i] != path2[i])
            {
                break;
            }
        }
        TreeNode* lca= new TreeNode(path1[i-1]);
        return lca;
    }
};