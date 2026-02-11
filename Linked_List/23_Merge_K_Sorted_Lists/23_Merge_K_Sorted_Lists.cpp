#include <bits/stdc++.h>
using namespace std;
struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
class Solution {
class compare{
public :
    bool operator()(ListNode* a,ListNode* b){
        return a->val>b->val;
    }
};
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue <ListNode* , vector<ListNode*> , compare>pq;
        ListNode* dummy=new ListNode(-1);
        ListNode* add=dummy;
        for(auto heads:lists){
            if(heads){
                pq.push(heads);
            }
        }
        while(!pq.empty()){
            ListNode* temp=pq.top();
            add->next=temp;
            add=add->next;
            pq.pop();
            if(temp->next){
                pq.push(temp->next);
            }
        }
        return dummy->next;
    }
};
int main(){
    
return 0;
}