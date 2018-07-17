#include <iostream>

using namespace std;

void bucky()
{
    cout<<"hello";
}

void helen()
{
    cout<<"BYE";
}

int main()

{ 
    int choice;
    cout<<"enter 1 for bucky and 2 for helen";
    cin>>choice;
    switch(choice)
    {
        case 1:bucky();
        break;
        case 2:helen();
        break;
    }
}
