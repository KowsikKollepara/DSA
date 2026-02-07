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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1=reverseList(l1);
        l2=reverseList(l2);
        ListNode dummy(-1);
        ListNode* current = &dummy;
        int carry=0;
        while(l1 || l2 || carry){
            int sum=carry;
            if(l1){
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2){
                sum+=l2->val;
                l2=l2->next;
            }
            current->next=new ListNode(sum%10);
            carry=sum/10;
            current=current->next;
        }
        return reverseList(dummy.next);
    }
};
int main(){
    
return 0;
}