#include <windows.h>
#include <iostream>
#pragma comment(lib, "winmm.lib")
int main()
{
    using namespace std;
    const int n = 5;
    int a[n];
    for (int i = 0; i < n; i++)
           cin >> a[i];
    int c = 0;
    double s = 0;
    bool f = true;
    for (int i = 0; i <= n / 2; i++)
       if (a[i] != a[n - i - 1])        {
           f = false;
            break;
       }
    if (f) {
      
        cout << "Yes";
        PlaySound(TEXT("C:\\temp\\yes.wav"), NULL, SND_FILENAME);
    }
    else {
       
        cout << "No";
        PlaySound(TEXT("C:\\temp\\no.wav"), NULL, SND_FILENAME);
    }
}

