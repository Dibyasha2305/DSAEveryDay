#include <vector>
#include <algorithm> // for std::swap

using namespace std;

class Solution {
public:
    void quickSort(vector<int>& arr, int low, int high) {
        if (low < high) {
            int pi = partition(arr, low, high);

            quickSort(arr, low, pi - 1);
            quickSort(arr, pi + 1, high);
        }
    }

public:
    int partition(vector<int>& arr, int low, int high) {
        int pivot = arr[low]; 
        
        int i = low; 
        
        for (int j = low + 1; j <= high; j++) {
            
            if (arr[j] < pivot) {
                i++; 
                swap(arr[i], arr[j]);
            }
        }
        
        swap(arr[low], arr[i]);
        return i; 
    }
};