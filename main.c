#include "routines.h"

//using namespace std;

int main()
{
    while(true)
    {
        cout<<"Enter your choice and then press \"Enter\"\n";
        cout<<"1 - Add entry\n"<<"2 - Delete entry\n"<<"3 - Find\n"<<"4 - Exit\n";
        char choice;
        cin>>choice;
        if (choice < '1' || choice > '4')
        {
            cout<<"Please, enter a valid choice!\n";
        }
        switch (choice) {
        case '1':
            addentry();
            break;
        case '2':
            delentry();
            break;
        case '3':
            findentry();
            break;
        case '4':
            exit(0);
        }

        cout<<endl<<"Now your phonebook looks like:"<<endl;

        for (it = ab_list.begin(); it != ab_list.end(); ++it  )
        {
            cout << it->firstname <<' '<< it->lastname << ' '<< it->phone;
            cout << endl;
        }

        cout<<endl;
    }
}

