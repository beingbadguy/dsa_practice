#include<iostream>
#include<vector>
using namespace std;

void negativeSide(vector<int> & arr){

    int start = 0;
    int end = arr.size() - 1;

    while(start<=end){
        if(arr[start]<0 && arr[end]<0){
            start++;
        }
        else if(arr[start] >=0 && arr[end] <0){
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
        else if(arr[start]>=0 && arr[end]>=0){
            end--;
        }
        else{
            start++;
            end--;
        }

    }
    for (int i:arr){
        cout << " " << i;
    }
}
int main(){
    vector<int>numbers = {-1, 2, -3, 4, 5, -6};
    negativeSide(numbers);
    return 0;
}