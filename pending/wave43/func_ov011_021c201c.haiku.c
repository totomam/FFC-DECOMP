#include "ffc/types.h"

extern void func_02035f58(void *object);
extern void func_0201f600(void *a, void *b, void *c, void *d);
extern void func_ov009_021a4d18(void *a, void *b);
extern void func_ov009_0219c000(void *a);
extern void func_ov009_0219bc64(void *a, void *b, int c);
extern void *func_02035fd0(void *object);
extern void *func_02056b10(void *owner);
extern void func_02056bc0(void *object, void *node);
extern void *data_020b93b8;
extern int data_020ae644;
extern int data_020ae654;

typedef struct {
    uint32_t a;
    uint32_t b;
} Ent;

typedef struct {
    Ent e[6];
    uint16_t hw[17];
    uint16_t pad;
    uint32_t w[3];
} Buf;

void func_ov011_021c201c(uint8_t *p0, void *p1)
{
    uint32_t L[0x18];
    Buf S;
    uint16_t *src;
    uint16_t *dst;
    int i;

    func_02035f58(L);
    func_0201f600(data_020b93b8, p1, p0 + 0x220, L);
    func_ov009_021a4d18(p0, p1);
    func_ov009_0219c000(*(void **)(p0 + 0x2b8));

    S.e[0].a = L[0];
    S.e[0].b = (uint32_t)&data_020ae644;
    S.e[1].a = L[2];
    S.e[1].b = (uint32_t)&data_020ae644;
    S.e[2].a = L[4];
    S.e[2].b = (uint32_t)&data_020ae644;
    S.e[3].a = L[6];
    S.e[3].b = (uint32_t)&data_020ae644;
    S.e[4].a = L[8];
    S.e[4].b = (uint32_t)&data_020ae654;
    S.e[5].a = L[10];
    S.e[5].b = L[11];

    src = (uint16_t *)((uint8_t *)L + 0x30);
    dst = S.hw;
    for (i = 17; i != 0; i--) {
        *dst++ = *src++;
    }

    S.w[0] = L[21];
    S.w[1] = L[22];
    S.w[2] = L[23];

    func_ov009_0219bc64(*(void **)(p0 + 0x2b8), &S, 1);
    func_02035fd0(&S);

    {
        void *node = func_02056b10(*(void **)(p0 + 0x2b8) + 0x14);
        func_02056bc0(p0 + 0x14, node);
    }

    func_02035fd0(L);
}
