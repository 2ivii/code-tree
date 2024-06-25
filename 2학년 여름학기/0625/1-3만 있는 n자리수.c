#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i=0;i<n;i++) arr[i]=1;

    while (true){
        int c1=0, c2=0, c3=0;
        for (int i=0;i<n;i++){
            if (arr[i]==1) c1++;
            else if (arr[i]==2) c2++;
            else if (arr[i]==3) c3++;
        }
        if (c1<=c2 && c2<=c3){
            for (int i=0;i<n;i++) cout << arr[i];
            cout << endl;
        }

        int pos = n - 1;
        while (pos >= 0 && arr[pos] == 3) {
            arr[pos] = 1; 
            pos--;
        }
        if (pos < 0) break; 
        arr[pos]++; 
    }
    

    return 0;
}
