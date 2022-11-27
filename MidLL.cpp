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
    ListNode* middleNode(ListNode* head) {
        
        ListNode* current = head;
        int length = 0;
        bool DivPossible = false;

        while(current != NULL) {
            length++;
            current = current -> next;
        }

        int mid = (length / 2) + 1;
        current = head;

        while(mid > 1) {

            if(mid > 3)
                DivPossible = true;

            if(DivPossible) {
                current = current -> next -> next;
                mid -= 2;
            }
            else{
                current = current -> next;
                mid--;
            }
            DivPossible = false;    
        }

        return current;

    }
};