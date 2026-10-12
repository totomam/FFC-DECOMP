#include "ffc/types.h"

extern void func_ov000_021652a8(uint32_t a, uint32_t b, uint32_t c, void *d);
extern void func_ov000_021658ac(uint32_t a);
extern void func_ov000_02165474(uint32_t a, uint32_t b);
extern int func_ov000_02165438(uint32_t a, void *b);
extern void func_ov000_021653f4(uint32_t a);
extern void func_ov001_02171d4c(void *a);
extern int func_02092a04(void *a, uint32_t b, uint32_t c);
extern uint8_t data_ov001_0218f3dc[];
extern uint8_t data_ov001_0218f3b4[];
extern uint8_t data_ov001_0218f3f4[];

typedef void (*fp_t)(uint8_t *, uint32_t *);

void func_ov001_021726c4(uint8_t *p)
{
    uint32_t *w = (uint32_t *)p;
    fp_t fn;

    func_ov000_021652a8(8, 3, 0x10, data_ov001_0218f3dc);
    if (w[115] != 0) {
        func_ov000_021652a8(8, 3, 0x10, data_ov001_0218f3b4);
        func_ov000_021658ac(w[115]);
        w[115] = 0;
    }
    func_ov000_02165474(w[20], 2);
    if (func_ov000_02165438(w[20], &w[114])) {
        func_ov000_021653f4(w[5]);
        w[5] = w[76];
        w[76] = 0;
        func_ov000_021653f4(w[6]);
        w[6] = 0;
        w[7] = 0;
        *(uint16_t *)(p + 0x20) = 0;
        func_ov000_021653f4(w[9]);
        w[20] = (uint32_t)-1;
        w[9] = 0;
        w[4] = 0;
        func_ov001_02171d4c(p + 0x58);
        func_ov001_02171d4c(p + 0x7c);
        func_ov001_02171d4c(p + 0xa0);
        func_ov001_02171d4c(p + 0xc4);
        w[68] = 0;
        w[69] = 0;
        w[70] = 0;
        w[71] = 0;
        w[72] = 0;
        w[86] = 0;
        if (w[103] != 0) {
            fn = (fp_t)w[110];
            if (fn != 0) {
                fn(p, &w[101]);
            }
            w[103] = 0;
            if (func_02092a04(data_ov001_0218f3f4, w[5], 8)) {
                w[102] = 0;
                w[101] = 0;
            }
        }
        w[77]++;
    }
}
