#include <bits/stdc++.h>
using namespace std;
// typedef long long ll;

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
	SLLNode* removeNthFromEnd(SLLNode* h, int k) {
	    if(h==NULL) 
	    {
	        return NULL;
	    }
		auto temp=h;
		auto n=0;
		while(temp!=NULL)
		{
		    n++;
		    temp=temp->next;
		}
		if(k>n)
		{
		    return h->next;
		}
		auto jumps=n-k;
		if(jumps<0)
		{
		    return h;
		}
		if(jumps==0)
		{
		    return h->next;
		}
		SLLNode* prev=NULL;
		temp=h;
		for(int i=0;i<jumps;i++)
		{
		    prev=temp;
		    temp=temp->next;
		}
		prev->next=temp->next;
		return h;
	}
};
