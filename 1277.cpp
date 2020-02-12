#include <iostream>
#include <vector>
#include <string>
using namespace std;

void test();

int main() {
    int testsNum;
    cin >> testsNum;
    for (int i = 0; i < testsNum; ++i) {
        test();
    }
    return 0;
}

typedef struct student Student;
struct student {
    std::string name;
    std::string classes;
};

bool isStudentAbsent(Student student) {
    int classesNumber = 0,
        absencesNumber = 0,
        presencesNumber = 0;
    for (size_t i = 0; i < student.classes.length(); ++i) {
        switch (student.classes[i]) {
            case 'P': {
                presencesNumber ++;
                classesNumber ++;
            } break;
            case 'A': {
                absencesNumber ++;
                classesNumber ++;
            } break;
            default: {
                // do nothing
            } break;
        }
    }
    
    const float MIN_FREQUENCE_RATE = 0.75;
    if (presencesNumber >= classesNumber*MIN_FREQUENCE_RATE) {
        return false;
    }
    else {
        return true;
    }
}

void printAbsentStudents(vector<Student> students) {
    std::string messageToPrint = "";
    for (auto student : students) {
        if (isStudentAbsent(student)) {
            messageToPrint += student.name + " ";
        }
    }
    messageToPrint = messageToPrint.substr(0, messageToPrint.length()-1);
    cout << messageToPrint << endl;
}

void test() {
    int studentsNum;
    vector<Student> students;
    cin >> studentsNum;
    for (int i = 0; i < studentsNum; ++i) {
        students.push_back(Student());
        cin >> students[i].name;
    }
    for (int i = 0; i < studentsNum; ++i) {
        cin >> students[i].classes;
    }
    printAbsentStudents(students);
}