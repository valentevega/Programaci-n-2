struct Employee
{
    short id;
    int age;
    double wage;
};

struct Company
{
    Employee CEO;
    int numberOfEmployees;
};

Company myCompany{{1,42,60000.0},5};