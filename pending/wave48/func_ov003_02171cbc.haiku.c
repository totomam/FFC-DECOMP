#include "ffc/types.h"

extern void func_02018718(void *buf, uint32_t v);
extern void *func_02052d90(void *mar, uint32_t index);
extern uint32_t func_0201bcc0(uint32_t g, uint32_t a, uint32_t b);
extern void func_02052d3c(void *mar, uint32_t index);
extern void func_02052c04(void *mar);
extern void *func_02053290(void *object);
extern uint32_t data_020b8e44;
extern uint32_t data_020b93b8;

typedef struct {
    uint32_t f0;
    void *mar;
    uint32_t idx;
    uint8_t flag;
} Loc;

typedef struct {
    uint32_t f0;
    uint32_t f4;
    uint32_t count0;
    uint32_t base0;
    uint32_t count1;
    uint32_t base1;
} Dec;

uint32_t func_ov003_02171cbc(uint32_t unused, uint32_t mode)
{
    Loc loc;
    uint32_t count = 0;
    uint32_t i;
    Dec *d;
    uint8_t *e;

    func_02018718(&loc, data_020b8e44);
    i = 0;
    if (mode == 0) {
        d = func_02052d90(loc.mar, loc.idx);
        if (d->count0 > 0) {
            do {
                d = func_02052d90(loc.mar, loc.idx);
                e = (uint8_t *)d + d->base0 + (i << 3);
                if (e[2] == 0) {
                    if (func_0201bcc0(data_020b93b8, 11, i) == 0) {
                        count++;
                    }
                } else {
                    count++;
                }
                i++;
            } while (i < ((Dec *)func_02052d90(loc.mar, loc.idx))->count0);
        }
    } else {
        d = func_02052d90(loc.mar, loc.idx);
        if (d->count1 > 0) {
            do {
                d = func_02052d90(loc.mar, loc.idx);
                e = (uint8_t *)d + d->base1 + (i << 3);
                if (e[2] == 0) {
                    if (func_0201bcc0(data_020b93b8, 12, i) == 0) {
                        count++;
                    }
                } else {
                    count++;
                }
                i++;
            } while (i < ((Dec *)func_02052d90(loc.mar, loc.idx))->count1);
        }
    }

    if (loc.mar != 0) {
        if (loc.flag) {
            func_02052d3c(loc.mar, loc.idx);
        }
        func_02052c04(loc.mar);
    }
    func_02053290(&loc);
    return count;
}
