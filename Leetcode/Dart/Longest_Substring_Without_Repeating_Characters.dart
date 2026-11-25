int lengthOfLongestSubstring(String s){
        int left = 0 ;
        int cont = 0 ;
        Set<String>set = {};
        for(int i = 0 ; i < s.length ; i++){
              if(!set.add(s[i])){
                  while(!set.add(s[i])){
                      set.remove(s[i]);
                      left++;
                  }
              }
              if(set.length > cont) cont = set.length ;
        }
        return cont ;
}
void main(){
            String s = "aar";
            print(lengthOfLongestSubstring(s));
}