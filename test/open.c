#include"syscall.h"

int main(){
    Open("MyFile.txt", 0);
    Close(3);
    Open("MyFile.txt", 1);
    Halt();
}
