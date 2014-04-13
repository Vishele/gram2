#include <iostream>
#include <cctype>
#include <cstdio>

using namespace std;
/*
S - cC c
C - dC d

*/
char c;
void C();
//string s;
size_t j=0;
void gc()
{
    //c=s[j++];
    c=getchar();
    ++j;
}

void S()
{
    //cout << "S " << c << endl;
    if (!isalpha(c)) throw c;
    gc();
    C();
}
void C()
{
    //cout << "C " << c << endl;
    if ((!isspace(c))&&(c!='\0'))
    {
        if (!isalnum(c)) throw c;
        gc();
        C();
    }
}

int main()
{
    try
    {
        //cin >> s;
        gc();
        S();
        if ((!isspace(c))&&(c!='\0'))
            throw c;
        cout << "Success" << endl;
        cout << "Length = " << j-1 << endl;
        return 0;
    }
    catch (char c)
    {
        cout << "Incorrect input" << endl;
        return 1;
    }
}
