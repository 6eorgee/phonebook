#ifndef ROUTINES_H
#define ROUTINES_H

#include <cstdlib>
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

extern abonent ab_inst;
extern vector<abonent> ab_list;
extern vector<abonent>::iterator it;

void addentry();

void delentry();

void findentry();

#endif // ROUTINES_H
