#include"syscall.h"

int main(){
    int openFileId;
    int fileSize;
    openFileId = Open("test.txt", 1);
    fileSize = Seek(-1, openFileId);
    PrintNum(fileSize);
    Halt();
}
