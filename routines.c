#include "routines.h"

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
