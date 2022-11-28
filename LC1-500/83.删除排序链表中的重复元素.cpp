#include <iostream>
using namespace std;
/** * Definition for singly-linked list. * struct ListNode { *     int val; *     ListNode *next; *     ListNode() : val(0), next(nullptr) {} *     ListNode(int x) : val(x), next(nullptr) {} *     ListNode(int x, ListNode *next) : val(x), next(next) {} * }; */
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL||head->next==NULL)return head;
        ListNode *pre = head, *idx = pre->next;
        while (idx != NULL) {
            if (pre->val == idx->val) {
                DeleteNode(pre, idx);
                idx = pre->next;
            } else {
                pre = idx;
                idx = idx->next;
            }
        }
        return head;
    }
    void DeleteNode(ListNode* pre, ListNode* idx) {
        pre->next = idx->next;
        delete idx;
    }
};
int main() {
    ListNode c(2);
    ListNode b(1,&c);
    ListNode a(1,&b);
    ListNode* header;
    header = &a;
    Solution s;
    s.deleteDuplicates(header);
    while (header!=NULL)
    {
        cout<<header->val;
        header=header->next;
    }
    
    return 0;
}