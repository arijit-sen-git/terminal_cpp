#include <bits/stdc++.h>
#include <sys/stat.h>
#include <sys/types.h>
#include "all.h"
using namespace std;

void run_mkdir(vector<string> &args) {
    int n = args.size();
    const char *dir = args[0].c_str();

    if (n != 1) {
        cout << "Usage: mkdir <dir>\n";
        return;
    }

    /*
    linux

    if (mkdir(dir, 0755) != 0)
        perror("mkdir failed");
    */

    if (mkdir(dir) != 0)
        perror("mkdir failed");
}
