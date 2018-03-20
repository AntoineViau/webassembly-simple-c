#include <stdlib.h>
#include <emscripten/emscripten.h>

typedef unsigned char BYTE;    // 1 byte
typedef unsigned int UINT;     // 4 bytes int ?
typedef unsigned long ULONG;   // 4 bytes int ?
typedef unsigned short USHORT; // 2 bytes


char* EMSCRIPTEN_KEEPALIVE doSomething(char* string, int strLen) {
    //char* m = (char*)malloc(1024);
    //m[0] = 'a';
    //return m;
    int i;
    for(i = 0 ; i < strLen ; i++) {
        string[i]++;
    }
    return string;    
}