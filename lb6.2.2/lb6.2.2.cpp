#include <iostream>
#include <vector>
#include <iomanip>
#include <limits>

using namespace std;


void printArray(const vector<int>& a, const string& message) {
    cout << message << ": ";
    for (int i = 0; i < a.size(); i++) {
        cout << setw(4) << a[i];
    }
    cout << endl;
}


int findMinEvenIterative(const vector<int>& a) {
    int minEven = numeric_limits<int>::max();  
    for (int i = 0; i < a.size(); i++) {  
        if (a[i] % 2 == 0 && a[i] < minEven) {
            minEven = a[i];
        }
    }
    return (minEven == numeric_limits<int>::max()) ? -1 : minEven;  
}


vector<int> createArray() {
    return { 5, 2, 8, 11, 4, 15, 18, 1 };  
}

int main() {
    
    vector<int> a = createArray();

   
    printArray(a, "mas");

    
    int minEven = findMinEvenIterative(a);

    if (minEven != -1) {
        cout << "min " << minEven << endl;
    }
    else {
        cout << "---" << endl;
    }

    
   

    return 0;
}
