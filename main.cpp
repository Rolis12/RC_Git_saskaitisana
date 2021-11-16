#include <iostream>
#include <math.h>

using namespace std;
int sask(int r, int l);

int main()
{
    int a, b;
    cout << "Ievadiet divus skaitlus" << endl;
    cin >> a;
    cin >> b;


    cout << " Skaitlu " << a << " un " << b << " summa ir " << sask(a,b) << endl;
    return 0;
}
int sask(int f, int g)
{
    int h;

    h = f+g;

    return h;
}
