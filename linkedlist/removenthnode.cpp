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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* cur=head;
        ListNode* prev=NULL;
        int count=1;
        if(head==NULL){
            return NULL;
        }
        while(cur!=NULL){
            cur=cur->next;
            count++;
        }
        int val=(count-n);
        cur=head;
        count=1;
        if(val==1){
            cur=head;
            head=head->next;
            return head;
        }
        while(cur!=NULL){
            if(count==val){
                prev->next=cur->next;
            }
            count++;
            prev=cur;
            cur=cur->next;
        }
        return head;
        
    }
};

// time complexity O(n) where n is the number of nodes in the linked list
// space complexity O(1) as we are not using any extra space

input: head = [1,2,3,4,5], n = 2    
output: [1,2,3,5]