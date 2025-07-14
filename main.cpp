#include "commands/all.h"
#include <bits/stdc++.h>
#include <unistd.h>
using namespace std;

void prompt() {
    char cwd[PATH_MAX];
    getcwd(cwd, sizeof(cwd));
    cout << cwd << "> ";
}

vector<string> tokenize(string &input) {
    istringstream iss(input);
    vector<string> tokens;
    string token;
    while (iss >> token) 
        tokens.push_back(token);
    return tokens;
}

int main() {
    string line;
    
    while (true) {
        prompt();
        getline(cin, line);

        if (line.empty() == true) 
            continue;

        vector<string> tokens = tokenize(line);
        string command = tokens[0];
        tokens.erase(tokens.begin());

        if (command == "cd") 
            run_cd(tokens);
        else if (command == "pwd") 
            run_pwd(tokens);
        else if (command == "echo") 
            run_echo(tokens);
        else if (command == "ls")
            run_ls(tokens);
        else if (command == "exit") 
            run_exit(tokens);
        else if (command == "mkdir") 
            run_mkdir(tokens);
        else if (command == "rmdir") 
            run_rmdir(tokens);
        else if (command == "touch") 
            run_touch(tokens);
        else if (command == "clear") 
            run_clear(tokens);
        else if (command == "cat") 
            run_cat(tokens);
        else if (command == "rm")
            run_rm(tokens);
        else 
            cout << "Unknown command: " << command << endl;
    }
    return 0;
}
