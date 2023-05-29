#include<bits/stdc++.h>
using namespace std;

struct BSTNode
{
    int value;
    BSTNode *left,*right;
    BSTNode(int value)
    {
        this->value=value;
        this->left=this->right=NULL;
    }
};

BSTNode* insert(BSTNode *root, int value)
{
    if(root==NULL)
    {
        return new BSTNode(value);
    }
    else
    {
        BSTNode *temp=root;
        BSTNode *p=NULL;
        while(temp!=NULL)
        {
            p=temp;
            if(temp->value>value)
            {
                temp=temp->left;
            }
            else
            {
                temp=temp->right;
            }
        }
        BSTNode* newNode=new BSTNode(value);
        if(p->value > value)
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

int heightoftree(BSTNode *root)
{
    if(root==NULL)
    {
        return -1;
    }
    int leftheight=heightoftree(root->left);
    int rightheight=heightoftree(root->right);
    if(leftheight>rightheight)
    {
        return 1+leftheight;
    }
    else
    {
        return 1+rightheight;
    }
}

int main(){
   // write your code here
    int t;
    cin>>t;
    while(t-->0)
    {
        BSTNode *root=NULL;
        int n;
        cin>>n;
        int temp;
        cin>>temp;
        
        root = insert(root,temp);
        
        for(int i=1;i<n;i++)
        {
            cin>>temp;
            insert(root, temp);
        }
        cout<<heightoftree(root)<<"\n";
    }
    return 0;
}