using System;
using System.Collections.Generic;

class Date
{
    public int Day { get; set; }
    public int Month { get; set; }
    public int Year { get; set; }
}

class Employee
{
    public string ID { get; set; }
    public string Name { get; set; }
    public Date StartDate { get; set; }
    public bool Gender { get; set; }
    public double Salary { get; set; }
}

class List
{
    private Employee[] employees;
    private int count;

    public List(int size)
    {
        employees = new Employee[size];
        count = 0;
    }

    public void Display()
    {
        Console.WriteLine("ID\tName\t\tStart Date\tGender\tSalary");
        for (int i = 0; i < count; i++)
        {
            Console.WriteLine("{0}\t{1}\t{2}/{3}/{4}\t{5}\t{6}", employees[i].ID, employees[i].Name, employees[i].StartDate.Day, employees[i].StartDate.Month, employees[i].StartDate.Year, employees[i].Gender ? "Female" : "Male", employees[i].Salary);
        }
    }

    public void Add(Employee employee)
    {
        if (count < employees.Length)
        {
            employees[count] = employee;
            count++;
        }
        else
        {
            Console.WriteLine("List is full.");
        }
    }

    public void Insert(int index, Employee employee)
    {
        if (index >= 0 && index < count && count < employees.Length)
        {
            for (int i = count - 1; i >= index; i--)
            {
                employees[i + 1] = employees[i];
            }
            employees[index] = employee;
            count++;
        }
        else
        {
            Console.WriteLine("Invalid index or List is full.");
        }
    }

    public void Update(int index, Employee employee)
    {
        if (index >= 0 && index < count)
        {
            employees[index] = employee;
        }
        else
        {
            Console.WriteLine("Invalid index.");
        }
    }

    public void Remove(int index)
    {
        if (index >= 0 && index < count)
        {
            for (int i = index; i < count - 1; i++)
            {
                employees[i] = employees[i + 1];
            }
            count--;
        }
        else
        {
            Console.WriteLine("Invalid index.");
        }
    }

    public int BinarySearch(string ID)
    {
        int left = 0;
        int right = count - 1;
        while (left <= right)
        {
            int mid = (left + right) / 2;
            if (employees[mid].ID == ID)
            {
                return mid;
            }
            else if (employees[mid].ID.CompareTo(ID) < 0)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
        return -1;
    }

    public void Sort(bool isAscending, Func<Employee, string> keySelector)
    {
        for (int i = 0; i < count - 1; i++)
        {
            for (int j = i + 1; j < count; j++)
            {
                if (isAscending)
                {
                    if (keySelector(employees[i]).CompareTo(keySelector(employees[j])) > 0)
                    {
                        Employee temp = employees[i];
                        employees[i] = employees[j];
                        employees[j] = temp;
                    }
                }
                else
                {
                    if (keySelector(employees[i]).CompareTo(keySelector(employees[j])) < 0)
                    {
                        Employee temp = employees[i];
                        employees[i] = employees[j];
                        employees[j] = temp;
                    }
                }
            }
        }
    }
}
class Program
{
    static void Main(string[] args)
    {
        List employeeList = new List(5);

        Employee employee1 = new Employee
        {
            ID = "E001",
            Name = "Nguyễn Văn A",
            StartDate = new Date { Day = 1, Month = 1, Year = 2020 },
            Gender = false,
            Salary = 5000
        };

        Employee employee2 = new Employee
        {
            ID = "E002",
            Name = "Nguyễn Văn B",
            StartDate = new Date { Day = 2, Month = 2, Year = 2020 },
            Gender = true,
            Salary = 6000
        };

        Employee employee3 = new Employee
        {
            ID = "E003",
            Name = "Nguyễn Văn C",
            StartDate = new Date { Day = 3, Month = 3, Year = 2020 },
            Gender = false,
            Salary = 7000
        };

        employeeList.Add(employee1);
        employeeList.Add(employee2);
        employeeList.Add(employee3);

        Console.WriteLine("Employee List:");
        employeeList.Display();

        Employee employee4 = new Employee
        {
            ID = "E004",
            Name = "Nguyễn Văn D",
            StartDate = new Date { Day = 4, Month = 4, Year = 2020 },
            Gender = true,
            Salary = 8000
        };

        employeeList.Insert(1, employee4);

        Console.WriteLine("\nEmployee List after inserting a new employee:");
        employeeList.Display();

        Employee employee5 = new Employee
        {
            ID = "E005",
            Name = "Nguyễn Văn E",
            StartDate = new Date { Day = 5, Month = 5, Year = 2020 },
            Gender = false,
            Salary = 9000
        };

        employeeList.Update(2, employee5);

        Console.WriteLine("\nEmployee List after updating an employee:");
        employeeList.Display();

        employeeList.Remove(2);

        Console.WriteLine("\nEmployee List after removing an employee:");
        employeeList.Display();

        Console.ReadLine();
    }
}
