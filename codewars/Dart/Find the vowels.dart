List<int>vowelIndices(String word){
     return  RegExp('[aeiouyAEIOUY]').allMatches(word).map((m) => m.start +1).toList();
}
void main(){
    String word = "crIssUm";
    print(vowelIndices(word));
}