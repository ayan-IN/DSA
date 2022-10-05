#include <iostream>
#include <vector>
using namespace std;

void SelectionSort(vector<int> &arr)
{
    int n = arr.size();
    for (int pos = 0; pos <= n - 2; pos++)
    {
        int current = arr[pos];
        int min_position = pos;
        for (int j = pos; j < n; j++)
        {
            if (arr[j] < arr[min_position])
            {
                min_position = j;
            }
        }
        swap(arr[pos], arr[min_position]);
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
    SelectionSort(arr);
    printArray(arr);
    return 0;
}
