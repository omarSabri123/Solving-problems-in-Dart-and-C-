bool isAnagram(String s , String t){
      if(s.length != t.length)return false;
      List<int> list = List.filled(26,0);
      for(int i = 0 ; i < s.length ; i++){
              int indix = s.codeUnitAt(i) - 97 ;
              list[indix]++;
              int indix1 = t.codeUnitAt(i) - 97 ;
              list[indix1]--;
      }
      for(int j = 0 ; j < list.length ; j++) if(list[j]!=0)return  false ;
      return true ;
}
void main(){
      String s = "anagram";
      String t = "nagarag";
      print(isAnagram(s, t));
}