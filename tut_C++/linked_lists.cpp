#include <iostream>

using namespace std;

class Node {
    public:
        int data;
        Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class LinkedList {
    private:
        Node* head;
    public:
        LinkedList() {
            head = nullptr;
        }
        void append(int value) {
            Node* newNode = new Node(value);
            if(head==nullptr) {
                head = newNode;
            }
            else {
                Node* temp = head; //pointer pointing to the head Node.
                while(temp->next != nullptr) {
                    temp = temp->next; //temp->next means Node.next and since current node initially is always head, it directly means the node next to the head.
                }
                temp->next=newNode; // Set the value of 'next' pointer to 'newNode' which is also a pointer variable.
            }
        }
        void Display() {
            Node* temp = head;
            while(temp->next != nullptr) {
                cout << "HEAD ->" << temp->data;
                temp = temp->next;
            }
            cout << "nullptr" << endl;

            /* Because temp points to a Node object, you can use the -> operator to access members of the Node object it points to.
            temp->data accesses the data attribute of the Node that temp is pointing to.
            temp->next accesses the next pointer of the same Node, allowing us to move to the next node in the list.

            This is equivalent to:
            (*temp).data;
            (*temp).next;
            Here, (*temp) dereferences the temp pointer, giving access to the Node it points to, and then .data or .next accesses the specific members of that Node. */
        }
        void deleteNode(int value) {
            if (head==nullptr) return;

            if (head->data==value) {
                Node* temp = head;
                head = head->next;
                delete temp;
                return;
            }

            Node* temp = head;
            while(temp->next!=nullptr && temp->next->data!=value) {
                temp = temp->next;
            }

            if (temp->next==nullptr) {
                cout << "Node with value " << value << " not found." << endl;
                return;
            }

            Node* nodeToDelete = temp->next;
            temp->next=temp->next->next;
            delete nodeToDelete;
        }

};

int main() {
    LinkedList myList;

    // Append some values to the list
    myList.append(10);
    myList.append(20);
    myList.append(30);
    myList.append(40);

    // Display the linked list
    cout << "The linked list is: ";
    myList.Display();
    
    return 0;
}