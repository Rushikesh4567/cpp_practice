#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() 
{
    string sourceFile = "source.txt";
    string destinationFile = "destination.txt";

    ifstream src("source.txt");
    ofstream dest("destination.txt");

    if (!src) 
	{
        cerr << "Error: Could not open source file '" << sourceFile << "'." << endl;
        return 1;
    }

    if (!dest) 
	{
        cerr << "Error: Could not open destination file '" << destinationFile << "'." <<endl;
        return 1;
    }

    string line;
    while (getline(src, line)) 
	{
        dest << line << endl;
    }

    cout<<"File copied successfully from '"<< sourceFile <<"' to '"<<destinationFile<<"'." <<endl;

    src.close();
    dest.close();

    return 0;
}

