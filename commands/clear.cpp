#include <iostream>
#include <vector>
#include <cstdlib>
#include "all.h"
using namespace std;

void run_clear(vector<string> &args) {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}