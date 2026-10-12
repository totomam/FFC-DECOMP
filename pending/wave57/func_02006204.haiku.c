#include "ffc/types.h"

typedef struct {
    int32_t type;
    int32_t a;
    int32_t b;
    int32_t c;
} Elem;

extern void func_0207973c(void *p);
extern void func_02006380(void *p, int32_t a);
extern void func_0200635c(void *p, int32_t a, int32_t b, int32_t c);
extern void func_0200646c(void *p, int32_t a);
extern void func_02006448(void *p, int32_t a, int32_t b, int32_t c);
extern void func_020065d0(void *p, int32_t a);
extern void func_020065ec(void *p, int32_t a, int32_t b, int32_t c);
extern void func_02006508(void *p, int32_t a, int32_t b, int32_t c);
extern void func_02006664(void *p, int32_t a);
extern void func_02006dd4(void *p);
extern void func_02007140(void *p);
extern void func_02007318(void *p);
extern void func_02007878(void *p);
extern void func_020078e0(void *p);
extern int32_t func_0200652c(void *p);
extern void func_02006618(void *p, int32_t a, int32_t n);
extern int32_t func_020067f4(void *p);

void func_02006204(void *self)
{
    uint8_t *base = (uint8_t *)self;
    Elem *it = (Elem *)(base + 0x28b8);
    int32_t *cnt = (int32_t *)(base + 0x28b4);
    int32_t i;
    int32_t prev;

    func_0207973c(self);
    for (i = 0; i < *cnt; i++) {
        prev = i - 1;
        switch (it[i].type) {
        case 0:
            if (it[i].b == prev) {
                func_02006380(self, it[i].a);
            } else {
                func_0200635c(self, it[i].b, it[i].c, it[i].a);
            }
            break;
        case 1:
            if (it[i].b == prev) {
                func_0200646c(self, it[i].a);
            } else {
                func_02006448(self, it[i].b, it[i].c, it[i].a);
            }
            break;
        case 2:
            if (it[i].b == prev) {
                func_020065d0(self, it[i].a);
            } else {
                func_020065ec(self, it[i].b, it[i].c, it[i].a);
            }
            break;
        case 3:
            func_02006508(self, it[i].b, it[i].c, it[i].a);
            break;
        case 4:
            func_02006664(self, it[i].a);
            break;
        }
    }

    *cnt = 0;
    func_02006dd4(base + 0x2a14);
    func_02007140(base + 0x2a28);
    func_02007318(base + 0x2bb8);
    func_02007878(base + 0x2fc8);
    func_020078e0(base + 0x31d8);

    if (base[2] != 0) {
        if (func_0200652c(self) != 0) {
            return;
        }
        func_02006618(self, *(int32_t *)(base + 4), 6);
        base[2] = 0;
    } else if (base[3] != 0) {
        if (func_020067f4(self) != 0) {
            return;
        }
        func_02006618(self, *(int32_t *)(base + 4), 6);
        base[3] = 0;
    }
}
