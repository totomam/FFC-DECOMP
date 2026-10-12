#include "ffc/types.h"

typedef struct Heap {
    uint32_t unk0;
    void *(*alloc)(uint32_t size, uint32_t align);
    uint32_t unk8;
    uint32_t unkc;
    uint32_t unk10;
    void (*free)(void *p);
} Heap;

typedef struct Obj {
    uint32_t type;
    uint32_t u4;
    uint32_t u8;
    uint32_t a;
    uint32_t n;
    void *z;
    void *p;
    void *q;
} Obj;

extern Heap data_ov001_02195798;
extern const char data_ov001_0218f10a[];
extern const char data_ov001_021944fc[];
extern const char data_ov001_02194504[];

extern void func_ov001_02188d14(int x, int y);
extern uint32_t func_ov001_02189a00(void *dst, void *src);
extern uint32_t func_ov001_021889c4(void);
extern uint32_t func_ov001_021889d4(void *dst, void *src, uint32_t len);
extern int func_ov001_021890b0(void **a, void **b, const char *fmt, void *buf, uint32_t size, int zero);
extern int func_0204da5c(void *dst, const char *fmt, void *src);
extern int func_ov001_021893c0(void *a, void *b);
extern void func_ov001_02189098(void *a, void *b);

int func_ov001_02189440(uint32_t a, uint8_t *p, uint32_t n)
{
    uint32_t size;
    uint8_t buf[12];
    void *oA;
    void *oB;
    uint8_t *r6;
    uint8_t *r7;
    uint32_t len1;
    uint32_t len2;

    size = n << 8;
    if ((int32_t)size < 0x80) {
        size = 0x80;
    }
    r7 = data_ov001_02195798.alloc(size, 4);
    if (r7 == 0) {
        func_ov001_02188d14(1, 0);
        return 0;
    }
    len1 = func_ov001_02189a00(buf, p);
    p = data_ov001_02195798.alloc(func_ov001_021889c4() + 1, 4);
    if (p == 0) {
        data_ov001_02195798.free(r7);
        func_ov001_02188d14(1, 0);
        return 0;
    }
    p[func_ov001_021889d4(p, buf, len1)] = 0;
    len2 = func_ov001_02189a00(buf, (void *)n);
    r6 = data_ov001_02195798.alloc(func_ov001_021889c4() + 1, 4);
    if (r6 == 0) {
        data_ov001_02195798.free(p);
        data_ov001_02195798.free(r7);
        func_ov001_02188d14(1, 0);
        return 0;
    }
    r6[func_ov001_021889d4(r6, buf, len2)] = 0;
    if (func_ov001_021890b0(&oA, &oB, data_ov001_0218f10a, r7, size, 0) == 0) {
        data_ov001_02195798.free(r6);
        data_ov001_02195798.free(p);
        data_ov001_02195798.free(r7);
        return 0;
    }
    if (func_0204da5c(oB, data_ov001_021944fc, p) == -1) {
        goto fail;
    }
    if (func_0204da5c(oB, data_ov001_02194504, r6) == -1) {
        goto fail;
    }
    ((Obj *)oA)->type = 2;
    ((Obj *)oA)->a = a;
    ((Obj *)oA)->p = p;
    ((Obj *)oA)->q = r6;
    ((Obj *)oA)->n = n;
    ((Obj *)oA)->z = r7;
    if (func_ov001_021893c0(oA, oB) != 0) {
        return 1;
    }
    data_ov001_02195798.free(r6);
    data_ov001_02195798.free(p);
    data_ov001_02195798.free(r7);
    return 0;
fail:
    data_ov001_02195798.free(r6);
    data_ov001_02195798.free(p);
    data_ov001_02195798.free(r7);
    func_ov001_02189098(oA, oB);
    func_ov001_02188d14(1, 0);
    return 0;
}
