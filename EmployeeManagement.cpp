//Employee Management system
//add vector/list maybe threads
//Ability to read/write to file
//Add database
//Data visualization


#include <iostream>
#include <string.h>
#include <list>



class Employee {

    private:
        std::string name;
        int salary;
        int pto;

    public:
        Employee() {

            name = " ";
            salary = 0;
            pto = 0;
        }


        Employee(std::string newName, int newSalary, int newPto) {

            name = newName;
            salary = newSalary;
            pto = newPto;
        }

        void print() {
            std::cout << "Name: " << name << '\n' << "Salary: " << salary << '\n' << "Days of PTO: " << pto << "\n\n";
        }

        std::string getName() {
            return name;
        }
        
        int getSalary() {
            return salary;
        }

        int getPTO() {
            return pto;
        }

        void addEmployee(std::list<Employee>& employeeList) {
            std::cout << "\nName of Employee: \n";
            std::cin >> name;
            std::cout << "\nSalary: \n";
            std::cin >> salary;
            std::cout << "\nAmount PTO: \n";
            std::cin >> pto;
            employeeList.push_back(Employee(name, salary, pto));
        }

        void deleteEmployee(std::list<Employee>& employeeList, const std::string inputName) {
            for (std::list<Employee>::iterator it = employeeList.begin(); it != employeeList.end(); ++it) { //can use auto before it if c++ 11 or newer
                if (it->getName() == inputName) {
                    it = employeeList.erase(it);
                }
                it->print();
            }
        }

        void printList(std::list<Employee>& employeeList) {
            for (std::list<Employee>::iterator it = employeeList.begin(); it != employeeList.end(); ++it) { //can use auto before it if c++ 11 or newer
                it->print();
                std::cout << "In Employee printList\n\n";
            }
        }
    
};

class Sales : public Employee {

    private:
        std::string name;
        int salary;
        int pto;
        std::string department;

    public:
        Sales() {

        }

        Sales(std::string newName, int newSalary, int newPto, std::string newDepartment) {

                name = newName;
                salary = newSalary;
                pto = newPto;
                department = newDepartment;
            }

        void addEmployee(std::list<Sales>& employeeList) {
            std::cout << "\nName of Employee: \n";
            std::cin >> name;
            std::cout << "\nSalary: \n";
            std::cin >> salary;
            std::cout << "\nAmount PTO: \n";
            std::cin >> pto;
            std::cout << "\nSales Position: ";
            std::cin >> department;
            employeeList.push_back(Sales(name, salary, pto, department));
        }

        void deleteEmployee(std::list<Sales>& employeeList, const std::string inputName) {
            for (std::list<Sales>::iterator it = employeeList.begin(); it != employeeList.end(); ++it) { //can use auto before it if c++ 11 or newer
                if (it->getName() == inputName) {
                    it = employeeList.erase(it);
                }
            }
        }

        std::string getName() {
            return name;
        }

        void jobTitle() {
            std::cout << "\n********** Sales Team **********\n\n";
        }

        void print() {
            std::cout << "Name: " << name << '\n' << "Salary: " << salary << '\n' 
            << "Days of PTO: " << pto << "\n" << "Job Title: " << department << "\n\n";
        }

        void printList(std::list<Sales>& employeeList) {
            for (std::list<Sales>::iterator it = employeeList.begin(); it != employeeList.end(); ++it) { //can use auto before it if c++ 11 or newer
                it->print();
            }
        }
    
};

class HR : public Employee {

    private:
        std::string name;
        int salary;
        int pto;
        std::string department;

    public:
        HR() {

        }

        HR(std::string newName, int newSalary, int newPto, std::string newDepartment) {

                name = newName;
                salary = newSalary;
                pto = newPto;
                department = newDepartment;
        }

        

        void addEmployee(std::list<HR>& employeeList) {
            std::cout << "\nName of Employee: \n";
            std::cin >> name;
            std::cout << "\nSalary: \n";
            std::cin >> salary;
            std::cout << "\nAmount PTO: \n";
            std::cin >> pto;
            std::cout << "\nHR Position: ";
            std::cin >> department;
            employeeList.push_back(HR(name, salary, pto, department));
        }

        void deleteEmployee(std::list<HR>& employeeList, const std::string& inputName) {
            for (std::list<HR>::iterator it = employeeList.begin(); it != employeeList.end(); it++) { //can use auto before it if c++ 11 or newer
                if (it->getName() == inputName) {
                    it = employeeList.erase(it);
                }
            }
        }
        std::string getName() {
        return name;
    }

        void jobTitle() {
            std::cout << "\n********** Human Resources Team **********\n\n";
        }

        void print() {
            std::cout << "Name: " << name << '\n' << "Salary: " << salary << '\n' 
            << "Days of PTO: " << pto << "\n" << "Job Title: " << department << "\n\n";
        }

        void printList(std::list<HR>& employeeList) {
            for (std::list<HR>::iterator it = employeeList.begin(); it != employeeList.end(); ++it) { //can use auto before it if c++ 11 or newer
                it->print();
            }
        }
};

class Legal : public Employee {

     private:
        std::string name;
        int salary;
        int pto;
        std::string department;

    public:
        Legal() {

        }

        Legal(std::string newName, int newSalary, int newPto, std::string newDepartment) {

                name = newName;
                salary = newSalary;
                pto = newPto;
                department = newDepartment;
            }

        void addEmployee(std::list<Legal>& employeeList) {
            std::cout << "\nName of Employee: \n";
            std::cin >> name;
            std::cout << "\nSalary: \n";
            std::cin >> salary;
            std::cout << "\nAmount PTO: \n";
            std::cin >> pto;
            std::cout << "\n Legal Position: ";
            std::cin >> department;
            employeeList.push_back(Legal(name, salary, pto, department));
        }

        void deleteEmployee(std::list<Legal>& employeeList, const std::string& inputName) {
            for (std::list<Legal>::iterator it = employeeList.begin(); it != employeeList.end(); it++) { //can use auto before it if c++ 11 or newer
                if (it->getName() == inputName) {
                    it = employeeList.erase(it);
                }
            }
        }

        std::string getName() {
        return name;
        }

        void jobTitle() {
            std::cout << "\n********** Legal Team **********\n\n";
        }

        void print() {
            std::cout << "Name: " << name << '\n' << "Salary: " << salary << '\n' 
            << "Days of PTO: " << pto << "\n" << "Job Title: " << department << "\n\n";
        }

        void printList(std::list<Legal>& employeeList) {
            for (std::list<Legal>::iterator it = employeeList.begin(); it != employeeList.end(); ++it) { //can use auto before it if c++ 11 or newer
                it->print();
            }
        }
};



int main() {

    std::list<Sales> salesList;
    std::list<HR> hrList;
    std::list<Legal> legalList;
    Sales salesEmployee;
    HR hrEmployee;
    Legal legalEmployee;


    int choice;
    std::string person;
    int salary;
    int daysOff;
    int department;

    do
    {
        std::cout << "Main Menu\n\n" 
                << "Choices: \n\n"
                << "1. Quit\n"
                << "2. Add Employee\n"
                << "3. Remove Employee\n"
                << "4. Print Employee List\n\n"
                << "Type here (Integers only): ";

        std::cin >> choice;

        while (choice < 1 || choice > 4) {
            std::cout << "Incorrect input. Try again: ";
            std::cin >> choice;
        }

        if (choice == 2) {
            std::cout << "Which job title?\n\n"
                        << "1. Sales\n"
                        << "2. HR\n"
                        << "3. Legal\n\n"
                        << "Enter choice (Integers only): ";

            std::cin >> department;

            if (department == 1) {
                salesEmployee.addEmployee(salesList);
            }
            else if (department == 2) {
                hrEmployee.addEmployee(hrList);
            }
            else if (department == 3) {
                legalEmployee.addEmployee(legalList);
            }
        }
        else if (choice == 3) {
            std::cout << "\nName of Employee: ";
            std::cin >> person;

            salesEmployee.deleteEmployee(salesList, person);
            hrEmployee.deleteEmployee(hrList, person);
            legalEmployee.deleteEmployee(legalList, person);
        }
        else if (choice == 4) {
            salesEmployee.jobTitle();
            salesEmployee.printList(salesList);
            hrEmployee.jobTitle();
            hrEmployee.printList(hrList);
            legalEmployee.jobTitle();
            legalEmployee.printList(legalList);
        }
        
        
    } while (choice != 1);
}
