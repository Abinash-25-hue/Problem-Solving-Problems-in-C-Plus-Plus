/*Print the following pattern for the given N number of rows

Input : 5
Output : 
* * * * *
* * * * 
* * *
* * 
*

*/

#include<iostream>
using namespace std;

int star_printer(int rows)
{
    int index, jindex;
    for (index = rows; index > 0; index--)
    {
        for (jindex = 0; jindex < index; jindex++)
        {
            cout<< "* ";
        }
        cout<< endl;
    }
    return 0;
}

int main ()
{
    int rows;
    cout<< "Enter the number of rows : ";
    cin>> rows;
    //cout<< rows<< endl;
    
    star_printer(rows);
    int index, jindex;
    // for (index = rows; index > 0; index--)
    // {
    //     for (jindex = 0; jindex < index; jindex++)
    //     {
    //         cout<< "* ";
    //     }
    //     cout<< endl;
    // }
    return 0;
}

