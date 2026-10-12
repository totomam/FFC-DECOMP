#include "ffc/types.h"

extern void func_ov006_0219ddc4(int x);
extern int func_ov006_0219e6fc(int a, int b, int c);
extern int func_ov006_0219e840(int a, int b, int c);
extern int func_ov006_0219e91c(int a, int b, int c);

int func_ov006_0219e6a8(int type, int a, int b, int c)
{
    switch (type) {
    case 0:
        func_ov006_0219ddc4(2);
        return func_ov006_0219e6fc(a, b, c);
    case 1:
        func_ov006_0219ddc4(3);
        return func_ov006_0219e840(a, b, c);
    case 2:
        func_ov006_0219ddc4(5);
        return func_ov006_0219e91c(a, b, c);
    default:
        return -1;
    }
}
