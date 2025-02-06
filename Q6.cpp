#include <iostream>
#include <vector>
#include <string>

struct Subject {
    std::string name;
};

struct Student {
    int id;
    Subject subjects[5];
};

int main() {
    int n;
    std::cout << "Enter number of students: ";
    std::cin >> n;
    
    std::vector<Student> students(n);
    
    for (int i = 0; i < n; i++) {
        std::cout << "Enter ID for student " << i + 1 << ": ";
        std::cin >> students[i].id;
        
        for (int j = 0; j < 5; j++) {
            std::cout << "Enter subject " << j + 1 << ": ";
            std::cin >> students[i].subjects[j].name;
        }
    }
    
    std::cout << "\nStudent Data:\n";
    for (const auto& student : students) {
        std::cout << "ID: " << student.id << "\nSubjects: ";
        for (const auto& subject : student.subjects) {
            std::cout << subject.name << " ";
        }
        std::cout << "\n";
    }
    
    return 0;
}

