#include<bits/stdc++.h>
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size=0;
        ListNode* slow=head;
        ListNode* fast=head;
        for(int i=0;i<n;i++){
            fast=fast->next;
        }
        if(fast==NULL){
            ListNode* newhead=slow->next;
            delete head;
            return newhead;
        }
        while(fast->next){
            slow=slow->next;
            fast=fast->next;
        }
        ListNode* front=slow->next;
        slow->next=front->next;
        delete front;
        return head;
    }
};
int main(){
    
}