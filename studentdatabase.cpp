#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct Student {
    string name;
    int dob;
    int adhaar;
    char gender;
};
Student getStudent(){
    Student s;
    cout << "Enter the name: ";
    cin >> s.name;
    cout << "Enter the Date of Birth (ddmmyyyy): ";
    cin >> s.dob;
    cout << "Enter the Gender (M/F): ";
    cin >> s.gender;
    cout << "Enter the Adhaar Number: ";
    cin >> s.adhaar;
    return s;
}
void sortStudents(vector<Student>& students) {
    sort(students.begin(), students.end(), [](const Student& a, const Student& b) {
        return a.name < b.name;
    });
}
void sortStudentsdob(vector<Student>& students) {
    sort(students.begin(), students.end(), [](const Student& a, const Student& b) {
        return a.dob < b.dob;
    });
}

int main() {
    int n;
    cout << "Enter the Number of Students: ";
    cin >> n;
    vector<Student> students;
    students.reserve(n);
    for (int i = 0; i < n; ++i) {
        students.push_back(getStudent());
    }
    int m;
    cout<<"Choose(1.Name Sort,2.DOB sort)"<<endl;
    cin>>m;
    if(m==2){
       sortStudentsdob(students);
    cout << "Sorted list of students by DOB:" << endl;
    for (const auto& student : students) {
        cout  << "DOB: " << student.dob << ", Name: " << student.name<< ", Gender: " << student.gender << ", Adhaar: " << student.adhaar << endl;
    } 
    }else
    {sortStudents(students);
    cout << "Sorted list of students by name:" << endl;
    for (const auto& student : students) {
        cout << "Name: " << student.name << ", DOB: " << student.dob << ", Gender: " << student.gender << ", Adhaar: " << student.adhaar << endl;
    }}
    return 0;
}
