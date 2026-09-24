/***********************
Lab 2: Mini Unix Shell
************************/

#include <iostream>
#include <string>
#include <vector>

#include <unistd.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <fcntl.h>

#include "Tokenizer.h"

using namespace std;

int main() {

    // TODO:
    // Implement your mini Unix shell.
    //
    // Your shell must support the following functionality:
    //
    // -------------------------------------------------------
    // Part 1: Processes and Pipes
    // -------------------------------------------------------
    //
    // 1. Repeatedly prompt the user for commands.
    //
    // 2. Exit when the user enters:
    //
    //      exit
    //
    // 3. Execute normal Linux commands using fork() and execvp().
    //
    // 4. Execute an arbitrary number of piped commands.
    //
    //      command1 | command2
    //
    //      command1 | command2 | command3 | ...
    //
    // 5. Wait for all foreground child processes before
    //    displaying the next prompt.
    //
    //
    // -------------------------------------------------------
    // Part 2: File I/O and I/O Redirection
    // -------------------------------------------------------
    //
    // 6. Support input redirection:
    //
    //      command < file
    //
    // 7. Support output redirection:
    //
    //      command > file
    //
    // 8. Support append redirection:
    //
    //      command >> file
    //
    // 9. Correctly combine pipes and redirection.
    //
    //      command1 < input.txt | command2 | command3 > output.txt
    //
    // 10. Correctly close all unused file descriptors.
    //
    //
    // -------------------------------------------------------
    // Part 3: File Operations and Permissions
    // -------------------------------------------------------
    //
    // 11. Implement the built-in command:
    //
    //      mycat filename
    //
    //     mycat must use open(), read(), write(), and close().
    //     Do NOT execute the system cat command.
    //
    // 12. Implement the built-in command:
    //
    //      myls filename
    //
    //     myls must use stat() to determine the file's
    //     permissions and display them in symbolic notation.
    //
    //     Example:
    //
    //      Permissions: rw-r--r--
    //
    // 13. Implement the built-in command:
    //
    //      mychmod MODE filename
    //
    //     Example:
    //
    //      mychmod 755 script.sh
    //
    //     mychmod must use chmod().
    //     Do NOT execute the system chmod command.
    //
    //
    // -------------------------------------------------------
    // General Requirements
    // -------------------------------------------------------
    //
    // 14. Handle common errors without crashing the shell.
    //
    // 15. Do NOT use system() to execute commands.
    //
    // 16. Properly manage child processes and file descriptors.
    //
    // See the Lab 2 handout for detailed requirements.

    return 0;
}
