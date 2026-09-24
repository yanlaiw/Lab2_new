/****************
Lab2: Basic Shell
****************/
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
    // Implement your mini shell.
    //
    // Your shell must support:
    //
    // 1. Repeatedly prompt the user for commands.
    // 2. Exit when the user enters "exit".
    // 3. Execute normal commands using fork() and execvp().
    // 4. Execute an arbitrary number of piped commands.
    //
    //      command1 | command2 | command3 | ...
    //
    // 5. Support input redirection:
    //
    //      command < file
    //
    // 6. Support output redirection:
    //
    //      command > file
    //
    // 7. Support append redirection:
    //
    //      command >> file
    //
    // 8. Correctly combine pipes and redirection.
    //
    //      command1 < input.txt | command2 | command3 > output.txt
    //
    // 9. Implement the built-in command:
    //
    //      myls filename
    //
    //    myls must display the file's permissions using stat().
    //
    // 10. Implement the built-in command:
    //
    //      mychmod MODE filename
    //
    //    Example:
    //
    //      mychmod 755 script.sh
    //
    //    You must use chmod(). Do NOT execute the system chmod command.
    //
    // 11. Close all unused file descriptors.
    // 12. Wait for all foreground child processes.
    // 13. Do not leave zombie processes.
    //
    // See the Lab 2 handout for detailed requirements.

    return 0;
}
