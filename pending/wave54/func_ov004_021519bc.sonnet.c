#include "ffc/types.h"

extern void func_02021338(uint32_t x);
extern void func_01ffde60(uint32_t x);
extern uint32_t func_0203b81c(uint32_t x);
extern uint32_t func_0203b6f0(void);
extern void func_02056bc0(void *object, void *node);
extern void func_ov004_02148668(void *vec, void *pair, uint8_t flag);
extern void func_ov004_0214ee84(uint8_t *self, uint32_t p, uint32_t i, uint32_t j, uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t func_0206c184(uint32_t first, uint32_t second);
extern void func_ov004_021484ec(void *vec, void *pair, uint8_t flag);
extern void func_ov004_02151b60(uint8_t *self, uint32_t a, uint32_t b);
extern void func_ov004_02148680(void *vec);

typedef struct { uint32_t a; uint32_t b; } Pair;
typedef struct { Pair *ptr; uint32_t count; uint32_t cap; } Vec;

void func_ov004_021519bc(uint8_t *self, uint32_t param) {
    Vec vec;
    uint32_t i, j, r;
    uint8_t k;
    uint8_t flag;
    Pair pr;
    Pair *p;

    func_02021338(0xa5);
    func_01ffde60(*(uint32_t *)(self + 0x90));
    uint32_t off = 0x4f;
    off = off << 2;
    *(uint32_t *)(self + off) = func_0203b81c(0x32);
    *(uint32_t *)(self + off + 4) = func_0203b6f0();
    func_02056bc0(self, *(void **)(self + off));
    func_02056bc0(self + 0x48, *(void **)(self + off + 4));

    vec.ptr = 0;
    vec.count = 0;
    vec.cap = 0;

    for (i = 0; i < *(uint32_t *)(self + 0xfc); i++) {
        for (j = 0; j < *(uint32_t *)(self + 0x100); j++) {
            uint32_t *arr = *(uint32_t **)(*(uint8_t **)(self + 0x134) + 0x20);
            if (arr[i + j * *(uint32_t *)(self + 0xfc)] == 2) {
                pr.a = i;
                pr.b = j;
                if (vec.count >= vec.cap) {
                    flag = 0;
                    func_ov004_02148668(&vec, &pr, flag);
                } else {
                    Pair *dst = &vec.ptr[vec.count];
                    if (dst) {
                        dst->a = i;
                        dst->b = j;
                    }
                    vec.count++;
                }
                func_ov004_0214ee84(self, param, i, j, 0x64000, 0, 0, 0);
            }
        }
    }

    for (k = 0; k < 0x1c; k++) {
        if (vec.count == 0) {
            break;
        }
        r = func_0206c184(*(uint32_t *)(self + 0xe4), vec.count);
        p = vec.ptr + r;
        pr = *p;
        flag = 0;
        func_ov004_021484ec(&vec, p, flag);
        func_ov004_02151b60(self, pr.a, pr.b);
    }
    func_ov004_02148680(&vec);
}
