#include"syscall.h"
#include "copyright.h"

#define MAX_LENGTH 255

int main(){
    char fileName1[MAX_LENGTH];
    PrintString("Nhap ten file: ");
    ReadString(fileName1, MAX_LENGTH);
    Create(fileName1);
    Halt();
}
