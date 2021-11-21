#include <iostream>
#include <string>
using namespace std; 

class Student {
private:
    string name, faculty;
    int age, course;
    string lessons[2] = {string("lesson1"), string("lesson2")};

public:
    Student() {
        name = "Anonymous";
        faculty = "Not selected";
        age = 0;
        course = 0;
    }
    Student(string setName, string setFaculty, int setAge, int setCourse) {
        name = setName;
        faculty = setFaculty;
        age = setAge;
        course = setCourse;
    }

    // Деструктор - антипод конструктору - вызывается при удалении объекта из памяти.
    // В Java этого нет т.к. там есть автоматический сборщик мусора.

    ~Student() {
        delete lessons;
    }

    string getName() {
        return name;
    }
    string getFaculty() {
        return faculty;
    }
    int getAge() {
        return age;
    }
    int getCourse() {
        return course;
    }
    void showInfo() {
        cout << "Имя: " << getName() << endl;
        cout << "Факультет: " << getFaculty() << endl;
        cout << "Возраст: " << getAge() << endl;
        cout << "Курс: " << getCourse() << endl;

        cout << "Элективы: ";
        int size = sizeof(lessons) / sizeof(string);
        for (int i = 0; i < size; i++)
        {
            cout << lessons[i] << "\t";
        }
    } 
};

int main()
{
    setlocale(LC_ALL, "Rus");
    Student *student = new Student("Salavat", "МГУ ВМК", 22, 1);
    
    student->showInfo();
     
    if (student)
    {
        delete student;
    }
    return 0;
}