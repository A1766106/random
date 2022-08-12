#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

void print_class(std::string courses[4], std::string students[], int report_card[][4], int nstudents)
{
 cout << "Report Card ";
 for(int i=0; i<4; i++)
 {
    if(i!=3)
    {
    cout << courses[i] << " ";
    }
    else
    {
    cout << courses[3] << endl;
    }
 }
 for(int i=0; i<nstudents; i++)
 {
    cout << students[i] << " ";
    for(int j=0; j<4; j++)
    {
        if(j!=3)
        {
            cout << report_card[i][j]<< " ";
        }
        else
        {
            cout << report_card[i][3] << endl;
        }
    }
 }
}

int main()
{
    string courses[4] = {"Science", "Maths", "Computer Science", "English"};
    int nstudents = 0;
    cout << "How many students? ";
    cin >> nstudents;
    string students[nstudents];
    int report_card[nstudents][4];
    for(int i=0;i<nstudents; i++)
    {
        cout << "What a students name? ";
        cin >> students[i];
    }
    for(int i=0; i<nstudents; i++)
    {
        for(int j=0; j<4; j++)
        {
            cout << "What was " << students[i] << "'s grade for " << courses[j] << "? ";
            cin >> report_card[i][j];
        }
    }
    print_class(courses, students, report_card, nstudents);
}