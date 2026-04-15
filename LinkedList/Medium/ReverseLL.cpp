//Brute force approach:
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
public: //brute force method
    ListNode* reverseList(ListNode* head) {
        stack<int> st;

        ListNode* temp = head;

        while(temp != NULL){
            st.push(temp->val);
            temp = temp->next;
        }
        //temp becomes NULL eventually, so reset it to head
        temp = head;

        while(temp != NULL){
            temp->val = st.top();
            st.pop();
            temp = temp->next;
        }
        return head;
    }
};

/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode reverseList(ListNode head) {
        ListNode temp = head;
        ListNode prev = null;

        while(temp != null){
            ListNode front = temp.next;
            temp.next = prev;
            prev = temp;
            temp = front;
        }
        return prev;
    }
}

