/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* rev=NULL;
        ListNode* cur;
        while(head!=NULL){
            cur=head;
            head=head->next;
            cur->next=rev;
            rev=cur;
        }
        return rev;
    }
};

// time complexity O(n) where n is the number of nodes in the linked list   
// space complexity O(1) as we are not using any extra space

input: head = [1,2,3,4,5]
output: [5,4,3,2,1]