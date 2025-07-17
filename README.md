# 👨‍💼 Employee Management System (C++ OOP)

This is a console-based **Employee Management System** built in **C++**, designed to demonstrate real-world use of **Object-Oriented Programming** concepts like **abstraction**, **inheritance**, **polymorphism**, and **dynamic data handling** using `vector`.

---

## 🚀 Features

- ✅ Add Manager or Engineer with name and role
- ✅ Display individual employee details
- ✅ Calculate salary based on role multiplier
- ✅ Uses abstract base class and virtual functions
- ✅ Dynamically stores employees using `std::vector`

---

## 👨‍🏫 OOP Concepts Used

| Concept          | Implementation                              |
|------------------|----------------------------------------------|
| Abstraction      | `Employee` class is an abstract base class   |
| Inheritance      | `Manager` and `Engineer` inherit from `Employee` |
| Polymorphism     | Virtual functions for `addInfo`, `displayInfo`, `calculateSalary` |
| Encapsulation    | Private members with public getters/setters |
| Dynamic Storage  | `vector<Manager>` and `vector<Engineer>`     |

---

## 📋 Menu Options

```text
--- Employee Management System ---
1. Add Employee
2. Display Employee Info
3. Calculate Salary
4. Exit
Each option leads to sub-menus for selecting employee type (Manager or Engineer).

🧪 Sample Output
markdown
Copy
Edit
--- Employee Management System ---
1. Add Employee
2. Display Employee Info
3. Calculate Salary
4. Exit
Choose an option: 1
Choose Employee Type:
1. Manager
2. Engineer
> 1
Enter name: Alice Smith
Enter role: HR_Manager
Later:

markdown
Copy
Edit
--- Employee Management System ---
3. Calculate Salary
Choose Employee Type to Calculate Salary:
1. Manager
2. Engineer
> 1
Salary for Manager Alice Smith: 150000
💰 Salary Calculation
Employee Type	Base Salary	Multiplier	Total Salary
Manager	50,000	3	150,000 per Manager
Engineer	40,000	2	80,000 per Engineer

⚙️ How to Compile & Run
bash
Copy
Edit
g++ -o employee_management employee_management.cpp
./employee_management
📚 Educational Value
Perfect for:

Practicing abstract classes and polymorphism

Learning role-based logic in real-world systems

Understanding how to organize classes using OOP design

✅ Suggested Improvements
Add support for file storage

Allow searching/updating/deleting employees

Add more roles like Intern, CEO, etc.

Use a base pointer vector for polymorphic behavior

📝 License
This project is free to use for educational or personal learning purposes.
