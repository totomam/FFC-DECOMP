#include "ffc/types.h"

extern int func_020692e0(void *object);
extern void func_020692a4(void *object);

void func_ov007_021aa3e4(void *object) {
    if (func_020692e0(object) != 0) {
        func_020692a4(object);
        void **obj = *(void ***)((uint8_t *)object + 0x98);
        ((void (*)(void *, int, int))((void **)*obj)[14])(obj, 1, 1);
    }
}
