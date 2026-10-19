#include<iostream>

using namespace std;
int main()
{
    ifstream fin("data.txt");
    char ch;
    if(fin)
    {
        while((ch=fin.get())!=-1)
        {
            cout.put(ch);
        }
    }
}