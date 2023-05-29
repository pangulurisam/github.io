#include <bits/stdc++.h>
using namespace std;

struct SLLNode{
	int data;
	struct SLLNode *next;
	SLLNode(int d){
		data = d;
		next = NULL;
	}
};

class BeingZero{
public:
	SLLNode *mergeTwoSortedLists(SLLNode *A, SLLNode *B){
        // TODO:  Complete this function
        // Do not read any input, use the List passed in as function input parameter
        // Do not print any output
        // Just return head after completing the function
        // Do it in CONSTANT space
        if(A==NULL && B==NULL)
        {
            return NULL;
        }
        if(A==NULL)
        {
            return B;
        }
        if(B==NULL)
        {
            return A;
        }
        if(A->data<=B->data)
        {
            A->next=mergeTwoSortedLists(A->next,B);
            return A;
        }
        else
        {
            B->next=mergeTwoSortedLists(A,B->next);
            return B;
        }
	}
};