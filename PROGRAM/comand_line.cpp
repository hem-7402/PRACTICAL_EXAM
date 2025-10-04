#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    cout << "number of argument : " << argc << endl;
    for (int i = 0; i < argc; i++)
    {
        cout << "argument : " << argv[i] << endl;
    }
    return 0;
}

// .\comand_line  hello bhavin hariyani