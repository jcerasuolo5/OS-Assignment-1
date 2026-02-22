#include <iostream>
#include <unistd.h>
#include <sys/wait.h>
#include <cstdlib>

void child1();
void child2();
void child3();
void child4();
void child5();
void child6();
void child7();

// 1. The parent creates child process Child 1
void parent()
{
    std::cout << "I am the original parent; my process ID is pid = " << getpid() << "\n";

    pid_t pid = fork();

    if (pid == 0)
    {
        child1();
        exit(0);
    }
    wait(NULL);
}
// 2. child 1 process creates child processes Child 2 and Child 3
// (using fork()) and then waits for both to terminate (using wait());

void child1()
{
    std::cout << "I am child pid = " << getpid() << "; my parent is pid = " << getppid() << "\n";

    pid_t chi2 = fork();

    if (chi2 == 0)
    {
        child2();
        exit(0);
    }

    pid_t chi3 = fork();

    if (chi3 == 0)
    {
        child3();
        exit(0);
    }

    wait(NULL);
    wait(NULL);
}

// 3. Child 2 creates child processes Child 4 and Child 5 and waits for both to terminate;
void child2()
{
    std::cout << "I am child pid = " << getpid() << "; my parent is pid = " << getppid() << "\n";

    pid_t chi4 = fork();

    if (chi4 == 0)
    {
        child4();
        exit(0);
    }
wait(NULL);
    pid_t chi5 = fork();

    if (chi5 == 0)
    {
        child5();
        exit(0);
    }
    
    wait(NULL);
}

// 4.Child 3 creates child processes Child 6 and Child 7 and waits for both to terminate..Child 3 creates child processes Child 6 and Child 7 and waits for both to terminate.
void child3()
{
    std::cout << "I am child pid = " << getpid() << "; my parent is pid = " << getppid() << "\n";

    pid_t chi6 = fork();

    if (chi6 == 0)
    {
        child6();
        exit(0);
    }
 wait(NULL);
    pid_t chi7 = fork();

    if (chi7 == 0)
    {
        child7();
        exit(0);
    }
   
    wait(NULL);
}

// Now we print out what rest of the children ( theres functions are going to be invoked by the respective child processes)
void child4()
{
    std::cout << "I am child pid = " << getpid() << "; my parent is pid = " << getppid() << "\n";
    exit(0);
}
void child5()
{
    std::cout << "I am child pid = " << getpid() << "; my parent is pid = " << getppid() << "\n";
    exit(0);
}
void child6()
{
    std::cout << "I am child pid = " << getpid() << "; my parent is pid = " << getppid() << "\n";
    exit(0);
}
void child7()
{
    std::cout << "I am child pid = " << getpid() << "; my parent is pid = " << getppid() << "\n";
    exit(0);
}

int main()
{
    parent();

    return 0;
}