#include <iostream>

using namespace std; 



int search(int arr[],int size, int target){
    for (int i = 0; i < size; i++)//looping for searching target on array
    {
        if (arr[i] == target)// to check is the number at the index of array same as the target
        {
            return i;//target found
        }else{
            
        }
        
    }
    return -1;//target not found
}

int main(){
    int data[]={1,2,3,45,6,7};//data of number
    int size = sizeof(data)/sizeof(data[0]);//Used to calculate the total size of the data array and the size of a single element of the array.
    int target;


    cout<<"Enter the number :";//enter the number you want to find
    cin>>target;

    int result = search(data, size, target);


if (result != -1)
{
    cout<<"Number found At index:"<<result;
}else{
    cout<<"number Not found";
}


}
