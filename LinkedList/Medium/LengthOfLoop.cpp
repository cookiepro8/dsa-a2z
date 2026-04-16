#include<iostream>
using namespace std;

class ListNode{
    public:
    int val;
    ListNode* next;
    ListNode(int data1, ListNode* next1){
        val = data1;
        next = next1;
    }
    //Node 
    ListNode(int data1){
        val = data1;
        next = NULL;
    }
};

class solution{
  public:
    int getMeetingPoint(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            
            if(slow == fast){
                return lengthOfLoop(slow);
            }
        }
        return 0;
    }
        
    
    int lengthOfLoop(ListNode* meetingPoint){
        ListNode* temp = meetingPoint->next;
        int length = 1;
        while(temp != meetingPoint){
            temp = temp->next;
            length++;
        }
        return length;
    }
};

int main(){
 // Creating a sample linked list with a loop
    ListNode* head = new ListNode(1);
    ListNode* second = new ListNode(2);
    ListNode* third = new ListNode(3);
    ListNode* fourth = new ListNode(4);
    ListNode* fifth = new ListNode(5);

    // Linking the nodes
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    // Creating a loop from fifth to second
    fifth->next = second;

    // Creating a Solution object
    solution obj;

    // Getting the loop length
    int loopLength = obj.getMeetingPoint(head);

    // Printing the result
    if (loopLength > 0) {
        cout << "Length of the loop: "
             << loopLength << endl;
    } else {
        cout << "No loop found in the linked list."
             << endl;
    }

    return 0;
}