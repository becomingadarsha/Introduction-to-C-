#include <iostream>
#include<stdlib.h>
    using namespace std;
    class matrix3
    {
        int a[10][10],b[10][10],c[10][10],d[10][10],e[10][10],f[10][10],x,y,i,j;
        public :
            void values();
            void transpose();
            void sum();
            void diff();
    };
    void matrix3::values()
    {
        cout << "Enter the rows   "; cin >> x;
        cout << "Enter the columns   "; cin >> y;
        cout << "Enter elements of first matrix\n\n";
        for (i=1; i<=x; i++)
        {
            for ( j=1; j<=y; j++)
            {
                cin >> a[i][j];
            }
        }
        cout << "Enter elements of second matrix\n\n";
        for (i=1; i<=x; i++)
        {
            for (j=1; j<=y; j++)
            {
                cin >> c[i][j];
            }
        }
    }
    void matrix3::sum()
{
    cout << "Sum of Matrices 1 and 2 is\n";
    for (i=0; i<=x; i++)
    {
        for ( j=0; j<=y; j++)
        {
            cout << a[i][j]+c[i][j] << "";
        }
        cout << endl;
    }
}


    void matrix3::diff()

    {
    cout << "Difference of Matrices 1 and 2 (1-2) is\n";
        for (i=1; i<=x; i++)
        {
            for ( j=1; j<=y; j++)
            {
                f[i][j] = a[i][j]-c[i][j];
                cout << f[i][j] << "";
            }
            cout << endl;
        }
    }
    void matrix3::transpose()
    {
        cout << "transpose of the matrix is\n";
        for ( i=1; i<=x; i++)
        {
            for ( j=1; j<=y; j++)
            {
                b[i][j] = a[j][i];
                cout << b[i][j] << "";
            }
            cout << endl;
        }
        cout << "Transpose of the second matrix is\n";
        for ( i=1; i<=x; i++)
        {
            for ( j=1; j<=y; j++)
            {
                d[i][j] = c[j][i];
                cout << b[i][j] << "";
            }
            cout << endl;
        }
    }
    int main()
    {
        int input;
        char ch;
        matrix3 m;
        m.values();
        do
         {
        cout << "Enter your choice\n";
        cout << " 1. Sum of 1 and 2\n" << " 2. Difference of 1 and 2\n" << " 3. Transpose of both 1 amd 2\n";
        cin >> input;
        switch (input)
        {
            case 1:
                m.sum();
                break;

            case 2:
                m.diff();
                break;

            case 3:
                m.transpose();
                break;
        }
        cout << "\nDo another y/n?";
        cin >> ch;
        }
        while (ch!= 'n');
        cout << "\n";
        system ("pause");
    return 0;
    }
