#include <iostream>
 #include "processes.cpp"

int fork(Node node){
 //Fok is gonna create a child with the parent pointer the onlu one not null
 //going to wait for child 1 to finish before returning
 //no if else logic here
    return node.data;
}

//TO DO
//first call parent form and create child 1, then wait for child 1 to finish - say the cout statment,
//child 1 calls fork for child 2, this child 1 call fork for child 3, the child 1 will wait for child 2 and 3
//child2 will can fork for child 4, child 2 will call fork for child 5, wait for child 4 and 5
//child 3 will call fork for child 6 and child 7 ect


//make sure there is logic to decide where you are, if the pid i larger then 0 

int main() {
 Node parent( 12345678 ); //create the first parent

std:: cout << "I am the original parent; my process ID is pid = "<< getData(parent) << "\n";//orginical node

//child1
Node child1(123456, parent);

std::cout <<"I am child pid= "<< child1.getData()<< "; my parent is pid= " << parent.getData()<< "\n";

// Crease child2 using child 1 fork child2
std::cout <<" I am child pid= " <<child2.getData() << "; my parent is pid= "//child1.getData()<< "\n";

//create child 3 using child 2 fork child3
std::cout <<"I am child pid= " <<child3.getData()<< "; my parent is pid= "//getData()<< "\n";

//create child 4 usign child 3 fork 
std::cout <<"I am child pid= " << child4.getData() <<"; my parent is pid= "//getData()<< "\n";

//create child 5 using child 4 fork 
std::cout <<"I am child pid= " <<child5.getData()<<"; my parent is pid= "//getData()<< "\n";

//child6 create child 6 using child 5 fork 
std::cout <<"I am child pid= " <<child6.getData()<< "; my parent is pid= "//getData()<< "\n";

//create child 7 using child 6 fork 
std::cout <<"I am child pid= " <<child7.getData()<< "; my parent is pid= "//getData()<< "\n";
    return 0;
}