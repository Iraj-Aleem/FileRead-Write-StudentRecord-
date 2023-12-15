#include <iostream>
using namespace std;
#include "students.h"

int main(int argc, char** argv) {
    cout << "\t\t\t  **************************************************************************************\n ";
    cout << "\t\t\t  **************************************************************************************\n ";
    cout << "\t\t\t  **************************************************************************************\n ";
    cout << "\t\t\t  **************************************************************************************\n ";
    cout << "\t\t\t  **      |       |   |   STUDENT REPORT PROGRAM BY 019,014 2023   |   |      |       **\n ";
    cout << "\t\t\t  **                                                                                  **\n ";
    cout << "\t\t\t  **      To Introduce New Student             ---->          choose  option '1'      **\n ";
    cout << "\t\t\t  **      To Introduce New Mark                ---->          choose  option '2'      **\n ";
    cout << "\t\t\t  **      To Remove Student                    ---->          choose  option '3'      **\n ";
    cout << "\t\t\t  **      To Print a Single Report             ---->          choose  option '4'      **\n ";
    cout << "\t\t\t  **      To Print Report of all Students      ---->          choose  option '5'      **\n ";
    cout << "\t\t\t  **      To Save to a FILE                    ---->          choose  option '6'      **\n ";
    cout << "\t\t\t  **      To Retrieve from a FILE              ---->          choose  option '7'      **\n ";
    cout << "\t\t\t  **      To EXIT                              ---->          choose  option '8'      **\n ";
    cout << "\t\t\t  **                                                                                  **\n ";
    cout << "\t\t\t  **************************************************************************************\n ";
    cout << "\t\t\t  **************************************************************************************\n ";
    cout << "\t\t\t  **************************************************************************************\n ";
    cout << "\t\t\t  **************************************************************************************\n ";

    students s;
    int ex = 0;
    int i, subj_no;
    int option;
    cin >> option;
    cout << endl;
    char name[20], studentregNumber[100];
    int max = 10;
    float marks[max];
    int mark;
    struct Student *root = NULL;

    switch (option) {

        case 1:
            cout << "Enter Student Name: ";
            cin >> name;
            cout << "Enter Student Number: ";
            cin >> studentregNumber;
            for (int i = 0; i < max; i++) {
                marks[i] = 0;
            }
            s.createStudent(name, studentregNumber, marks);
            break;

        case 2:
            cout << "Enter Student Name: ";
            cin >> name;
            cout << "Enter Subject Number: ";
            cin >> subj_no;
            cout << "Enter the Marks: ";
            cin >> mark;
            s.addingMark(root, name, subj_no, mark);
            break;

        case 3:
            cout << "Enter name to delete: ";
            cin >> name;
            root = s.DeleteStudentRecord(root, name);
            s.balanceBinary(root);
            break;

        case 4:
            cout << "Enter name to print: ";
            cin >> name;
            cout << "Name\tStudent Registration Number\tStudent Marks";
            s.PrintStudent(root, name);
            break;

        case 5:
            s.studentsReport(root);
            break;

        case 6:
            s.writeFile(root);
            break;

        case 7:
            s.readFile();
            break;

        case 8:
            ex = 1;
            break;

        default:
            cout << "\n\nEnter Only One of the Option below" << endl;
            ex = 0;
    }

    return 0;
}

