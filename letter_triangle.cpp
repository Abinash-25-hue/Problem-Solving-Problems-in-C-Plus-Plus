/* Print the following pattern for the given N number of rows. 

Sample Input : 7 
Sample Output : 

A
BB
CCC
DDDD
EEEEE
FFFFFF
GGGGGGG

Time Taken : 5 mins 28.07 seconds */

#include<iostream>
using namespace std;

void letter_printer(int N)
{
    char letter;
    int index, letter_ascii = 65;
    for (index = 0; index < N; index++)
    {
        letter = letter_ascii;
        for (int jindex = 0; jindex <= index; jindex++)
        {
            cout<< letter;
        }
        cout<< endl;
        letter_ascii++;
    }
}

int main ()
{
    int N;
    cout<< "Enter the number of rows : ";
    cin>> N;
    letter_printer(N);
    return 0;
}