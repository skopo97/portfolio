#include <iostream>
#include <string>
#include <string_view>

class Employee
{
public:
    int m_id{};
    std::string m_name{};

    void likes(Employee &employee)
    {
        std::cout << m_name << " likes " << employee.m_name << '\n';
    }

    void likes(std::string_view prefix)
    {
        std::cout << m_name << " likes " << prefix << '\n';
    }
};

int main()
{
    Employee joe{1, "Joe"};
    Employee frank{2, "Frank"};
    joe.likes(frank);
    joe.likes("Programming");
}