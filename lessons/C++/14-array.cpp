/*
    Array is an data strucutre where we can store data of any one datatype

    int evenNumbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // here we specified the capacity
    int oddNumners[] = {1, 3, 5, 7, 9}; // here the capacity of array is automated

    -> can not over load the specified capacity array with more than specified element, it causes error
    -> array take contiues space in the memory -> with respect to datatype space
        ex: int arr[5] = {1, 2, 3, 4, 5} -> 104^[1], 108^[2], 112^[3], 116^[4], 120^[5];
    -> every element in an array consist of any index
    -> index starts form 0
*/

#include <iostream>
using namespace std;

int main(){
    // *# array basic initilization and declaration code snnipet #*
    // int num[5] = {1, 2, 3, 4, 5};
    // int evenNum[] = {2, 4, 6, 8, 10};
    // cout << num[4] << endl;

    // *# array continues memory allocation adress proof code #*
    // int even[5] = {2, 4, 6, 8, 10};
    // int a = even[0];
    // int b = even[1];
    // int c = even[2];
    // int *addresa = &a;
    // int *addresb = &b;
    // int *addresc = &c;
    // cout << addresa << endl;
    // cout << addresb<< endl;
    // cout << addresc << endl;


    // *# To print out even nums of any array #*
    // int nums[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // for(int i = 0; i<sizeof(nums)/sizeof(nums[0]); i++){
    //     if(nums[i]%2==0){
    //         cout << nums[i] << endl;
    //     }
    // }


    // *# TRavesing an array
    // int nums[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // for(int i = 0; i <sizeof(nums)/sizeof(nums[0]); i++){
    //     cout << nums[i] << endl;

    // }


    //*# Taking input in a custom index
    // int lanja[5];
    // cout << "Enter any num: ";
    // cin >> lanja[2];
    // cout << lanja[2];

    // SUM OF ALL NUMNBERS IN AN ARRAY
    // int arr[5] = {1, 2, 3, 4, 5};
    // int sum = 0;
    // for(int i = 0; i<sizeof(arr)/sizeof(arr[0]); i++){
    //     sum+= arr[i];
    // }
    // cout << sum;


    
    return 0;
}