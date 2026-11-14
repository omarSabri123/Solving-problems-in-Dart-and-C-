#include<iostream>
using namespace  std ;
char Stack[10000] ;
int top = -1 ;
bool isValid(string s){
        for(int i = 0 ; i < s.size() ;i++){
            if(s[i] == '[' || s[i] == '{' || s[i] == '('){
                top++;//1
                Stack[top] = s[i] ;//(
            }else{
                if(top == -1) return false ;
                if(s[i] == ']' && Stack[top] == '[' || s[i] == ')' && Stack[top] == '(' || s[i] == '}' && Stack[top] == '{'){
                    top -- ;
                }else {
                    return false ;
                }
            }
            
        }
        if(top == -1) return true ;
        return false ;
}
int main(){
    string s = "(]";
    cout << isValid(s);
    return 0 ;
}