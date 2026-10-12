#include "ffc/types.h"

typedef struct {
    uint32_t w0;
    uint32_t w1;
} Pair;

extern uint32_t data_020b93b8;
extern Pair data_020aed10;
extern void func_0201e954(uint32_t a, uint32_t b, void *c);
extern void func_0201ba14(void *out, uint32_t a, void *b, int c);
extern void func_0200b65c(void *a, void *b);
extern void *func_020059cc(void *object);

void func_0203d29c(uint8_t *p)
{
    uint32_t a[6];
    uint32_t b[3];

    func_0201e954(data_020b93b8, *(uint32_t *)(p + 0xd4), a);
    func_0201ba14(b, data_020b93b8, a, 1);
    func_0200b65c(p + 0xc4, b);
    func_020059cc(b);
    *(Pair *)(p + 0x80) = data_020aed10;
}
