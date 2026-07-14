#include<iostream>
using namespace std;

bool SequentialSearch(int arr[], int last, int target, int& locn)
{
    int i = 0;
    while(i <= last)
    {
        if(arr[i] == target)
        {
            locn = i;
            return true;
        }
        i++;
    }
    locn = -1;
    return false;
}

bool recursive_linear(int arr[], int index, int target, int last, int& locn)
{
    if(index <= last)
    {
        if(arr[index] == target)
        {
            locn = index;
            return true;
        }
        return recursive_linear(arr, index + 1, target, last, locn);
    }

    locn = -1;
    return false;
}

bool ordered(int arr[], int index, int target, int last, int& locn)
{
    while(index <= last)
    {
        if(arr[index] == target)
        {
            locn = index;
            return true;
        }
        else if(arr[index] > target)
        {
            locn = -1;
            return false;
        }
        index++;
    }

    locn = -1;
    return false;
}

bool binary_search(int arr[], int index, int target, int last, int& locn)
{
    int low = 0;
    int high = last;

    while(low <= high)
    {
        int mid = (low + high) / 2;

        if(arr[mid] == target)
        {
            locn = mid;
            return true;
        }
        else if(arr[mid] > target)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    locn = -1;
    return false;
}

bool sentinel(int arr[], int index, int target, int last, int& locn)
{
    arr[last + 1] = target;

    if(SequentialSearch(arr, last + 1, target, locn))
    {
        if(locn == last + 1)
            return false;
        else
            return true;
    }

    return false;
}

bool probability(int arr[], int target, int last, int& locn)
{
    if(SequentialSearch(arr, last, target, locn))
    {
        if(locn != 0)
        {
            int temp = arr[locn];
            arr[locn] = arr[locn - 1];
            arr[locn - 1] = temp;
        }

        return true;
    }

    return false;
}

void get_input(int arr[], bool flag, int& target, int n)
{
    if(flag)
        cout << "Enter the " << n << " numbers in sorted order:";
    else
        cout << "Enter " << n << " numbers:\n";

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the element to be searched:";
    cin >> target;
}

int main()
{
    int ch;

    do
    {
        cout << "\nEnter your choice:\n";
        cout << "1.Iterative Sequential Search\n";
        cout << "2.Recursive Sequential Search\n";
        cout << "3.Ordered List Search\n";
        cout << "4.Sentinal Search\n";
        cout << "5.Binary Search\n";
        cout << "6.Probability Search\n";
        cout << "7.Exit\n:";
        
        cin >> ch;

        int n=0;

        if(ch >= 1 && ch <= 6)
        {
            cout << "Enter the no of elements:";
            cin >> n;
        }

        int arr[n + 1];
        int target;
        int locn;

        switch(ch)
        {
            case 1:

                get_input(arr, false, target, n);

                if(!SequentialSearch(arr, n - 1, target, locn))
                    cout << "Element " << target << " not present in the list" << endl;
                else
                    cout << "Element " << target << " is found at location:" << locn << endl;

                break;

            case 2:

                get_input(arr, false, target, n);

                if(!recursive_linear(arr, 0, target, n - 1, locn))
                    cout << "Element " << target << " not present in the list" << endl;
                else
                    cout << "Element " << target << " is found at location:" << locn << endl;

                break;

            case 3:

                get_input(arr, true, target, n);

                if(ordered(arr, 0, target, n - 1, locn))
                    cout << "Element " << target << " is found at location:" << locn << endl;
                else
                    cout << "Element " << target << " not present in the list" << endl;

                break;

            case 4:

                get_input(arr, false, target, n);

                if(sentinel(arr, 0, target, n - 1, locn))
                    cout << "Element " << target << " is found at location:" << locn << endl;
                else
                    cout << "Element " << target << " not present in the list and inserted at the last position" << endl;

                break;

            case 5:

                get_input(arr, true, target, n);

                if(binary_search(arr, 0, target, n - 1, locn))
                    cout << "Element " << target << " is found at location:" << locn << endl;
                else
                    cout << "Element " << target << " not present in the list" << endl;

                break;

            case 6:

                get_input(arr, false, target, n);

                if(probability(arr, target, n - 1, locn))
                    cout << "Element " << target << " is found at location:" << locn << " and swapped" << endl;
                else
                    cout << "Element " << target << " not present in the list" << endl;

                break;

            case 7:

                break;

            default:

                cout << "INVALID CHOICE!! TRY AGAIN\n";
                break;
        }

    } while(ch != 7);

    return 0;
}