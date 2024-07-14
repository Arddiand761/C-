#include <iostream>

using namespace std; 




int search(int arr[],int size, int target){
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }else{
            
        }
        
    }
    return -1;
}

int main(){
    int data[]={1,2,3,45,6,7};
    int size = sizeof(data)/sizeof(data[0]);
    int target;


    cout<<"Enter the number :";
    cin>>target;

    int result = search(data, size, target);


if (result != -1)
{
    cout<<"Number found At index:"<<result;
}else{
    cout<<"number Not found";
}


}