/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        set<ListNode*> nums;
        while(head!=NULL){
            if(nums.find(head)!=nums.end()){
                return true;
            }
            nums.insert(head);
            head=head->next;
        }
        return false;
    }
};

// time complexity O(n) where n is the number of nodes in the linked list   
// space complexity O(n) as we are using a set to store the nodes

input: head = [3,2,0,-4], pos = 1
output: true