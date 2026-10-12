#include "ffc/types.h"

typedef struct Inner {
    void **vtbl;
    uint8_t pad[8];
    uint32_t w;
} Inner;

extern void *data_0213df18;
extern void *data_0213e098;
extern int data_02141510[];

extern void *func_02055194(void *);
extern void func_02086ff4(void *, int);
extern void func_0204f548(void *, int);
extern void func_020870a0(void *object);
extern void func_02087024(int);

void func_02049684(void *arg) {
    Inner *in;
    int i = 0;
    for (;;) {
        func_02086ff4(func_02055194(data_0213e098), 0);
        func_0204f548(data_0213df18, data_02141510[1]);
        in = *(Inner **)((uint8_t *)arg + 0x14);
        if ((int8_t)in->w == 0) {
            ((void (*)(void *))in->vtbl[2])(in);
        }
        func_0204f548(data_0213df18, i);
        func_020870a0(func_02055194(data_0213e098));
        func_02087024(i);
    }
}
