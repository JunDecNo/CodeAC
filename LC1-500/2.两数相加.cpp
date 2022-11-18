#include <iostream>
using namespace std;
/**
Definition for singly-linked list.
struct ListNode {    int val; *
ListNode *next;    ListNode() : val(0), next(nullptr) {}ListNode(int x)
: val(x), next(nullptr) {}    ListNode(int x, ListNode *next) : val(x),
next(next) {}}; */
struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
 public:
  ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
    ListNode *res = l1, *before1, *before2;
    int c = 0;
    while (l1 != NULL || l2 != NULL) {
      if (l1 == NULL) {
        before1->next = l2;  //将l2剩余的部分接到l1后
        l1 = l2;
        l2 = NULL;  // l2置为空
        l1->val = l1->val + c;
      } else if (l2 == NULL) {
        l1->val = l1->val + c;
      } else
        l1->val = l1->val + l2->val + c;
      if (l1->val > 9) {
        c = 1;
        l1->val -= 10;
      } else
        c = 0;

      before1 = l1;
      l1 = l1->next;
      if (l2 != NULL) {
        before2 = l2;
        l2 = l2->next;
      }
    }
    //在最后判断是否存在进位
    if (c == 1) {
      before1->next = new ListNode(1);
    }
    return res;
  }
};
int main() { return 0; }