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
    }
    ////maybe call this one fork
    Node(int data, Node* parent){
          data_ = data;
        child2_ = nullptr;
        child1_ = nullptr;
        parent = parent*;
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


    private:
        int data_;
        Node* child1_;
        Node* child2_;
        Node* parent_;
};

