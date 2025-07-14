#include <iostream>
#include <vector>
#include <fcntl.h>
#include <unistd.h>
#include "all.h"
using namespace std;

void run_touch(vector<string> &args) {
    int i, fd;

    if (args.empty() == true) {
        cout << "Usage: touch <filename> [filename...]\n";
        return;
    }

    for (i = 0; i < args.size(); i++) {
        string &filename = args[i];
        fd = open(filename.c_str(), O_CREAT | O_WRONLY, 0644);

        if (fd == -1)
            perror(("touch: cannot create file '" + filename + "'").c_str());
        else
            close(fd);
    }
}