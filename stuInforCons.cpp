                          /*input student information by constructor and calculate total student number using static variabe*/

#include <iostream>
using namespace std;
class student
{
private:
    string name;
    int id;
    float gpa;
    static int count;

public:
    student() {};
    student(string n, int i, float g)
    {
        name = n, id = i, gpa = g;
        count++;
    }
    void output()
    {
        cout << "Name\t:" << name << "\nID\t:" << id << "\nGPA\t:" << gpa << endl;
    }
    static void display();
};
int student::count;
void student::display(){
    cout<<"Total student: "<<count<<endl;
}
int main()
{
    int j, x;
    cout << "input a random numbner: ";
    cin >> x;
    student s[x]={student()};
    for (j = 0; j < x; j++)
    {
        string n;
        int i;
        float g;
        cout << "input student information for: " << j + 1 << endl;
        cin.ignore();
        cout << "input name: ";
        getline(cin, n);
        cout << "input id: ";
        cin >> i;
        cout << "input gpa: ";
        cin >> g;
        s[j]= student(n, i, g);
        cout << endl;
    }
    cout << "..........Display student information............" << endl;
    for (int j = 0; j < x; j++)
    {
        s[j].output();
        cout << endl;
    }
    student::display();
}