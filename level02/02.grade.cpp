#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int score;
    cin >> score;

    if ( score < 0 ) return -1;
    else if ( score < 60 ) cout << "F";
    else if ( score < 70 ) cout << "D";
    else if ( score < 80 ) cout << "C";
    else if ( score < 90 ) cout << "B";
    else if ( score < 101 ) cout << "A";
    else return -1;

    return 0;
}
