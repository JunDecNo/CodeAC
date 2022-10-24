#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    if(list1==NULL)return list2;
    if(list2==NULL)return list1;
    int i=0,j=0;
    ListNode result;
    ListNode* head=&result;
    while (list1!=NULL&&list2!=NULL){
        if((list1->val)<(list2->val)){//1大于2
            head->next=list1;
            head=head->next;
            list1=list1->next;
        }else{//2>=1
            head->next=list2;
            head=head->next;
            list2=list2->next;
        }

    }
    if(list1!=NULL)head->next=list1;
    else head->next=list2;
    return result.next;
}

int main(){

    return 0;
}