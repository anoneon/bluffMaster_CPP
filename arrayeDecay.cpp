#include<iostream>
using namespace std;
void fn(int arr[]){
    cout<<sizeof(arr);
    /**************************************
     * never use sizeof(arr)/sizeof(a[0]) to get the
     * size of array in function you can use it in main 
     * and pass the size 
     * *************************************/
}
int main(){
    int arr[10];
    cout<<sizeof(arr)<<endl;
    fn(arr);        // you can overcome array decay by passing size of array
    return 0;
}