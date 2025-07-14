#include <bits/stdc++.h>
#include <unistd.h>
#include "all.h"
using namespace std;

void run_pwd(vector<string> &args) {
    char cwd[PATH_MAX];

    if (args.empty() == false) {
        cout << "Usage: pwd\n";
        return;
    }

    if (getcwd(cwd, sizeof(cwd)) != NULL)
        cout << cwd << endl;
    else
        perror("pwd failed");
}
