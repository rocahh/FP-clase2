#include mainstream
using namespace std;
int main()
{
    int n;
    cout << "Ingrese un valor entero n:";
    cin >> n;
    for (int i = 2; i<=n; i = i + 2)
    {
        cout << i << "\n"
    }
    return 0;
}