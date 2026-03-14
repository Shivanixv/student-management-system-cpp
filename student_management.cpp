#include <iostream>
using namespace std;

class Student {
public:
    int id;
    string name;
    float marks;

    void input() {
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display() {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
        cout << "---------------------" << endl;
    }
};

int main() {

    Student s[100];
    int n = 0;
    int choice;

    while(true) {

        cout << "\n1.Add Student\n2.Display Students\n3.Search Student\n4.Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if(choice == 1) {
            s[n].input();
            n++;
        }

        else if(choice == 2) {
            for(int i=0;i<n;i++) {
                s[i].display();
            }
        }

        else if(choice == 3) {
            int searchID;
            cout << "Enter ID to search: ";
            cin >> searchID;

            for(int i=0;i<n;i++) {
                if(s[i].id == searchID) {
                    s[i].display();
                }
            }
        }

        else if(choice == 4) {
            break;
        }
    }
}
