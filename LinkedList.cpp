// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    
    Node(int val){
        data = val;
        next = NULL;
    }
};

class solution{
    public:
    //if only head is present or ll is empty
        Node* deleteTail(Node* head){
            if(head == NULL || head->next == NULL){
                delete head;
                return NULL;
            }
        
        
        //Traverse to the second last ndoe
        Node* curr = head;
        while(curr->next->next != NULL){
            curr = curr->next;
        }
        
        //once we found it
        delete curr->next;
        curr->next = NULL;
        
        //return the new head;
        return head;
        }
};

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    
    solution sol;
    head = sol.deleteTail(head);
    
    Node* temp = head;
    while(temp){
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}