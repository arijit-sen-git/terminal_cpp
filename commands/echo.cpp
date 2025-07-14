#include <bits/stdc++.h>
#include <unistd.h>
#include "all.h"
using namespace std;

void run_echo(vector<string> &args) {
    int i, n = args.size();

    for (i = 0; i < n; i++) {
        cout << args[i];
        if (i != n - 1)
            cout << " ";
    }
    cout << endl;
}