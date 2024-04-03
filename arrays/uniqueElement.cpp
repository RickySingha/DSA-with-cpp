#include<iostream>
using namespace std;

int findUnique(int array[], int size){
    //we can find the unique element in an array by making use of XOR property
    int ans = 0 ;
    for (int i = 0 ;i < size ;i++){
        ans = ans ^ array[i];
    }
    return ans;

}

int main(){
    int array[5] = {2,2,3,3,1};
    int result = findUnique(array,5);
    cout<<"The unique element in the array is : "<<result<<endl;
    return 0;
}