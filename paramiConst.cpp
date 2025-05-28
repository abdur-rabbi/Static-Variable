#include <iostream>
using namespace std;
class student
{
    string name;
    int id;
    float grade;
    static int count;

public:
    student() {}
    student(string n, int d, float g)
    {
        name = n, id = d, grade = g;
    }

    void output()
    {
        cout << "NAME\t:" << name << "\nID\t:" << id << "\nGRADE\t:" << grade << endl;
    }
    static void display();
};
int student::count;
void student::display()
{
    cout << "Total student: " << count << endl;
}
int main()
{
    int x, i;
    cout << "Input random number: ";
    cin >> x;
    student s[x] = {student()};
    for (i = 0; i < x; i++)
    {
        cout << "Input student information: " << i + 1 << endl;
        string n;
        int d;
        float g;
        cin.ignore();
        cout << "input student name: ";
        getline(cin, n);
        cout << "input student id: ";
        cin >> d;
        cout << "input student grade: ";
        cin >> g;
        s[i] = student(n, d, g);
        cout << endl;
    }
    cout << endl;
    cout << "..................student details........................" << endl;
    for (i = 0; i < x; i++)
    {
        s[i].output();
        cout << endl;
    }
}