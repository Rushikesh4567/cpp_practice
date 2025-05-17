#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
   
    ofstream outFile("example.txt");

    if (!outFile) 
	{
        cout << "Error creating the file!" << endl;
        return 1;
    }

    
    outFile << "Hello, world!" << endl;
    outFile << "This is a text file created using C++." << endl;
    outFile << "Each line is written using the << operator." << endl;

	
    
    outFile.close();

    cout << "File 'example.txt' has been created and written to successfully." << endl;
    
    outFile.open("example.txt",ios::app);
    outFile<<"Hello everyone, I am learning file handling in cpp."<<endl;
    
    
    outFile.close();
    
    cout << "The new data is appended in the file 'example.txt' successfully." << endl;
    return 0;
}

