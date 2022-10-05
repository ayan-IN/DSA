#include <iostream>
#include <vector>
using namespace std;

void InsertionSort(vector<int> &arr)
{
    int n = arr.size();
    int prev, current;
    for (int i = 1; i < n; i++)
    {
        current = arr[i];
        prev = i - 1;
        while (prev >= 0 and arr[prev] > current)
        {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = current;
    }
}
void printArray(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
        cout << arr[i] << ", ";
    cout << endl;
}
int main()
{
    vector<int> arr = {4, 8, 3, 9, 7, 6, 11, 10, 5};
    InsertionSort(arr);
    printArray(arr);
    return 0;
}
