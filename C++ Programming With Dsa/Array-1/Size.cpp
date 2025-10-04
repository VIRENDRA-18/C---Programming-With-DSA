/*Size and sizeof operator(How can we use it to
 find the Length of array?) */

#include<iostream>
using namespace std;
int main()
{
    int arr[] = {22,34,21,56,78,43,76,71,82,91,63,55,99,22};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<size;

}
