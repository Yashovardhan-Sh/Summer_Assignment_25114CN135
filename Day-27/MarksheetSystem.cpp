#include <iostream>
#include <string>

using namespace std;

struct Student {
    int roll;
    string name;
    int math;
    int science;
    int english;
    int total;
    float average;
};

Student s[100];
int totalStudents = 0;

void add() {
    cout << "Enter Roll: ";
    cin >> s[totalStudents].roll;
    cin.ignore();
    cout << "Enter Name: ";
    getline(cin, s[totalStudents].name);
    cout << "Enter Math Marks: ";
    cin >> s[totalStudents].math;
    cout << "Enter Science Marks: ";
    cin >> s[totalStudents].science;
    cout << "Enter English Marks: ";
    cin >> s[totalStudents].english;
    
    s[totalStudents].total = s[totalStudents].math + s[totalStudents].science + s[totalStudents].english;
    s[totalStudents].average = s[totalStudents].total / 3.0;
    totalStudents++;
}

void display() {
    for (int i = 0; i < totalStudents; i++) {
        cout << s[i].roll << " " << s[i].name << " Total: " << s[i].total << " Avg: " << s[i].average << "%\n";
    }
}

void generateMarksheet() {
    int sr;
    bool f = false;
    cout << "Enter Roll to generate marksheet: ";
    cin >> sr;
    for (int i = 0; i < totalStudents; i++) {
        if (s[i].roll == sr) {
            cout << "\n==============================\n";
            cout << "          MARKSHEET           \n";
            cout << "==============================\n";
            cout << "Roll No: " << s[i].roll << "\n";
            cout << "Name:    " << s[i].name << "\n";
            cout << "------------------------------\n";
            cout << "Math:    " << s[i].math << "\n";
            cout << "Science: " << s[i].science << "\n";
            cout << "English: " << s[i].english << "\n";
            cout << "------------------------------\n";
            cout << "Total:   " << s[i].total << "/300\n";
            cout << "Average: " << s[i].average << "%\n";
            cout << "Result:  " << (s[i].average >= 40 ? "PASSED" : "FAILED") << "\n";
            cout << "==============================\n";
            f = true;
            break;
        }
    }
    if (!f) cout << "Not found\n";
}

void del() {
    int d;
    bool f = false;
    cout << "Enter Roll to delete: ";
    cin >> d;
    for (int i = 0; i < totalStudents; i++) {
        if (s[i].roll == d) {
            for (int j = i; j < totalStudents - 1; j++) {
                s[j] = s[j + 1];
            }
            totalStudents--;
            f = true;
            cout << "Deleted\n";
            break;
        }
    }
    if (!f) cout << "Not found\n";
}

void update() {
    int u;
    bool f = false;
    cout << "Enter Roll to update: ";
    cin >> u;
    for (int i = 0; i < totalStudents; i++) {
        if (s[i].roll == u) {
            cout << "Enter New Math Marks: ";
            cin >> s[i].math;
            cout << "Enter New Science Marks: ";
            cin >> s[i].science;
            cout << "Enter New English Marks: ";
            cin >> s[i].english;
            
            s[i].total = s[i].math + s[i].science + s[i].english;
            s[i].average = s[i].total / 3.0;
            f = true;
            cout << "Updated\n";
            break;
        }
    }
    if (!f) cout << "Not found\n";
}

int main() {
    int choice;
    do {
        cout << "\n1. Add Student & Marks\n2. Display Summary\n3. Generate Marksheet\n4. Delete Record\n5. Update Marks\n6. Exit\nEnter choice: ";
        cin >> choice;
        if (choice == 1) add();
        else if (choice == 2) display();
        else if (choice == 3) generateMarksheet();
        else if (choice == 4) del();
        else if (choice == 5) update();
    } while (choice != 6);
    return 0;
}
