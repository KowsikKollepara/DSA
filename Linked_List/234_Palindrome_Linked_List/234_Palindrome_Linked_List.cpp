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
    public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev=NULL;
        ListNode* current=head;
        while(current){
            ListNode* front=current->next;
            current->next=prev;
            prev=current;
            current=front;
        }
        return prev;
    }
public:
    bool isPalindrome(ListNode* head) {
        if(!head || !head->next) return true;
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* newhead=reverseList(slow->next);
        ListNode* first=head;
        ListNode* second=newhead;
        while(second){
            if(first->val!=second->val){
                reverseList(newhead);
                return false;
            }
            first=first->next;
            second=second->next;
        }
        reverseList(newhead);
        return true;
    }
};
int main(){
    
return 0;
}