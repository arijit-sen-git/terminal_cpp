#include <iostream>
#include <fstream>
#include <vector>
#include "all.h"
using namespace std;

void run_cat(vector<string> &args) {
    int i;

    if (args.empty() == true) {
        cout << "Usage: cat <file1> [file2...]\n";
        return;
    }

    for (i = 0; i < args.size(); i++) {
        const string &filename = args[i];

        ifstream file(filename);

        if (!file) {
            cerr << "cat: cannot open file '" << filename << "'\n";
            continue;
        }

        string line;
        while (getline(file, line)) {
            cout << line << endl;
        }
    }
}