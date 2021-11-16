#include <iostream>


using namespace std;
int sask(int r, int l, int e );

int main()
{
    int a, b, c;
    cout << "Ievadiet divus skaitlus" << endl;
    cin >> a;
    cin >> b;
    cin >> c;


    cout << " Skaitlu " << a << " , " << b << " un " << c <<  " summa ir " << sask(a,b,c) << endl;
    return 0;
}
int sask(int f, int g, int m)
{
    int h;

    h = f+g+m;

    return h;
}
