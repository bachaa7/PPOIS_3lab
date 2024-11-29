#include "pch.h"
#include </Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_3ëàáà/ÏÏÎÈÑ_3ëàáà/Employee.h>


class TestEmployee : public Employee {
public:
    TestEmployee(int id, const std::string& name, double salary, const std::string& speciality)
        : Employee(id, name, salary, speciality) {}

    void displayRole() const override {
        std::cout << "Employee role: " << speciality << std::endl;
    }
};

TEST(EmployeeTest, Accessors) {
    TestEmployee employee(1, "Jane Doe", 5000.0, "Software Developer");

    EXPECT_EQ(employee.getId(), 1); 
    EXPECT_EQ(employee.getName(), "Jane Doe");  
    EXPECT_EQ(employee.getSalary(), 5000.0);  
    EXPECT_EQ(employee.getSpeciality(), "Software Developer");  
}

TEST(EmployeeTest, DisplayRole) {
    testing::internal::CaptureStdout();

    TestEmployee employee(1, "Jane Doe", 5000.0, "Software Developer");

    employee.displayRole();

    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_TRUE(output.find("Employee role: Software Developer") != std::string::npos);
}
