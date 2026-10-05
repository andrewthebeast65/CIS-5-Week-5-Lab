// CIS 5 - Week 5 Lab: Eligibility check
// Name: Andrew Savio

#include <iostream>
using namespace std;

int main() {
    int age = 0;
    double gpa = 0.0;

    cout << "Age? ";
    cin >> age;

    cout << "GPA? ";
    cin >> gpa;

    // Thresholds: adult = age 18 or older, honors = GPA 3.5 or higher
    bool adult = age >= 18;
    bool honors = gpa >= 3.5;

    if (adult && honors) {
        cout << "Eligible for the honors program." << endl;
    } else if (adult || honors) {
        cout << "Halfway there. One requirement met." << endl;
    } else {
        cout << "Not eligible yet." << endl;
    }

    return 0;
}
