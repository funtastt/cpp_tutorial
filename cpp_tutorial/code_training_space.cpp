#include <iostream>
#include <string>
using namespace std; 

class Student {
private:
    string lessons[2] = {string("lesson1"), string("lesson2")};

public:
    Student() {
        
    }

    ~Student() {
        delete lessons;
    }

    string* getLessons() {
        return lessons;
    }
};

ostream& operator<<(std::ostream& strm, Student student) {
    return strm << "Уроки: ";
    string* lessons = student.getLessons();
    
    for (int i = 0; i < 2; i++)
    {
        cout << lessons[i] << endl;
    }
}

int main()
{
    setlocale(LC_ALL, "Rus");
    Student *student = new Student();
    
    cout << student << endl;

    return 0;
}