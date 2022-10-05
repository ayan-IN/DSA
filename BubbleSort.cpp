#include <iostream>
#include <vector>
using namespace std;

void BubbleSort(vector<int> &arr)
{
    int n = arr.size();
    for (int times = 1; times <= n - 1; times++)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
            }
        }
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
    BubbleSort(arr);
    printArray(arr);
    return 0;
}
