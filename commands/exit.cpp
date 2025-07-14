#include <bits/stdc++.h>
#include <unistd.h>
#include <cstdlib>
#include "all.h"
using namespace std;

void run_exit(vector<string> &args) {
    int exit_code = 0, n = args.size();

    if (n > 1) {
        cout << "Usage: exit [code]\n";
        return;
    }

    if (n == 1) {
        try {
            exit_code = stoi(args[0]);
        }
        catch (...) {
            cout << "exit: invalid exit code\n";
            return;
        }
    }
    exit(exit_code);
}
