#include <iostream>
#include <string>
using namespace std;
struct Subject {
    string name;
    int internalMarks;
    int midtermmarks;
    int termendmarks;
};
Subject subjects() {
    Subject s;
    cout << "Enter the subject name:" << endl;
    cin >> s.name;
    cout << "Enter the internal marks (out of 40):" << endl;
    cin >> s.internalMarks;
    cout << "Enter the mid term marks (out of 50):" << endl;
    cin >> s.midtermmarks;
    cout << "Enter the end term  marks (out of 100):" << endl;
    cin >> s.termendmarks;
    return s;
}
int cgpa(int n, int m, int o) {
    int c;
    c = (n + (m * 30 / 50) + (o * 30 / 100))/10;
    return c;
}
float totalCgpa(Subject arr[], int n) {
    int totalCgpaSum = 0;
    for (int i = 0; i < n; i++) {
        totalCgpaSum += cgpa(arr[i].internalMarks, arr[i].midtermmarks, arr[i].termendmarks);
    }
    return static_cast<float>(totalCgpaSum) / n;
}
int main(){
    int n;
    cout << "Enter the Number of Subjects:" << endl;
    cin >> n;
    Subject arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = subjects();
    }
    for (int i = 0; i < n; i++) {
        int c = cgpa(arr[i].internalMarks, arr[i].midtermmarks, arr[i].termendmarks);
        cout << "CGPA for subject " << arr[i].name << " is: " << c << endl;
    }
    float totalCgpaValue = totalCgpa(arr, n);
    cout << "Total CGPA for all subjects is: " << totalCgpaValue << endl;
    return 0;
}
