#include "ffc/types.h"

typedef struct { uint8_t *ptr; uint32_t size; } Tbl;
typedef struct { uint8_t pad[0x20]; uint32_t flag; uint32_t a; uint32_t b; } Obj;

extern Tbl data_021412e8;
extern Tbl data_021412f0;
extern uint32_t func_02087460(void);
extern void func_0207e890(void *object);
extern void *func_02084ca4(void *dst, const void *src, uint32_t n);
extern void func_0207ebd0(void *destination, const void *source);
extern uint32_t func_0207e990(void *object, uint32_t second, uint32_t third, ...);
extern uint32_t func_0207fc20(const void *object);
extern uint32_t func_0207ea30(const void *object);
extern uintptr_t func_0207caac(void);
extern uint32_t func_0207fe30(void *object, uint32_t a, uint32_t b);
extern uint32_t func_0207eab0(void *object, void *dst, uint32_t n);
extern void func_0207ea0c(void *object);

int func_0207ebe8(void *p0, uint32_t r7, uint32_t idx) {
    Obj *p = (Obj *)p0;
    int result = 0;
    uint32_t off = idx << 5;
    Tbl *t = &data_021412e8;
    uint8_t objA[0x48];
    uint8_t objB[0x48];
    uint32_t tmpA[2];
    uint32_t tmpB[2];

    if (r7 != 0) {
        t = &data_021412f0;
    }
    if (idx >= 0x13) {
        if (func_02087460() == 0) {
            goto end;
        }
    }
    if (t->ptr != 0) {
        if (off >= t->size) {
            goto end;
        }
        func_0207e890(objA);
        func_02084ca4(t->ptr + off, p, 0x20);
        p->flag = r7;
        func_0207ebd0(tmpA, p);
        if (func_0207e990(objA, tmpA[0], tmpA[1]) == 0) {
            goto end;
        }
        p->a = func_0207fc20(objA);
        p->b = func_0207ea30(objA);
        func_0207ea0c(objA);
        result = 1;
        goto end;
    } else {
        Tbl *t2;
        if (r7 == 0) {
            t2 = (Tbl *)(func_0207caac() + 0x50);
        } else {
            t2 = (Tbl *)(func_0207caac() + 0x58);
        }
        if (off >= t2->size) {
            goto end;
        }
        func_0207e890(objB);
        if (func_0207fe30(objB, (uintptr_t)t2->ptr + off, (uintptr_t)t2->ptr + t2->size) == 0) {
            goto end;
        }
        if (func_0207eab0(objB, p, 0x20) != 0x20) {
            func_0207ea0c(objB);
            goto end;
        }
        func_0207ea0c(objB);
        p->flag = r7;
        func_0207ebd0(tmpB, p);
        if (func_0207e990(objB, tmpB[0], tmpB[1]) == 0) {
            goto end;
        }
        p->a = func_0207fc20(objB);
        p->b = func_0207ea30(objB);
        func_0207ea0c(objB);
        result = 1;
    }
end:
    return result;
}
