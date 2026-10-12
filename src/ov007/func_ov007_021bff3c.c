#include "ffc/types.h"

typedef struct {
    uint32_t pad;
    void *fn;
} Blk;

extern void func_02086b04(void *dst, uint32_t size, const void *src, uint32_t arg3);
extern void func_ov007_021c0000(void *p);
extern void func_ov007_021c02f4(void *a, void *b);
extern void func_ov007_021c026c(void *a, void *b);
extern uint8_t data_ov007_021c9d3c[];
extern const uint8_t data_ov007_021c89d0[];
extern const uint8_t data_ov007_021c8a24[];
extern const uint8_t data_ov007_021c8a6c[];
extern const uint8_t data_ov007_021c8ab8[];
extern const uint8_t data_ov007_021c8b08[];
extern const uint8_t data_ov007_021c8b50[];
extern Blk data_ov007_021c9bac;

void func_ov007_021bff3c(int mode)
{
    uint8_t buf1[0x80];
    uint8_t buf0[0x80];
    uint32_t r4 = 0x02194c74;
    uint8_t *r5;
    Blk *p;

    if (mode != 0 && mode == 1) {
        r5 = data_ov007_021c9d3c;
        func_02086b04(r5, 0x80, data_ov007_021c89d0, r4);
        func_ov007_021c0000(r5);
        r5 = buf1;
        func_02086b04(r5, 0x80, data_ov007_021c8a24, r4);
        func_ov007_021c0000(r5);
        r5 = buf0;
        func_02086b04(r5, 0x80, data_ov007_021c8a6c, r4);
        func_ov007_021c0000(r5);
    } else {
        r5 = data_ov007_021c9d3c;
        func_02086b04(r5, 0x80, data_ov007_021c8ab8, r4);
        func_ov007_021c0000(r5);
        r5 = buf1;
        func_02086b04(r5, 0x80, data_ov007_021c8b08, r4);
        func_ov007_021c0000(r5);
        r5 = buf0;
        func_02086b04(r5, 0x80, data_ov007_021c8b50, r4);
        func_ov007_021c0000(r5);
    }

    p = &data_ov007_021c9bac;
    func_ov007_021c02f4(p->fn, buf1);
    p = &data_ov007_021c9bac;
    func_ov007_021c026c(p->fn, buf0);
}
