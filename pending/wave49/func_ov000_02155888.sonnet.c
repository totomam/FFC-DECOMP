#include "ffc/types.h"

typedef struct { uint32_t pad; uint8_t *base; } GlobalBlock;
extern GlobalBlock data_ov000_0216e294;

#define M32(b, o) (*(uint32_t *)((uint8_t *)(b) + (o)))
#define MP(b, o) (*(uint8_t **)((uint8_t *)(b) + (o)))

extern int32_t func_02086fe4(uint8_t *p);
extern void func_02086fbc(uint8_t *p);
extern void func_ov000_02155e38(uint32_t code);
extern uint32_t func_ov000_02155a80(void);
extern uint64_t func_020882cc(void);
extern uint64_t func_0209a6d4(uint64_t a, uint64_t b);
extern void func_0208763c(uint8_t *p);
extern void func_02087678(uint8_t *p);
extern void func_020871d8(uint32_t ms);
extern void func_ov000_021569f0(uint8_t *q);
extern uint32_t func_ov000_021557d0(uint32_t s);

void func_ov000_02155888(void)
{
    int32_t n = 0;
    uint32_t state;
    
    uint8_t *q;
    uint32_t v;
    uint32_t r;
    uint64_t t0;
    uint64_t t1;
    uint64_t e;

    for (;;) {
        
        q = MP(data_ov000_0216e294.base, 0x1314);
        if (M32(q, 0x1be0) != 0) {
            if (func_02086fe4(q + 0x1b74) == 0) {
                func_02086fbc(MP(data_ov000_0216e294.base, 0x1314) + 0x1b74);
            }
        }
        
        v = M32(MP(data_ov000_0216e294.base, 0x1314), 0x1020);
        if (v != 8) {
            M32(data_ov000_0216e294.base, 0x1008) = 0x4e84;
            v = M32(MP(data_ov000_0216e294.base, 0x1314), 0x1020);
            if (v == 7) {
                func_ov000_02155e38(0x14);
                return;
            }
            if (n > 2) {
                if (v == 2) {
                    func_ov000_02155e38(9);
                    return;
                }
                if (v == 3) {
                    func_ov000_02155e38(0xb);
                    return;
                }
                func_ov000_02155e38(0xd);
                return;
            }
            goto common;
        } else {
            r = func_ov000_02155a80();
            if (r == 0x15) {
                func_ov000_02155e38(0x15);
                return;
            }
            switch (r) {
            case 0x10:
                if (n > 2) {
                    func_ov000_02155e38(0x10);
                    return;
                }
                n++;
                state = 0;
                break;
            case 0x11:
                func_ov000_02155e38(r);
                return;
            default:
                if (n >= 2) {
                    func_ov000_02155e38(r);
                    return;
                }
            common:
                n++;
                state = 1;
                break;
            }
        }

        t0 = func_020882cc();
        t1 = func_020882cc();
        e = func_0209a6d4((t1 - t0) << 6, 0x82ea);
        while (e < 0x1388) {
            
            func_0208763c(data_ov000_0216e294.base + 0x13d8);
            if (M32(data_ov000_0216e294.base, 0x13f0) == 1) {
                M32(data_ov000_0216e294.base, 0x1008) = 0x4e84;
                func_02087678(data_ov000_0216e294.base + 0x13d8);
                func_ov000_02155e38(0x14);
                return;
            }
            func_02087678(data_ov000_0216e294.base + 0x13d8);
            func_020871d8(0x1388);
            t1 = func_020882cc();
            e = func_0209a6d4((t1 - t0) << 6, 0x82ea);
        }

        func_ov000_021569f0(MP(data_ov000_0216e294.base, 0x1314));
        
        func_0208763c(data_ov000_0216e294.base + 0x13d8);
        r = func_ov000_021557d0(state);
        M32(data_ov000_0216e294.base, 0x1004) = r;
        if (M32(data_ov000_0216e294.base, 0x1004) != 0) {
            M32(data_ov000_0216e294.base, 0x1008) = 0x4e84;
            func_02087678(data_ov000_0216e294.base + 0x13d8);
            return;
        }
        func_02087678(data_ov000_0216e294.base + 0x13d8);
    }
}
