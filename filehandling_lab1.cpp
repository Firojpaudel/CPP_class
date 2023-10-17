#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
    ofstream file;
    file.open("Notes.txt");
    for (int i = 1; i <= 100; i++)
    {
            file << i << endl;
    }
    file.close();
    return 0;
}
