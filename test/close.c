#include "syscall.h"

int main(){
    int openFileId;
    openFileId = Open("MyFile.txt", 1);
    Close(openFileId);

    Halt();
}
