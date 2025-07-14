#include <iostream>
#include <vector>
#include <cstdio> // remove()
using namespace std;

void run_rm(vector<string> &args) {
    int i;

    if (args.empty() == true) {
        cout << "Usage: rm <file1> [file2...]\n";
        return;
    }

    for (i = 0; i < args.size(); i++)
        if (remove(args[i].c_str()) != 0)
            perror(("rm: cannot remove file '" + args[i] + "'").c_str());
}