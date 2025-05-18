#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Student 
{
private:
    string name;
    int rollNumber;
    char grade;

public:
    
    void input() 
	{
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter roll number: ";
        cin >> rollNumber;
        cout << "Enter grade: ";
        cin >> grade;
    }

    void writeToFile(const string& filename) 
	{
        ofstream outFile("student.txt");
        if (!outFile) 
		{
            cerr << "Error opening file for writing.\n";
            return;
        }
        outFile<< name << "\n" << rollNumber << "\n" << grade << "\n";
        outFile.close();
    }

    void readFromFile(const string& filename) 
	{
        ifstream inFile("student.txt");
        if (!inFile) 
		{
            cerr << "Error opening file for reading.\n";
            return;
        }
        getline(inFile, name);
        inFile >> rollNumber;
        inFile >> grade;
        inFile.close();
    }

    void display() 
	{
        cout << "\nStudent Information:\n";
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Grade: " << grade << endl;
    }
};


int main() 
{
    Student s;
    s.input();                       
    s.writeToFile("student.txt");    

    cout << "\nData written to file.\n";

    Student s2;
    s2.readFromFile("student.txt");  
    s2.display();                    

    return 0;
}

