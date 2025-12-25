#include<iostream>
using namespace std;

class Student{
private:
     int roll;
     string name;

public:
     void input(){
       cout << "Enter roll number : ";
       cin >> roll;
       cout << "Enter name: ";
       cin >> name;
     }
     void display(){
        cout << "Roll: " << roll << endl;
        cout << "Name: " << name << endl;
     }
};

int main() {
  Student s;
  s.input();
  s.display();
  return 0;
}
