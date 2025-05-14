#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() 
{
    string filename ="example.txt";
    fstream file;

    file.open("example.txt", ios::out); 
    if (!file) 
	{
        cout<<"Error: Could not create the file." << endl;
        return 1;
    }

    file<<"Hello world!\n";
    file.close();

    file.open("example.txt",ios::in);  
    if (!file) 
	{
        cout<<"Error: Could not open the file for reading."<< endl;
        return 1;
    }

    string line;
    while (getline(file, line)) 
	{
        cout <<line<<endl;
    }

    file.close();
    return 0;
}

