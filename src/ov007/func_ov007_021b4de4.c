#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern Pair data_ov007_021c691c;
extern Pair data_ov007_021c6924;
extern Pair data_ov007_021c692c;
extern Pair data_ov007_021c6934;
extern Pair data_ov007_021c693c;
extern Pair data_ov007_021c6944;
extern Pair data_ov007_021c694c;

extern void *func_0205681c(uint32_t size);
extern void *func_ov007_021aec28(void *a, void *b, uint32_t c, void *d, void *e);
extern void *func_ov001_0218dde0(void *self, uint32_t flag);
extern void func_02056bc0(void *object, void *node);
extern void *func_0203bf7c(uint32_t x);
extern void *func_ov012_021cdfe8(void *a, void *b);
extern void *func_0203bf54(uint32_t x);
extern void *func_ov007_021b4750(void *a, void *b, uint32_t c);
extern void *func_0203bfe0(uint32_t x);
extern void *func_0203bfcc(uint32_t x);
extern void *func_0203b6fc(void);
extern void *func_ov012_021d274c(void *a, void *b);
extern void *func_0203bfb8(uint32_t x);
extern void *func_0203bfa4(uint32_t x);

void func_ov007_021b4de4(void *self)
{
    uint8_t *p = (uint8_t *)self;
    void *r5;
    void *r6;
    void *r7;
    int i;

    *(Pair *)(p + 0xb0) = data_ov007_021c691c;

    switch (*(uint32_t *)(p + 0xbc)) {
    case 0:
        *(Pair *)(p + 0xb0) = data_ov007_021c6924;
        return;
    case 1:
        *(void **)(p + 0x540) = p + 0xec;
        for (i = 0; i < 5; i++) {
            *(uint8_t **)(p + 0x544 + i * 4) = p + 0x158 + i * 0x22;
        }
        r5 = func_0205681c(0x84);
        if (r5 != 0) {
            r5 = func_ov007_021aec28(r5, p + 0x540, 6, p + 0x558, p + 0x560);
        }
        func_02056bc0(func_ov001_0218dde0(p, 0), r5);
        *(Pair *)(p + 0xb0) = data_ov007_021c692c;
        return;
    case 2:
        r5 = func_0203bf7c(0x1e);
        func_02056bc0(func_ov001_0218dde0(p, 1), r5);
        r5 = func_0205681c(0x84);
        if (r5 != 0) {
            r5 = func_ov012_021cdfe8(r5, p + 0xe4);
        }
        func_02056bc0(func_ov001_0218dde0(p, 1), r5);
        r5 = func_0203bf54(0x1e);
        func_02056bc0(func_ov001_0218dde0(p, 1), r5);
        *(Pair *)(p + 0xb0) = data_ov007_021c6934;
        return;
    case 3:
        r5 = func_0205681c(0xfc);
        if (r5 != 0) {
            r5 = func_ov007_021b4750(r5, p + 0xc0, 0);
        }
        func_02056bc0(func_ov001_0218dde0(p, 1), r5);
        *(Pair *)(p + 0xb0) = data_ov007_021c693c;
        return;
    case 4:
        r5 = func_0205681c(0xfc);
        if (r5 != 0) {
            r5 = func_ov007_021b4750(r5, p + 0xc0, 1);
        }
        func_02056bc0(func_ov001_0218dde0(p, 1), r5);
        *(Pair *)(p + 0xb0) = data_ov007_021c6944;
        return;
    case 5:
        r7 = func_0203bfe0(0x1e);
        r5 = func_0203bfcc(0x1e);
        r6 = func_0203b6fc();
        func_02056bc0(r6, r5);
        func_02056bc0(r6, r7);
        func_02056bc0(func_ov001_0218dde0(p, 1), r6);
        r5 = func_0205681c(0x84);
        if (r5 != 0) {
            r5 = func_ov012_021d274c(r5, p + 0x53c);
        }
        func_02056bc0(func_ov001_0218dde0(p, 1), r5);
        r7 = func_0203bfb8(0x1e);
        r5 = func_0203bfa4(0x1e);
        r6 = func_0203b6fc();
        func_02056bc0(r6, r5);
        func_02056bc0(r6, r7);
        func_02056bc0(func_ov001_0218dde0(p, 1), r6);
        *(Pair *)(p + 0xb0) = data_ov007_021c694c;
        return;
    default:
        return;
    }
}
