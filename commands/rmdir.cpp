#include <bits/stdc++.h>
#include <unistd.h>
#include "all.h"
using namespace std;

void run_rmdir(vector<string> &args) {
    int n = args.size();
    const char *dir = args[0].c_str();

    if (n != 1) {
        cout << "Usage: rmdir <dir>\n";
        return;
    }

    if (rmdir(dir) != 0)
        perror("rmdir failed");
}
