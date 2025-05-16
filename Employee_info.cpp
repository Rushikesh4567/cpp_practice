#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() 
{
    ofstream file("employees.txt");
    file << "101,Alice,HR\n";
    file << "102,Bob,Finance\n";
    file << "103,Charlie,IT\n";
    file << "104,Dana,Marketing\n";
    file.close();

    string searchId;
    cout << "Enter Employee ID to search: ";
    cin >> searchId;

    ifstream inFile("employees.txt");
    string line;
    bool found = false;

    while (getline(inFile, line)) 
	{
        if (line.substr(0, searchId.length()) == searchId) 
		{
            cout << "Employee Found: " << line << endl;
            found = true;
            break;
        }
    }

    if (!found) 
	{
        cout << "Employee with ID " << searchId << " not found." << endl;
    }

    inFile.close();
    return 0;
}

