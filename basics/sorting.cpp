#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n)
{
    int i, j, mini, temp;

    for (i = 0; i < n - 1; i++)
    {
        mini = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[mini])
                mini = j;
        }
        temp = arr[i];
        arr[i] = arr[mini];
        arr[mini] = temp;
    }
}

void bubbleSort(int arr[], int n)
{
    int i, j, temp, swapped = 0;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }

        if (swapped == 0)
            break;
    }
}

void insertionSort(int arr[], int n)
{
    int i, j, temp;
    for (i = 1; i < n; i++)
    {
        j = i;

        while (j > 0 && arr[j - 1] > arr[j])
        {
            temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
            j--;
        }
    }
}

void merge1(int arr[], int low, int mid, int high)
{
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.emplace_back(arr[left]);
            left++;
        }
        else
        {
            temp.emplace_back(arr[right]);
            right++;
        }
    }

    while (left <= mid)
    {
        temp.emplace_back(arr[left]);
        left++;
    }

    while (right <= high)
    {
        temp.emplace_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}

void merge2(int arr[], int low, int mid, int high)
{
    int n1 = mid - low + 1;
    int n2 = high - mid;
    int l[n1], r[n2];
    int i, j;
    for (i = 0; i < n1; i++)
    {
        l[i] = arr[low + i];
    }
    for (j = 0; j < n2; j++)
    {
        r[j] = arr[mid + 1 + j];
    }
    i = j = 0;
    int k = low;
    while (i < n1 && j < n2)
    {
        if (l[i] <= r[j])
        {
            arr[k] = l[i];
            i++;
            k++;
        }
        else
        {
            arr[k] = r[j];
            j++;
            k++;
        }
    }

    while (i < n1)
    {
        arr[k] = l[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = r[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int low, int high)
{
    int mid = low + (high - low) / 2;
    if (low >= high)
        return;

    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);

    merge1(arr, low, mid, high);
    // merge2(arr, low, mid, high);
}

void recursive_bubbleSort(int arr[], int n)
{
    if (n == 1)
        return;
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
    recursive_bubbleSort(arr, n - 1);
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low, j = high;
    while (i < j)
    {
        while (arr[i] <= pivot && i <= high - 1)
        {
            i++;
        }

        while (arr[j] > pivot && j >= low + 1)
        {
            j--;
        }
        if (i < j)
            swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivot = partition(arr, low, high);
        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
    }
}


int main()
{
    int n = 6;
    int arr[6] = {23, 54, 12, 0, -9, 7};
    // int arr[6] = {1, 2, 3, 4, 5, 6};

    // selectionSort(arr, n);
    // bubbleSort(arr, n);
    // insertionSort(arr, n);
    // mergeSort(arr, 0, n - 1);
    // recursive_bubbleSort(arr, n);
    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}