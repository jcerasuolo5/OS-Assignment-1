## Information
Name: Jasmine Cerasuolo
Email: jcerasuolo@csu.fullerton.edu
Github User: jcerasuolo5
 
Name: 
Email:
Github User:
 
### Description of Process Roles

- The parent process creates Child 1.
- Child 1 creates Child 2 and Child 3.
- Child 2 creates Child 4 and Child 5.
- Child 3 creates Child 6 and Child 7.
- Child 4–7 terminate immediately after execution.
- After each process is executed, it will be print to the terminal

---

## Key Concepts Demonstrated

### 1. Fork System Call

The `fork()` system call 

- The child process receives a return value of `0` from `fork()`.
- The parent process receives the PID of the child process.

---

### 2. Process Identification

Each process prints:

- Its own Process ID (PID) using `getpid()`
- Its Parent Process ID (PPID) using `getppid()`

These values help demonstrate correct process hierarchy.

---

### 3. Process Synchronization

The program uses the `wait()` system call to ensure:

- Parent processes wait for child processes to terminate before continuing execution.
- This prevents zombie processes from being created.

---


## Development Environment

This program was developed and tested using:

- Linux-based VM environment (Tuffix)
- GNU Compiler Collection (GCC/G++)
- C++ programming language

---

## Compilation/Running Instructions
To compile the program, use the following command:

```bash
g++ processes.cpp -o processes

To Run the program, use the following command:
./processes








