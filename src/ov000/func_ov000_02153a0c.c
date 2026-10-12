#include "ffc/types.h"

struct G {
    uint8_t *p;
    uint8_t *q;
    int32_t state;
};

extern struct G data_ov000_0216e288;

extern int32_t func_ov000_02151618(uint8_t *a, void *fn, uint16_t v);
extern int32_t func_ov000_021516a4(void *fn);
extern uint64_t func_020882cc(void);
extern uint64_t func_0209a6d4(uint64_t a, uint64_t b);
extern int32_t func_ov000_021517c0(uint8_t *a);
extern int32_t func_ov000_021518e4(uint8_t *a);
extern int32_t func_ov000_02151728(void *fn);
extern void func_ov000_02153c4c(void);
extern int32_t func_ov000_02151674(void *fn);
extern void func_02084ca4(void *dst, void *src, uint32_t n);
extern void func_ov000_02153c34(void);
extern void func_ov000_02153c40(void);
extern void func_ov000_02153c58(void);
extern void func_ov000_02153c64(void);

int32_t func_ov000_02153a0c(void)
{
    uint8_t *p;
    int32_t ret;
    int32_t i;

    if (data_ov000_0216e288.q == 0 || (p = data_ov000_0216e288.p) == 0) {
        return 3;
    }
    ret = 1;
    switch (data_ov000_0216e288.state) {
    case 0:
        data_ov000_0216e288.state = ret;
        if (func_ov000_02151618(data_ov000_0216e288.q, (void *)func_ov000_02153c34, *(uint16_t *)(data_ov000_0216e288.p + 4))) {
            data_ov000_0216e288.state = 0xb;
        }
        break;
    case 2:
        data_ov000_0216e288.state = 3;
        if (!func_ov000_021516a4((void *)func_ov000_02153c40)) {
            if (*(uint64_t *)(data_ov000_0216e288.p + 8) == 0) {
                *(uint64_t *)(data_ov000_0216e288.p + 8) = func_020882cc();
            }
        } else {
            data_ov000_0216e288.state = 0xa;
        }
        break;
    case 4:
        if (func_0209a6d4((func_020882cc() - *(uint64_t *)(data_ov000_0216e288.p + 8)) << 6, 0x82ea) < 0xbb8) {
            data_ov000_0216e288.state = 2;
        } else {
            data_ov000_0216e288.state = 5;
        }
        break;
    case 5:
        data_ov000_0216e288.state = 6;
        if (func_ov000_02151728((void *)func_ov000_02153c4c)) {
            data_ov000_0216e288.state = 0xa;
        }
        break;
    case 7:
        if (func_ov000_021517c0(p + 0x10)) {
            data_ov000_0216e288.state = 0xa;
        }
        i = 0;
        *(int32_t *)(data_ov000_0216e288.p + 0x790) = i - 1;
        {
            uint16_t best = 0;
            for (; i < 16; i++) {
                if (func_ov000_021518e4(data_ov000_0216e288.p + 0x16 + i * 0x78)) {
                    if (*(uint32_t *)(data_ov000_0216e288.p + i * 0x78 + 0x10) != 0 &&
                        *(uint16_t *)(data_ov000_0216e288.p + i * 0x78 + 0x14) >= best) {
                        *(int32_t *)(data_ov000_0216e288.p + 0x790) = i;
                        best = *(uint16_t *)(data_ov000_0216e288.p + i * 0x78 + 0x14);
                    }
                }
            }
        }
        data_ov000_0216e288.state = 8;
        if (func_ov000_02151674((void *)func_ov000_02153c58)) {
            data_ov000_0216e288.state = 0xb;
        }
        break;
    case 9:
        if (*(int32_t *)(data_ov000_0216e288.p + 0x790) >= 0) {
        func_02084ca4(data_ov000_0216e288.p + 0x16 + *(int32_t *)(data_ov000_0216e288.p + 0x790) * 0x78,
                      *(uint8_t **)data_ov000_0216e288.p, 0x20);
        func_02084ca4(data_ov000_0216e288.p + 0x5a + *(int32_t *)(data_ov000_0216e288.p + 0x790) * 0x78,
                      *(uint8_t **)data_ov000_0216e288.p + 0x20, 0x20);
        *(uint32_t *)(*(uint8_t **)data_ov000_0216e288.p + 0x40) =
            *(data_ov000_0216e288.p + *(int32_t *)(data_ov000_0216e288.p + 0x790) * 0x78 + 0x7b);
        *(uint16_t *)(*(uint8_t **)data_ov000_0216e288.p + 0x44) =
            *(uint16_t *)(data_ov000_0216e288.p + *(int32_t *)(data_ov000_0216e288.p + 0x790) * 0x78 + 0x82);
        func_02084ca4(data_ov000_0216e288.p + 0x36 + *(int32_t *)(data_ov000_0216e288.p + 0x790) * 0x78,
                      *(uint8_t **)data_ov000_0216e288.p + 0x46, 10);
        ret = 2;
        } else {
            data_ov000_0216e288.state = 0xb;
        }
        break;
    case 10:
        data_ov000_0216e288.state = 8;
        if (func_ov000_02151674((void *)func_ov000_02153c64)) {
            data_ov000_0216e288.state = 0xb;
        }
        break;
    case 11:
        ret = 3;
        break;
    default:
        break;
    }
    return ret;
}
