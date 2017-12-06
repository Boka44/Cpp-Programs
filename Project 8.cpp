/*Write a function that dynamically allocates an array of integers. The function should
accept an integer argument indicating the number of elements to allocate. The function
should return a pointer to the array.*/

#include<iostream>
using namespace std;

int num(int number);
int* allocates (int num);


int main(){
    int number=0;
    int *arry;
    
    number=num(number);
    arry=allocates(number);
    
    for(int i=0;i<number;i++) { 
        cout<<arry[i]<<endl;
    }
     
}
    
int num(int number) {
    cout<<"enter in array size \n";
    cin>>number;
    return number;
}
    
int* allocates (int num) {
    int *arry=new int(num);
    
    for(int i=0;i<num;i++) {
        cout<<"enter number "<<i+1<<endl;
        cin>>arry[i];
    }
    
    return arry;

}