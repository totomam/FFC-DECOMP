#include "ffc/types.h"

typedef struct {
    uint32_t w0;
    uint32_t p4;
    uint32_t p8;
    uint32_t pc;
    uint32_t p10;
    uint32_t p14;
    uint32_t p18;
    uint32_t p1c;
    void *p20;
    uint32_t p24;
    uint16_t p28;
    uint16_t p2a;
    void *p2c;
} Blk;

extern uint32_t func_ov000_0214e898(void);
extern void func_02084b2c(void *p, int v, uint32_t n);
extern void func_0208bcc8(void *p, uint32_t v, uint32_t n);
extern Blk data_ov000_0216e088;
extern uint8_t data_ov000_0216e110[];
extern uint8_t data_ov000_0216e0a0[];
extern uint8_t data_ov000_0216e0a8[];

static inline uint32_t bsw(uint32_t x){ return ((x>>24)&0xff)|((x>>8)&(0xff<<8))|((x<<8)&(0xff<<16))|((x<<24)&(0xff<<24)); }

uint8_t *func_ov000_0214ee74(uint32_t a)
{
    uint32_t v;
    uint32_t z;
    Blk *b;

    v = func_ov000_0214e898();
    if (v == 0) {
        return 0;
    }
    z = 0;
    func_02084b2c(data_ov000_0216e110, 0, 0x101);
    func_0208bcc8(data_ov000_0216e110, a, 0x101);
    b = &data_ov000_0216e088;
    b->p20 = data_ov000_0216e110;
    b->p24 = z;
    b->p28 = 2;
    b->p2a = 4;
    b->p2c = data_ov000_0216e0a0;
    b->p18 = (uint32_t)(Blk*)data_ov000_0216e0a0 - 0x18;
    b->p1c = z;
    b->w0 = bsw(v);
    return data_ov000_0216e0a8;
}
