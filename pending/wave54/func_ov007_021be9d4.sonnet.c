#include "ffc/types.h"

extern void *data_020b93b8;
extern uint8_t data_ov007_021c8568[];
extern void func_ov007_021beb18(void *obj);
extern void func_0201e954(void *a, uint32_t b, void *c);
extern void func_020095b8(void *dst, void *src);
extern void func_02005988(void *dst, void *src);
extern void func_0201ba14(void *a, void *b, void *c, int d);
extern void func_0203943c(void *a, void *b, void *c, void *d);
extern void *func_020059cc(void *object);
extern void *func_0205681c(uint32_t size);
extern void *func_02033338(void *a, void *b, void *c, int d);
extern void func_02033420(void *a, void *b, void *c);
extern void func_02056bc0(void *object, void *node);

void func_ov007_021be9d4(uint8_t *obj, uint32_t v)
{
    uint32_t i;
    uint8_t s54[24];
    uint8_t s48[12];
    uint8_t s3c[12];
    uint8_t s30[12];
    uint8_t s24[12];
    uint8_t s18[12];
    uint8_t s0c[12];
    uint8_t s0[12];
    void *r7;

    i = 0;
    while (i < *(uint32_t *)(obj + 0xcc)) {
        if ((*(uint32_t **)(obj + 0xc8))[i] != v) { i++; continue; }
        {
            if (*(uint8_t *)(obj + 0x11c) == 0) {
                return;
            }
            **(uint32_t **)(obj + 0xe0) = i + (*(uint32_t *)(obj + 0x110) << 3);
            if (**(uint32_t **)(obj + 0xe0) == *(uint32_t *)(obj + 0x104) - 1) {
                func_ov007_021beb18(obj);
                return;
            }
            func_0201e954(data_020b93b8, **(uint32_t **)(obj + 0xe0), s54);
            func_020095b8(s3c, *(uint8_t **)(obj + 0xe8) + 0x24);
            func_02005988(s30, data_ov007_021c8568);
            func_0201ba14(s24, data_020b93b8, s54, 1);
            func_0203943c(s48, s3c, s30, s24);
            func_020059cc(s24);
            func_020059cc(s30);
            func_020059cc(s3c);
            r7 = func_0205681c(0xb8);
            if (r7 != 0) {
                func_020095b8(s18, s48);
                r7 = func_02033338(r7, s18, obj + 0x120, 0);
                func_020059cc(s18);
            }
            func_020095b8(s0c, *(uint8_t **)(obj + 0xe8) + 0x30);
            func_020095b8(s0, *(uint8_t **)(obj + 0xe8) + 0x3c);
            func_02033420(r7, s0c, s0);
            func_020059cc(s0);
            func_020059cc(s0c);
            func_02056bc0(obj + 0x14, r7);
            func_020059cc(s48);
            return;
        }
    }
}
