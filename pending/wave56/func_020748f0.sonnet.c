#include "ffc/types.h"
extern void *func_020548b4(void *object, uint32_t first, uint32_t second);
extern void func_02087620(void *object);
extern void *func_0205681c(uint32_t x);
extern void *func_020730d4(void *a, uint32_t b, uint32_t c);
extern void func_020735fc(void *a, void *b, void *c);
extern void func_02084b2c(void *dst, uint32_t val, uint32_t size);
extern char data_020b2658[];
extern char data_020b266c[];
extern char data_020b267c[];
extern char data_020b268c[];
typedef struct O {
    void *vt; uint8_t p0[0x10]; void *vt2; uint8_t p1[0xc];
    uint32_t a, b, c; void *d;
    uint32_t tab[32][2];
    uint8_t pad[0x130-0x130];
} O;
void *func_020748f0(uint8_t *obj, uint32_t a, uint32_t b) {
    int i, j;
    void *v;
    uint32_t z = 0;
    func_020548b4(obj, 0, 0);
    *(uint32_t *)(obj + 0x20) = a;
    *(char **)obj = data_020b2658;
    *(char **)(obj + 0x14) = data_020b266c;
    *(uint32_t *)(obj + 0x24) = b;
    *(uint32_t *)(obj + 0x28) = z;
    *(uint32_t *)(obj + 0x2c) = z;
    func_02087620(obj + 0x4238);
    *(uint32_t *)(obj + 0x4250) = z;
    *(uint32_t *)(obj + 0x4254) = z;
    *(uint32_t *)(obj + 0x425c) = z;
    *(uint32_t *)(obj + 0x4264) = z;
    *(uint32_t *)(obj + 0x426c) = z;
    v = func_0205681c(0x1ac);
    if (v) v = func_020730d4(v, *(uint32_t *)(obj + 0x20), *(uint32_t *)(obj + 0x24));
    *(void **)(obj + 0x2c) = v;
    func_020735fc(v, data_020b267c, data_020b268c);
    for (i = 0; i < 32; i++) {
        for (j = 0; j < 2; j++) *(uint32_t *)(obj + i*4 + j*0x80 + 0x30) = z;
        *(uint32_t *)(obj + i*4 + 0x4138) = z;
        *(uint32_t *)(obj + i*4 + 0x41b8) = z;
    }
    func_02084b2c(obj + 0x130, z, 0x4008);
    func_02084b2c(obj + 0x4274, z, 0x80);
    return obj;
}
