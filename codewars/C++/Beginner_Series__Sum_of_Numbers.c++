#include<iostream>
using namespace std ;
int get_sum(int a, int b)
{
        if(a == b) return a ;
        int sum = 0 ;
        if(a < b){
                for(int i = a ; i <= b ; i++){
                        sum+=i;//-
                }
        }else{
                for(int i = b ; i <= a ; i++){
                        sum+=i;//-
                }
        }
        return sum ;
}
int main(){
    int a = -2 ;
    int b = 3  ;
    cout << get_sum(a , b);
    return 0 ;
}