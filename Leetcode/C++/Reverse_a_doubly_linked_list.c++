#include<iostream>
using namespace std ;
struct DoublyLinkedListNode{
    int data ;
    DoublyLinkedListNode* prev ;
    DoublyLinkedListNode* Next ;
};
DoublyLinkedListNode* llist = NULL ;
void insert (int value){
        DoublyLinkedListNode* NewNode = new DoublyLinkedListNode ;
        NewNode->data = value ;
        NewNode->Next = NULL ;
        NewNode->prev = NULL ;
        if(llist == NULL){
            llist = NewNode ;
        }else{
                llist->prev = NewNode ;
                llist->prev->Next = llist;
                llist = llist->prev ;
        }
}
void Display(){
    if(llist == NULL){
        cout<<"Linkd list is empty" << endl;
    }else{
        DoublyLinkedListNode* Temp = llist ;
        while (llist != NULL){
            cout << llist->data << " ";
            llist = llist->Next;
        }
    }
}
int main(){
    int tast ;
    cin >> tast ;

    for(int i = 0 ; i < tast ; i++){
        int value ;
        cin >> value ;
        insert(value);
    }
    Display();
    return 0 ;
}