#include<iostream>
#include<map>
#include<vector>
#include<numeric>
#include<string>
using namespace std;

int main()
{
    map<string, vector<int> > studentMarks;

    studentMarks["Rahul"] = {78, 85, 90};
    studentMarks["Neha"] = {88, 79, 84};
    studentMarks["Amit"] = {92, 89, 95};

    cout << "Student Performance:\n";
    map<string, double> studentAverages;

    for (map<string, vector<int> >::const_iterator record = studentMarks.begin(); record != studentMarks.end(); ++record)
    {
        const string& studentName = record->first;
        const vector<int>& scores = record->second;
        double averageScore = accumulate(scores.begin(), scores.end(), 0.0) / scores.size();
        studentAverages[studentName] = averageScore;

        cout << "Name: " << studentName << ", Scores: ";
        for (vector<int>::const_iterator it = scores.begin(); it != scores.end(); ++it)
        {
            cout << *it << " ";
        }
        cout << ", Average: " << averageScore << endl;
    }

    string bestStudent;
    double highestAverage = -1.0;

    for (map<string, double>::const_iterator data = studentAverages.begin(); data != studentAverages.end(); ++data)
    {
        if (data->second > highestAverage)
        {
            highestAverage = data->second;
            bestStudent = data->first;
        }
    }

    cout << "\nTop Scorer: " << bestStudent << " with average " << highestAverage << endl;
}

