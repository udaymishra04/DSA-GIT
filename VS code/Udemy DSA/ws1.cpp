#include <iostream>
using namespace std;
int insertion(int arr[], int element, int index, int size)
{
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    return 1;
}
void deletion(int arr[], int index, int size)
{
    for (int i = index; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
}
void display(int arr[], int size)
{
    cout << "Displaying the elements: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[20] = {5, 4, 8, 6, 9, 1, 3, 7, 11, 19}, size = 10;
    int choice, index;
    cout << "Enter the operation you want to perform: " << endl;
    cout << "1.Insert a new element at end as well as at a given position\n"
         << "2.Delete an element from a given whose value is given or whose position is given\n"
         << "3.To display the elements of the linear array" << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
        int element;
        cout << "Enter the element you want you insert: " << endl;
        cin >> element;
        cout << "Enter the index where you want to insert the element: " << endl;
        cin >> index;
        insertion(arr, element, index, size);
        size++;
        display(arr,size);
        break;
    case 2:
        cout << "Enter the index from where you want to delete element: " << endl;
        cin >> index;
        deletion(arr, index, size);
        size--;
        display(arr,size);
        break;
    case 3:
        display(arr, size);
        break;
    default:
        cout << "Invalid choice" << endl;
        break;
    }
    return 0;
}