#include <bits/stdc++.h>
#include <unistd.h>
#include "all.h"
using namespace std;

void run_cd(vector<string> &args) {
    if (args.size() != 1) {
        cout << "Usage: cd <dir>\n";
        return;
    }

    if (chdir(args[0].c_str()) != 0)
        perror("cd failed");
}