#include <iostream>

using namespace std;

int main() {
    string name;
    float labGrade, midtermGrade, finalGrade;
    float lastScore;


    cout << "Enter the student's name: ";
    cin>>name;

    cout << "Enter the lab grade: ";
    cin >> labGrade;

    cout << "Enter the midterm grade: ";
    cin >> midtermGrade;

    cout << "Enter the final grade: ";
    cin >> finalGrade;


    cout << "Name: " << name << endl;
    cout << "Lab: " << labGrade << endl;
    cout << "Midterm: " << midtermGrade << endl;
    cout << "Final: " << finalGrade << endl;
    lastScore = labGrade * 0.25 + midtermGrade * 0.35 + finalGrade * 0.4;
    cout << "Last Score: " << lastScore << endl;

}
