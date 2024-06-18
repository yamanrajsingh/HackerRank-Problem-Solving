#include <iostream>
#include <vector>

using namespace std;
// .........SELECTION SORT  ......//

void selection_sort(int arr[], int n)
{
  for (int i = 0; i <= n - 2; i++)
  {
    int mini = i;
    for (int j = i; j <= n - 1; j++)
    {
      if (arr[j] < arr[mini])
        mini = j;
    }
    swap(arr[i], arr[mini]);
  }
  cout << "Time Complexity of Selection Sort : O(n*n) for best ,average and worst case \n";
}

// ......... BUBBLE SORT .......//

void bubble_sort(int arr[], int n)
{
  for (int i = n - 1; i >= 0; i--)
  {
    for (int j = 0; j <= i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
        swap(arr[j], arr[j + 1]);
    }
  }
  cout << "Time Complexity of Bubble Sort : O(n) for best and O(n*n) for average and worst case \n";
}

// ....INSERTION SORT ..... ///

void insertion_sort(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    int j = i;
    while (j > 0 && arr[j - 1] > arr[j])
    {
      swap(arr[j], arr[j - 1]);
      j--;
    }
  }
  cout << "Time Complexity of Bubble Sort : O(n*n) for best ,average and worst case \n";
}

// .... MERGE SORT ....///

void merge(int arr[], int low, int mid, int high)
{
  int left = low;
  int right = mid + 1;
  vector<int> temp;
  while (left <= mid && right <= high)
  {
    if (arr[left] <= arr[right])
    {
      temp.push_back(arr[left]);
      left++;
    }
    else
    {
      temp.push_back(arr[right]);
      right++;
    }
  }
  while (left <= mid)
  {
    temp.push_back(arr[left]);
    left++;
  }
  while (right <= high)
  {
    temp.push_back(arr[right]);
    right++;
  }
  for (int i = low; i <= high; i++)
  {
    arr[i] = temp[i - low];
  }
  cout << "Time Complexity of Merge Sort : O(n*log n ) for best ,average and worst case \n";

}

void merge_sort(int arr[], int low, int high)
{
  if (low >= high)
    return;
  int mid = (low + high) / 2;
  merge_sort(arr, low, mid);
  merge_sort(arr, mid + 1, high);
  merge(arr, low, mid, high);
}

// ....QUICK SORT .....////

int pivotindex(int arr[],int low,int high)
{
  int pivot = arr[low];
  int i=low;
  int j=high;
  while(i<j)
  {
    while(arr[i]<=pivot && i<=high-1) i++;
    while(arr[j]>pivot && j>=low+1) j--;
    if(i<j) swap(arr[i],arr[j]);
  }
  swap(arr[low],arr[j]);
  return j;
}
void quick_sort(int arr[],int low,int high)
{
  if(low<high)
  {
    int pindex = pivotindex(arr,low,high);
    quick_sort(arr,low,pindex-1);
    quick_sort(arr,pindex+1,high);
  }
    cout << "Time Complexity of Quick Sort : O(n*log n ) for best ,average and worst O(n*n) case \n";

}

int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  cout << "Before Sorting...\n";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  // insertion_sort(arr, n);
  quick_sort(arr, 0, n - 1);
  cout << "After Sorting...\n";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}