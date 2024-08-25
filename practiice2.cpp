#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Size of array - ";
    cin >> n;
    int array[n];
    cout << endl;
    cout << "Enter the elements of array :- " << endl;
    for (int j = 0; j < n; j++)
    {
        cin >> array[j];
    }
    
    int start = 0;
    int end = n-1;

    while (start<=end)
    {
        swap(array[start],array[end]);
        start++;
        end--;
    }
    cout << "Reversed array is :- ";
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    return 0;
}