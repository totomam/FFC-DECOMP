#include "ffc/types.h"

extern void *data_020b93b8;
typedef struct { uint32_t a; uint32_t b; } Pair;
extern Pair data_ov007_021c7134;
extern Pair data_ov007_021c713c;
extern void func_0201fee0(void *a, uint32_t *b);
extern void func_02084b2c(void *p, int c, uint32_t n);
extern void func_02093bc8(void *a, void *b);
extern void *func_0205681c(uint32_t n);
extern void *func_ov007_021bc148(void *a, void *b, void *c, uint32_t d, uint32_t e);
extern void func_02056bc0(void *object, void *node);

void func_ov007_021b83d4(uint8_t *self)
{
    uint32_t out[44];
    uint32_t *w = (uint32_t *)self;
    int i;
    void *node;

    uint32_t t = w[0x2e];
    if (t == 0x64) {
        *(Pair *)&w[0x2c] = data_ov007_021c7134;
        return;
    }

    func_0201fee0(data_020b93b8, out);
    *(Pair *)&w[0x2c] = data_ov007_021c713c;

    if (out[0] != 0) {
        func_02084b2c(self + 0xbc, 0, 0x23c);
        w[0x39] = out[6];
        func_02093bc8(self + 0xcc, &out[1]);
        func_02093bc8(self + 0xe8, &out[8]);
        w[0x38] = out[7];
        w[0x14c / 4] = out[24];
        w[0x150 / 4] = out[25];
        w[0xc0 / 4] = out[41];
        w[0xc4 / 4] = out[42];
        w[0xc8 / 4] = out[43];
        for (i = 0; i < 5; i++) {
            w[0x49 + i] = out[19 + i];
            w[0x80 + i] = out[26 + i];
            w[0xb2 + i] = out[31 + i];
            w[0xb7 + i] = out[36 + i];
        }

        node = func_0205681c(0xbc);
        if (node != 0) {
            node = func_ov007_021bc148(node, self, self + 0xbc, 2, 0);
        }
        func_02056bc0(self + 0x14, node);
    }
}
