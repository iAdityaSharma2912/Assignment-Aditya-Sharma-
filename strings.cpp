#include <iostream>
#include <string>
using namespace std;

int main() {
    string a,b;
    cin >> a >> b ;
    int lena = a.size();
    int lenb = b.size();
    cout << lena <<" "<<lenb << endl;
    cout << a << b << endl;
    char c1 = a[0];
    char c2 = b[0];
    a[0] = c2;
    b[0] = c1;
    cout << a <<" "<<b;
    return 0;
}
