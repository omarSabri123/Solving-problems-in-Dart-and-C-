int minValue(List<int> arr){
            arr.sort();
            return int.parse(arr.toSet().join());
}
void main(){
            List<int> arr = [1, 3, 1];
            print(minValue(arr));
}