#include <iostream>
#include <vector>
#include <dirent.h> // directory
#include <cstring>
#include <unistd.h>
#include "all.h"
using namespace std;

void run_ls(vector<string> &args) {
    string path;
    dirent *entry;
    DIR *dir = opendir(path.c_str());

    if (args.empty() == true)
        path = ".";
    else
        path = args[0];

    if (dir == NULL) {
        cerr << "ls: cannot open directory '" << path << "': " << strerror(errno) << endl;
        return;
    }

    /*skips current directory (.) and parent directory (..)*/

    while ((entry = readdir(dir)) != NULL)
        if (strcmp(entry -> d_name, ".") != 0 && strcmp(entry -> d_name, "..") != 0)
            cout << entry -> d_name << "  ";

    cout << endl;
    closedir(dir);
}
