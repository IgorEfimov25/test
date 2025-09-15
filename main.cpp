#include <iostream>

using namespace std;

int power(int k, int n)
{
    int chi = k;
    for (int c = 1; c<n; c++)
        {
            chi = chi * k;
        }
    return(chi);
}

int main()
{
    int Tabl[5] = {14, 25, 343, 434, 546};
    int k = 7;
    int n = 3;
    bool Est = false;
    for (int i = 0; i<5; i++)
        {
            if (Tabl[i]%(power(k,n))==0)
                {
                    Est = true;
                   // cout << Tabl[i] << endl;
                    break;
                }
        }
    return 0;
}
