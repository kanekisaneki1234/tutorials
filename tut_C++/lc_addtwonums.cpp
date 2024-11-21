#include <cstddef>
#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

// class Node{
//     public:
//         int data;
//         Node* next;
    
//     Node(int value) {
//         data = value;
//         next = nullptr;
//     }
// };

// class LinkedList{
//     private:
//         Node* head;
//     public:
//     LinkedList() {
//         head = nullptr;
//     }
//     void append(int value) {
//         Node* newNode = new Node(value);
//         if (head==nullptr) {
//             head = newNode;
//         } 
//         else {
//             Node* temp = head;
//             while(temp->next!=nullptr) {
//                 temp = temp->next;
//             }
//             temp->next=newNode;
//         }
//     }
// };

class Solution {
public:
    std::vector<int> addTwoNumbers(std::vector<int> l1, std::vector<int> l2) {
        std::vector<int> sol;
        int ref;
        int carry=0;
        size_t i=0;
        int num1;
        int num2;

        while (carry!=0 || i < l1.size() || i < l2.size()) {
            if (i<size(l1)) {
                num1 = l1[i];
            }
            else {
                num1 = 0;
            }
            if (i<size(l2)) {
                num2 = l2[i];
            }
            else {
                num2 = 0;
            }
            int sum = (num1+num2+carry);
            carry=sum/10;
            sol.push_back(sum%10);
            i++;
        }
        return sol;
    }
};

int main() {
    std::vector<int> l1 = {2,4,4};
    std::vector<int> l2 = {5,6,4};

    Solution soln;
    std::vector<int> vec = soln.addTwoNumbers(l1, l2);

    std::copy(vec.begin(), vec.end(), std::ostream_iterator<int>(std::cout, " "));
}