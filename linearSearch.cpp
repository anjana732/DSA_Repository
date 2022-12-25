#include <iostream>

using namespace std;
int linearSearch(int arr[], int size, int x)
{
    
    for(int i=0;i<size;i++)
    {
        if(arr[i] == x)
        {
            cout<<"ele found at index "<<i;
            return i;
        }
        
    }
    return -1;
    
}
int main()
{
    int arr[] = {2,5,6, 10, 15};
    int x= 10;
    int size = sizeof(arr);
    int result = linearSearch(arr,size,x);
    if(result ==-1)
    cout<<"ele not found";
    return 0;
}

