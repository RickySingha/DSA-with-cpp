// problem statement : In array of size N, there are numbers ranging from 1 to N - 1 at least once, there is a single integer that 
// is present twice . Find the duplicate __cpp_lib_integer_sequence

// To solve this problem we use XOR , we XOR the entire array with an array from 1 to N - 1 giving us the final answer
// since at the end the duplicate value will be left remaining and XOR with same value gives 0 ,
// hence 0 XOR val = val

#include<iostream>
using namespace std;
int findDuplicate(int arr[],int size){
    int result = 0;
    for(int i = 0; i < size ; i++){
        result = result^arr[i];
    }
    for(int i = 0 ; i< size ; i++){
        result = result^i;
    }
    return result;
}

int main(){
    int arr[5] = {1,2,1,3,4};
    int result = findDuplicate(arr,5);
    cout<<"The duplicate in the array is: "<<result<<endl;
    return 0;
}