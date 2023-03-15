#include"syscall.h"

int main(){
    int fd = Create("MyFile.txt");
    Halt();
}
