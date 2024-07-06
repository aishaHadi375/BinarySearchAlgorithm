                // ********************* BINARY SEARCH ALGORITHM *********************                
#include <iostream>
using namespace std;

// Function to perform binary search on a sorted array
int BinarySearch(int arr[],int size, int search_no) {
    int low=0;
    int high=size-1;
    // Loop until the search range is valid
    while (low <= high) {
        // Calculate the mid index
        int mid = low + (high - low) / 2;

        // Check if the search number is at the mid index
        if (search_no == arr[mid]) {
            return mid;
        }
        // If the search number is less than the mid element, adjust the high index
        else if (search_no < arr[mid]) {
            high = mid - 1;
        }
        // If the search number is greater than the mid element, adjust the low index
        else if (search_no > arr[mid]) {
            low = mid + 1;
        }
    }

    // Return -1 if the element is not found
    return -1;
}

int main() {
    int size;
    int search_no;
    int result;

    // Prompt the user to enter the size of the array
    cout << "Enter the size of array: ";
    cin >> size;

    // Declare the array with the given size
    int arr[size];

    // Prompt the user to enter the elements of the array
    for (int i = 0; i < size; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Prompt the user to enter the element to search for
    cout << "Enter the element which you want to search: ";
    cin >> search_no;

    // Call the binary search function
    result = BinarySearch(arr,size,  search_no);

    // It will show the index no as the result of the search
    if (result == -1) {
        cout << "Element does not exist in the array" << endl;
    } else {
        cout << "The number " << search_no << " is found at index " << result << endl;
    }

    return 0;
}