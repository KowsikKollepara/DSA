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
ListNode* findTail(ListNode* head){
    ListNode* temp=head;
    while(temp->next&&temp){
        temp=temp->next;
    }
    return temp;
}
int findsize(ListNode* head){
    ListNode* temp=head;
    int cnt=0;
    while(temp){
        temp=temp->next;
        cnt++;
    }
    return cnt;
}
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL||head->next==NULL){
        return head;
    }
        int n=findsize(head);
        k=k%n;
        ListNode* temp=findTail(head);
        temp->next=head;
        temp=head;
        for(int i=0;i<n-k-1;i++){
            temp=temp->next;
        }
        ListNode* front=temp->next;
        temp->next=NULL;
        return front;
    }
};
int main(){
    
return 0;
}