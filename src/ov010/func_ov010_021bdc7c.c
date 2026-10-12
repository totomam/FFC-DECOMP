#include "ffc/types.h"

extern void *data_020b93b8;
typedef struct { uint32_t a; uint32_t b; } Pair;
extern Pair data_ov010_021d15f8;
extern void func_0201c9ac(void *a, int b);
extern void *func_0205681c(int a);
extern void *func_ov010_021bdf7c(void *a, void *b, void *c, void *d, int e, uint8_t f);
extern void func_02056bc0(void *object, void *node);

void func_ov010_021bdc7c(uint8_t *p) {
    int r4;
    uint8_t r1;
    void *n;
    void *res;

    *(uint32_t *)(p + 0x8c) = 0x63;
    func_0201c9ac(data_020b93b8, 0xf);
    r4 = (*(uint32_t *)(p + 0x88) == 5);
    r1 = r4 ? 0 : 1;
    *(uint8_t *)(*(uint8_t **)(p + 0x168) + 4) = r1;
    *(uint32_t *)(p + 0x88) = 0;
    n = func_0205681c(0x138);
    res = n;
    if (n != 0) {
        res = func_ov010_021bdf7c(n, p + 0x8c, p + 0x90, p + 0xe8, r4,
                                  *(uint8_t *)(*(uint8_t **)(p + 0x168) + 4));
    }
    func_02056bc0(p + 0x14, res);
    *(Pair *)(p + 0x80) = data_ov010_021d15f8;
}
