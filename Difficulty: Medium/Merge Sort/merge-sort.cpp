#include <vector>

using namespace std;

class Solution {
private:
    void merge(vector<int>& arr, int l, int m, int r) {
        int n1 = m - l + 1;
        int n2 = r - m;

        vector<int> leftArr(n1);
        vector<int> rightArr(n2);

        for (int i = 0; i < n1; i++) leftArr[i] = arr[l + i];
        for (int j = 0; j < n2; j++) rightArr[j] = arr[m + 1 + j];

        int i = 0; 
        int j = 0; 
        int k = l; 

        while (i < n1 && j < n2) {
            if (leftArr[i] <= rightArr[j]) {
                arr[k] = leftArr[i];
                i++;
            } else {
                arr[k] = rightArr[j];
                j++;
            }
            k++;
        }

        while (i < n1) {
            arr[k] = leftArr[i];
            i++;
            k++;
        }

        while (j < n2) {
            arr[k] = rightArr[j];
            j++;
            k++;
        }
    }

public:
    void mergeSort(vector<int>& arr, int l, int r) {
        if (l >= r) {
            return; 
        }

        int m = l + (r - l) / 2;

        mergeSort(arr, l, m);      
        mergeSort(arr, m + 1, r);  

        merge(arr, l, m, r);
    }
};