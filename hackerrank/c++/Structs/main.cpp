#include<iostream>
#include<string>

int main() {
    struct Student {
        int age = {};
        std::string first_name;
        std::string last_name;
        int standard = {};
    };

    Student student;

    std::cin >> student.age >> student.first_name >> student.last_name >> student.standard;


    std::cout << student.age << " " << student.first_name << " " << student.last_name << " " << student.standard;
}
