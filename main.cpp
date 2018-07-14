#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

struct abonent
{
    string firstname;
    string lastname;
    string phone;
};

abonent ab_inst;

vector<abonent> ab_list;
vector<abonent>::iterator it;

void addentry()
{
    cout << "Enter the first name, the last name and the phone, separated by \"Enter\"" << endl;
    cin>>ab_inst.firstname>>ab_inst.lastname>>ab_inst.phone;
    ab_list.push_back(ab_inst);

}

void delentry()
{
    string delname;

    cout << "Enter the first name of the entry to delete, then press \"Enter\"" << endl;
    cin>>delname;

    for (it = ab_list.begin(); it != ab_list.end(); ++it  )
    {
        if (it->firstname == delname)
        {
            ab_list.erase(it);
            it--;
        }
    }
}

void findentry()
{
    string findname;

    cout << "Enter the first name to find, then press \"Enter\"" << endl;
    cin>>findname;

    for (it = ab_list.begin(); it != ab_list.end(); ++it  )
    {
        if (it->firstname == findname)
        {
            cout<<endl<<"Search results:\n";
            cout << it->firstname <<' '<< it->lastname << ' '<< it->phone;
            cout << endl;
        }
    }
}

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

