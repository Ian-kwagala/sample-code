// A program to introduce the "while" repetition structure
#include <iostream>
using std::cout;
int main()
{
    int i = 1;
    cout<<"Printing Numbers from 1 to 100\n";    
    
    while (i <= 100)
    {
        cout<<i<<"\n";
        i +=1;
    }
    
    cout<<"\nEnd of the program.\n";
    return 0;
}
