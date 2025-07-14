# Mini Shell - A Command Line Interpreter in `C++` (From Scratch)

## Overview

**Mini Shell** is a lightweight, modular command-line interpreter implemented in C++. It mimics basic functionalities of a Unix shell, allowing users to interact with the operating system via common shell commands such as `cd`, `ls`, `pwd`, `mkdir`, `touch`, `rm`, and others. This project serves as both a learning tool and a foundation for building more complex shell environments.

---

## Features

- **Prompt with Current Working Directory**  
  Displays the full current working directory in the prompt, improving navigation awareness.

- **Command Parsing and Tokenization**  
  Inputs are parsed and tokenized to separate command and arguments, supporting multiple arguments per command.

- **Implemented Commands:**  
  - `cd <dir>`: Change the current working directory.  
  - `pwd`: Print the current working directory.  
  - `echo <text>`: Display text or variables.  
  - `ls [dir]`: List contents of a directory (defaults to current directory).  
  - `mkdir <dir>`: Create a new directory.  
  - `rmdir <dir>`: Remove an empty directory.  
  - `touch <file>`: Create an empty file or update file timestamp.  
  - `cat <file>`: Display contents of a file.  
  - `rm <file>`: Remove a file.  
  - `clear`: Clear the terminal screen.  
  - `exit`: Exit the shell program.

- **Unknown Command Handling**  
  Commands not recognized by the shell prompt an error message, keeping the user informed.

---

## Project Structure

- `main.cpp`  
  Core program loop that displays the prompt, reads input, tokenizes commands, and dispatches commands to respective handlers.

- `commands/`  
  Contains implementations of individual commands as separate source files, facilitating modularity and easy extension. For example:  
  - `all.h`
  - `cd.cpp`
  - `pwd.cpp`
  - `echo.cpp`
  - `ls.cpp`
  - `exit.cpp`
  - `mkdir.cpp`
  - `rmdir.cpp`
  - `touch.cpp`
  - `clear.cpp`
  - `cat.cpp`
  - `rm.cpp`

---

## Requirements

- A C++11-compatible compiler (for optional filesystem features)  
- POSIX-compliant OS or MinGW on Windows (`<unistd.h>`, `<dirent.h>`)  
- Standard C++ libraries (`iostream`, `vector`, `string`, etc.)

---

## Building

Compile the program and command implementations together. For example, with `g++`:

```bash
g++ main.cpp commands/*.cpp -o minishell
./minishell
```

---

## Example Usage

```bash
/home/user> pwd
/home/user
/home/user> ls
Documents  Downloads  minishell  README.md
/home/user> mkdir testdir
/home/user> cd testdir
/home/user/testdir> touch file.txt
/home/user/testdir> ls
file.txt
/home/user/testdir> echo Hello World!
Hello World!
/home/user/testdir> rm file.txt
/home/user/testdir> cd ..
/home/user> rmdir testdir
/home/user> exit
```

---

## License

This project is open-source and available under the MIT License.

---

Happy Shell Coding.
