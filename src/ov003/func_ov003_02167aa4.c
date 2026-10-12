#include "ffc/types.h"

extern void func_02084b2c(void *p, int v, unsigned int n);
extern void func_02036de4(void *p, unsigned int v);
extern unsigned char *func_020197b4(void *a, unsigned int b);
extern void func_02036df8(void *p, unsigned char v);
extern void func_02036e40(void *p, unsigned int v);
extern void func_02036e0c(void *p, unsigned int v);
extern void func_02036e54(void *p, unsigned char v);
extern void func_02036e7c(void *p, unsigned char v);
extern void func_02036e90(void *p, unsigned char v);
extern void func_02036e1c(void *p, unsigned char v);
extern void func_02036e2c(void *p, unsigned int v);
extern void *func_0205681c(unsigned int size);
extern void *func_0203c634(void *obj, unsigned int a, unsigned int b, void *c, void *d, unsigned char e, unsigned int f);
extern void func_02056bc0(void *object, void *node);
extern void func_0201bf5c(void *a, unsigned int b, unsigned char c);
extern void *data_020b8e44;
extern void *data_020b93b8;

void func_ov003_02167aa4(unsigned char *s)
{
    unsigned char buf[0x18];
    unsigned int old = *(unsigned int *)(s + 0x94);
    unsigned int r5;
    unsigned char *p;
    void *node;

    *(unsigned int *)(s + 0x94) = *(unsigned int *)(s + 0x94) + 1;

    switch (old) {
    case 0:
        r5 = 0;
        func_02084b2c(buf, 0, 0x18);
        func_02036de4(buf, *(unsigned int *)(s + 0x88));
        p = func_020197b4(data_020b8e44, *(unsigned int *)(s + 0x88));
        func_02036df8(buf, p[9]);
        func_02036e40(buf, *(unsigned int *)(s + 0x8c));
        if (*(unsigned int *)(s + 0x90)) {
            r5 = 1;
        }
        func_02036e0c(buf, r5);
        func_02036e54(buf, *(unsigned char *)(s + 0x9f));
        p = func_020197b4(data_020b8e44, *(unsigned int *)(s + 0x88));
        func_02036e7c(buf, p[6]);
        p = func_020197b4(data_020b8e44, *(unsigned int *)(s + 0x88));
        func_02036e90(buf, p[7]);
        func_02036e1c(buf, *(unsigned char *)(s + 0x9e));
        if (*(unsigned char *)(s + 0x9e)) {
            func_02036e2c(buf, 100);
        }
        if (*(unsigned int *)(s + 0x84)) {
            r5 = 2;
        } else if (*(unsigned char *)(s + 0x9d)) {
            r5 = 5;
        } else {
            r5 = *(unsigned char *)(s + 0x9f) ? 4 : 1;
        }
        node = func_0205681c(0xe4);
        if (node) {
            node = func_0203c634(node, *(unsigned int *)(s + 0x80), r5, buf, s + 0x9c,
                                 *(unsigned char *)(s + 0xa0), *(unsigned int *)(s + 0x98));
        }
        func_02056bc0(s + 0x14, node);
        break;
    case 1:
        if (*(unsigned int *)(s + 0x84)) {
            func_0201bf5c(data_020b93b8, *(unsigned int *)(s + 0x84), *(unsigned char *)(s + 0x9c));
        }
        *(unsigned int *)(s + 0xc) = (*(unsigned int *)(s + 0xc) & ~0xffu) | 2;
        break;
    default:
        break;
    }
}
