#include <bits/stdc++.h>

using namespace std;

struct BSTNode{
	int val;
	BSTNode *left, *right;
	BSTNode(int val){
		this->val = val;
		this->left = this->right = NULL;
	}
};

BSTNode* insert(BSTNode* root, int val)
{
    if(root==NULL){
        return new BSTNode(val);
    }
    else
    {
        BSTNode *temp=root;
        BSTNode *p=NULL;
        while(temp!=NULL)
        {
            p=temp;
            if(temp->val>val)
            {
                temp=temp->left;
            }
            else
            {
                temp=temp->right;
            }
        }
        BSTNode *newNode = new BSTNode(val);
        if(p->val>val)
        {
            p->left=newNode;
        }
        else
        {
            p->right=newNode;
        }
        return NULL;
    }
}

void levelordertraversal(BSTNode* root)
{
    if(root==NULL)
    {
        return;
    }
    queue<pair<BSTNode* , int>>q;
    q.push({root,0});
    map<int,vector<int>>mp;
    while(!q.empty())
    {
        pair<BSTNode*,int>p=q.front();
        q.pop();
        BSTNode *temp=p.first;
        int level =p.second;
        mp[level].push_back(temp->val);
        if(temp->left)
        {
            q.push({temp->left,level+1});
        }
        if(temp->right)
        {
            q.push({temp->right,level+1});
        }
    }
    for(auto ele: mp)
    {
        for(int i=0;i<ele.second.size();i++)
        {
            cout<<ele.second[i]<<" ";
            
        }
        cout<<"\n";
    }
    cout<<"\n";
}

int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        BSTNode* root=NULL;
        int n;
        cin>>n;
        int temp;
        cin>>temp;
        
        root=insert(root,temp);
        
        for(int i=1;i<n;i++)
        {
            cin>>temp;
            insert(root,temp);
        }
        levelordertraversal(root);
    }
}