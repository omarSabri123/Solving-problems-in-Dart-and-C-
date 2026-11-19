#include<iostream>
using namespace std ;
struct ListNode{
    int val ;
    ListNode* next ;
};
ListNode* head = NULL ;
void insert(int value){
    ListNode*  NowNode  = new ListNode ;
    NowNode->val = value ;
    NowNode->next = NULL ;
    if(head == NULL){
        head = NowNode ;
    }else{
        ListNode* Temp = head ;
        while(Temp->next != NULL){
                Temp = Temp->next ;
        }
        Temp->next = NowNode ;
    }
}
ListNode* reverseList(ListNode* head){
        ListNode* prev = NULL ;
        ListNode* curnt = head ;
        while(curnt != NULL){
            ListNode* Temp = curnt->next;
            curnt->next = prev ;
            prev = curnt ;
            curnt = Temp;
        }
        return prev ;
}
int main(){
    insert(1);
    insert(2);
    insert(3);
    cout<<reverseList(head);
    return 0 ;

}