#include <iostream>

using namespace std;

int main()
{
    // pirmo

    int A[8];

    // antro
    int B[8];

    cout << "Iveskite A koordinates X ir Y" << endl;
    cin >> A[0] >> A[1];

    cout << "Iveskite B koordinates X ir Y" << endl;
    cin >> A[2] >> A[3];

    cout << "Iveskite C koordinates X ir Y" << endl;
    cin >> A[4] >> A[5];

    cout << "Iveskite D koordinates X ir Y" << endl;
    cin >> A[6] >> A[7];

    cout << "Iveskite E koordinates X ir Y" << endl;
    cin >> B[0] >> B[1];

    cout << "Iveskite F koordinates X ir Y" << endl;
    cin >> B[2] >> B[3];

    cout << "Iveskite G koordinates X ir Y" << endl;
    cin >> B[4] >> B[5];

    cout << "Iveskite H koordinates X ir Y" << endl;
    cin >> B[6] >> B[7];


    int minpirmoX = A[0];
    int maxpirmoX = A[0];
    int minantroX = B[0];
    int maxantroX = B[0];

    int minpirmoY = A[0];
    int maxpirmoY = A[0];
    int minantroY = B[0];
    int maxantroY = B[0];

    for(int i = 0; i < 8; i+=2)
    {
        if(A[i] < minpirmoX)
        {
            minpirmoX = A[i];
        }
        if(A[i] > maxpirmoX)
        {
            maxpirmoX = A[i];
        }
        if(B[i] < minantroX)
        {
            minantroX = B[i];
        }
        if(B[i] > maxantroX)
        {
            maxantroX = B[i];
        }
    }
    for(int i = 1; i < 8; i+=2)
    {
        if(A[i] < minpirmoY)
        {
            minpirmoY = A[i];
        }
        if(A[i] > maxpirmoY)
        {
            maxpirmoY = A[i];
        }
        if(B[i] < minantroY)
        {
            minantroY = B[i];
        }
        if(B[i] > maxantroY)
        {
            maxantroY = B[i];
        }
    }

    if(minpirmoX >= maxantroX || minantroX >= maxpirmoX || minpirmoY >= maxantroY || minantroY >= maxpirmoY)
    {
        cout << "Nesikerta." << endl;
    } else {
        cout << "Kertasi" << endl;
    }



    return 0;
}
