#include "ffc/types.h"

extern uint32_t func_02092864(const uint8_t *text);
extern int32_t func_ov000_02168768(void *list);
extern void *func_ov000_0216876c(void *list, int32_t idx);
extern uint32_t func_ov000_0216743c(const uint8_t *text);
extern uint8_t data_ov001_0218fbec[];
extern uint8_t data_ov001_0218fc14[];
extern uint8_t data_ov001_0218fc1c[];

typedef struct Ctx {
    void *list;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
    uint32_t flag;
} Ctx;

typedef struct Item {
    uint32_t type;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
    uint32_t f14;
} Item;

#define ADDPAD() do { uint32_t s_ = t >> 31; uint32_t u_ = (t << 30) - s_; uint32_t r_ = s_ + ((u_ << 2) | (u_ >> 30)); t = 4 - r_; if (t != 4) sum += t; } while (0)

uint32_t func_ov001_02173694(uint8_t *p) {
    Ctx *c = *(Ctx **)(p + 0x164);
    uint32_t sum = 0;
    uint32_t a28, a24, a1c, a20, base, x2;
    int32_t n, i;
    uint32_t t;

    if (c->flag != 0) {
        a28 = 0xc;
        a24 = 0xc;
        a1c = 0xc;
        a20 = 0;
    } else {
        base = func_02092864(data_ov001_0218fbec);
        a28 = base + 0x2f;
        a24 = base + 0x4c;
        a1c = 0;
        a20 = base + 4;
    }

    n = func_ov000_02168768(c->list);
    for (i = 0; i < n; i++) {
        Item *it = (Item *)func_ov000_0216876c(c->list, i);
        if (it->type == 0) {
            sum += a28;
            sum += func_02092864((const uint8_t *)it->f4);
            sum += it->fc;
        } else if (it->type == 1) {
            sum += a24;
            sum += func_02092864((const uint8_t *)it->f4);
            sum += func_02092864((const uint8_t *)it->f10);
            x2 = ((Item *)func_ov000_0216876c(*(void **)(p + 0x168), i))->fc;
            sum += x2;
            if (c->flag == 0) {
                sum += func_02092864((const uint8_t *)it->fc);
            } else {
                t = func_02092864((const uint8_t *)it->f4);
                ADDPAD();
                t = func_02092864((const uint8_t *)it->f10);
                ADDPAD();
                t = x2;
                ADDPAD();
            }
        } else if (it->type == 2) {
            sum += a24;
            sum += func_02092864((const uint8_t *)it->f4);
            sum += func_02092864((const uint8_t *)it->f14);
            sum += it->fc;
            if (c->flag == 0) {
                sum += func_02092864((const uint8_t *)it->f10);
            } else {
                t = func_02092864((const uint8_t *)it->f4);
                ADDPAD();
                t = func_02092864((const uint8_t *)it->f14);
                ADDPAD();
                t = it->fc;
                ADDPAD();
            }
        } else if (it->type == 3) {
            sum += a1c;
            sum += func_ov000_0216743c((const uint8_t *)it->f8);
            t = func_ov000_0216743c((const uint8_t *)it->f8);
            ADDPAD();
            sum += func_02092864(data_ov001_0218fc14);
            t = func_02092864(data_ov001_0218fc14);
            ADDPAD();
            sum += func_02092864(data_ov001_0218fc1c);
            t = func_02092864(data_ov001_0218fc1c);
            ADDPAD();
        } else {
            return 0;
        }
    }
    return sum + a20;
}
