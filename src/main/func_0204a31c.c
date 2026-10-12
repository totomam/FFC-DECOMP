#include "ffc/types.h"

typedef struct { uint32_t a, b; } P;
extern void *func_0205681c(uint32_t size);
extern void *func_02039120(void *p);
extern int func_0203915c(void *h);
extern void *data_02139d24;
extern P data_020b0164;

void func_0204a31c(uint8_t *p) {
    if (data_02139d24 == 0) {
        void *a = func_0205681c(0x48);
        if (a != 0) {
            a = func_02039120(a);
        }
        data_02139d24 = a;
    }
    if (func_0203915c(data_02139d24) == 0) {
        *(P *)(p + 0x80) = data_020b0164;
    }
}
