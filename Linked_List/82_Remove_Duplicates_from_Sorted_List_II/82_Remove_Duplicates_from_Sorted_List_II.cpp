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
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head) return head;
        ListNode* temp = head;
        ListNode* prev = NULL;
        while (temp) {
            if (temp->next && temp->val == temp->next->val) {
                int value = temp->val;
                while (temp && temp->val == value) {
                    temp = temp->next;
                }
                if (prev)
                    prev->next = temp;
                else
                    head = temp;
            } else {
                prev = temp;
                temp = temp->next;
            }
        }
        return head;
    }
};

int main(){
    
return 0;
}