#include <bits/stdc++.h>
using namespace std;

struct BSTNode{
    int data;
    BSTNode *left, *right;
};

bool areIdentical(BSTNode *r1, BSTNode *r2)
{
    // TODO:  Fill your code here
    if(r1==NULL && r2==NULL)
    {
        return true;
    }
    if(r1!=NULL && r2!=NULL)
    {
        return (r1->data==r2->data && areIdentical(r1->left,r2->left) && areIdentical(r1->right,r2->right));
    }
    return false;
}