#include "ffc/types.h"

extern void func_0204b4b4(void *p, int32_t start, uint32_t *a, uint32_t *b);
extern int32_t func_0204b4f0(void *p, uint32_t *a, uint32_t *b);

int32_t func_0204b600(void *p, int32_t start, int32_t end) {
    uint32_t a;
    uint32_t b;
    int32_t i = start;

    if (i < end) {
        func_0204b4b4(p, start, &a, &b);
        if (i < end) {
            do {
                if (func_0204b4f0(p, &a, &b) != 0x20) {
                    return i;
                }
                i++;
            } while (i < end);
        }
    }
    return -1;
}
