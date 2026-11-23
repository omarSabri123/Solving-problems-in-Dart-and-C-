#include<iostream>
using namespace std ;
struct ListNode{
    int val ;
    ListNode* next ;
};
ListNode* head = NULL ;
void insert(int value){
        ListNode* NowNode = new ListNode ;
        NowNode->val = value ;
        NowNode->next = NULL ;
        if(head == NULL){
                head = NowNode ; 
        }else{
            ListNode* Temp = head ;
            while(Temp->next != NULL){
                Temp = Temp->next ;
            }
            Temp->next = NULL;
        }
}
void reorderList(ListNode* head){
            ListNode* Temp1 = head ;
            ListNode* Temp2 = head ;
            while(Temp2 != NULL && Temp2->next != NULL){
                    Temp1 = Temp1->next ;
                    Temp2 = Temp2->next->next ;
            }
            ListNode* Temp3 = NULL ;
            ListNode* Temp4 = Temp1 ;
            while(Temp4 != NULL){
                    ListNode* prev = Temp4->next ;
                    Temp4->next = Temp3 ;
                    Temp3 = Temp4 ;
                    Temp4 = prev ;
            }
            ListNode* Temp5 = head ;
            ListNode* Temp6 = Temp5->next ;
            ListNode* Temp7 = Temp3->next ;
            while(Temp3->next != NULL){
                            Temp3->next = NULL ;
                            Temp5->next = Temp3 ;
                            Temp3->next = Temp6 ;
                            Temp6 = Temp6->next ;
                            Temp5 = Temp5->next->next ;
                            Temp3 = Temp7 ;
                            Temp7 = Temp7->next ;   
            }
}
int main(){
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    reorderList(head);
    return 0 ;
}