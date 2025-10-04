#include <iostream>
using namespace std;

struct Student{
  int id;
  string name;
  string email;
};

int main() 
{
    Student student[5];
    
    for (int i=0;i<5;i++){
      cout << "Put ID - ";
      cin >> student[i].id; 
      cout << "Put Name - ";
      cin >> student[i].name; 
      cout << "Put Email - ";
      cin >> student[i].email;
      cout << endl;
    }
    
    for (int i=0;i<5;i++){
      cout << student[i].id << "ID : \n";
      cout << student[i].name << "NAME : \n";
      cout << student[i].email << "EMAIL : \n";
    }
    return 0;
}