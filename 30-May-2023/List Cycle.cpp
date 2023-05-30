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
	SLLNode* cycleStartNode(SLLNode* h) {
		if(h==NULL)
		{
		    return NULL;
		}
		SLLNode* slow=h;
		SLLNode* fast=h;
		while(fast && fast->next)
		{
		    slow=slow->next;
		    fast=fast->next->next;
		    if(slow==fast)
		    {
		        break;
		    }
		}
		if(fast==NULL ||fast->next==NULL)
		{
		    return NULL;
		}
		slow=h;
		while(slow!=fast)
		{
		    slow=slow->next;
		    fast=fast->next;
		}
		return slow;
	}
};