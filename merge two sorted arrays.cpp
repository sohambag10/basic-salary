#include <iostream>
#include <vector>

using namespace std;

vector<int> mergeSortedArrays(const vector<int>& arr1, const vector<int>& arr2) {
    vector<int> merged;
    int i = 0, j = 0;
    
    // Merge the two arrays
    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] <= arr2[j]) {
            merged.push_back(arr1[i]);
            i++;
        } else {
            merged.push_back(arr2[j]);
            j++;
        }
    }
    
    // If there are remaining elements in arr1
    while (i < arr1.size()) {
        merged.push_back(arr1[i]);
        i++;
    }
    
    // If there are remaining elements in arr2
    while (j < arr2.size()) {
        merged.push_back(arr2[j]);
        j++;
    }
    
    return merged;
}

int main() {
    // Example usage:
    vector<int> arr1 = {1, 3, 5, 7, 9};
    vector<int> arr2 = {2, 4, 6, 8, 10};
    
    vector<int> mergedArray = mergeSortedArrays(arr1, arr2);
    
    cout << "Merged Sorted Array: ";
    for (int num : mergedArray) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
