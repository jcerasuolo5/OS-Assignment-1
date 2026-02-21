#include <iostream>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>



using namespace std;

class Node {
    public:
//constructor
    Node(int data){
        data_ = data;
        child2_ = nullptr;
        child1_ = nullptr;
        parent = nullptr;
        pid_;
    }
    ////maybe call this one fork
    Node(int data, Node* parent){
          data_ = data;
        child2_ = nullptr;
        child1_ = nullptr;
        parent = parent*;
        pid_;
    }

    int getData(){
            return data_;
        }
    void setData(int data){
            data_ = data;
        }
    int getParent(){
        return parent;
    }
    void setParent(Node* parent){
        parent_ = parent;
    }
    int getPid (){
        return pid_;
    }
    void setPid(int pid_){
        pid_ = pid;
    }
    private:
        int data_;
        Node* child1_;
        Node* child2_;
        Node* parent_;
        int pid_;
};


// i dont think we can use node because we are supposed to be using  fork() to create the tree 
v
// 1. The parent creates child process Child 1
void parent() {
    std:: cout << "I am the original parent; my process ID is pid = 1966"<< getpid() << "\n";  
   
    pid_t pid = fork();

if (pid == 0) {
    child1();
    exit(0);
}
else {
    wait(NULL);
 } 
}
// 2. child 1 process creates child processes Child 2 and Child 3 
// (using fork()) and then waits for both to terminate (using wait());

void child1() {
    std::cout <<"I am child1 pid=1967 "<< getpid()<< "; my parent is pid= 1966" << getppid()<< "\n";

    pid_t chi2 = fork();

if (chi2 == 0) {
    child2();
    exit(0);
}

    pid_t chi3 = fork();

if (chi3 == 0) {
    child3();
    exit(0);
}
else {
    wait(NULL);
 }
}

// 3. Child 2 creates child processes Child 4 and Child 5 and waits for both to terminate;
void child2() {
    std::cout <<" I am child2 pid=1968 " <<c getpid() << "; my parent is pid=1967 " << getppid()<< "\n";
    
    pid_t chi4 = fork();

if (chi4 == 0) {
    child4();
    exit(0);
}

    pid_t chi5 = fork();

if (chi5 == 0) {
    child5();
    exit(0);
} else {
    wait(NULL);
 } 
}

//4.Child 3 creates child processes Child 6 and Child 7 and waits for both to terminate..Child 3 creates child processes Child 6 and Child 7 and waits for both to terminate.
void child3() {
    std::cout <<"I am child3 pid=1969" << getpid()<< "; my parent is pid=1967 " << getppid()<< "\n";
 
 pid_t chi6 = fork();

if (chi6 == 0) {
    child6();
    exit(0);
}

    pid_t chi7 = fork();

if (chi7 == 0) {
    child7();
    exit(0);
} else {
    wait(NULL);
 } 
}

