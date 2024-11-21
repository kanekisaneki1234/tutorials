#include <cstddef>
// #include <iostream>
// #include <iterator>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
    ListNode* addTwoNums(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0);
        ListNode* current = dummy;
        // size_t i=0;
        int carry=0;
        // int num1;
        // int num2;

        while(l1!=nullptr || l2!=nullptr || carry!=0) {
            int num1 = (l1==nullptr ? 0 : l1->val);
            int num2 = (l2==nullptr ? 0 : l2->val);

            int sum = num1+num2+carry;
            carry=sum/10;

            current->next=new ListNode(sum%10);
            current=current->next;

            if (l1!=nullptr) l1 = l1->next;
            if (l2!=nullptr) l2 = l2->next;
        }
        return dummy->next;
    }
};

int main() {

}