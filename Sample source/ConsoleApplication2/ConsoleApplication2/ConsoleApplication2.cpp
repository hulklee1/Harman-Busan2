#include <stdio.h>

char buf[100];
int main()
{
    int len = 500;
    void *p = (void*)buf;
    for (int i = 0; i < len; i++)
    {
        printf("%02x ", *((char*)p + i));
    }
}
