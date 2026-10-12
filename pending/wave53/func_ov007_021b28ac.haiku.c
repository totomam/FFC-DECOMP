#include "ffc/types.h"

typedef struct {
    uint32_t a;
    void *mar;
    uint32_t idx;
    uint8_t flag;
} Res;

typedef struct {
    uint32_t unk0;
    uint32_t count;
    uint32_t off;
} Hdr;

extern uint32_t data_020b8e44;
extern uint32_t data_020b93b8;

extern void func_02017558(void *out, uint32_t v);
extern void *func_02052d90(void *mar, uint32_t index);
extern void func_02084b2c(void *d, int c, uint32_t n);
extern void func_02036df8(void *o, uint32_t v);
extern void func_02036e54(void *o, uint32_t v);
extern void func_02036e40(void *o, uint32_t v);
extern void func_02036de4(void *o, uint32_t v);
extern void func_02036e68(void *o, uint32_t v);
extern void func_0201f9a8(uint32_t obj, void *buf, uint32_t a, uint32_t b);
extern void func_02052d3c(void *mar, uint32_t idx);
extern void func_02052c04(void *mar);
extern void *func_02053290(void *object);

void func_ov007_021b28ac(int unused, uint32_t key)
{
    Res r;
    Res *p;
    uint8_t buf[0x18];
    uint16_t val = 0;
    uint32_t i;

    func_02017558(&r, data_020b8e44);
    i = 0;

    while (i < ((Hdr *)func_02052d90(r.mar, r.idx))->count) {
        uint8_t *base = (uint8_t *)func_02052d90(r.mar, r.idx);
        uint8_t *e = base + ((Hdr *)base)->off + i * 4;
        if (key == e[0]) {
            val = *(uint16_t *)(e + 2);
            break;
        }
        i++;
    }

    func_02084b2c(buf, 0, 0x18);
    func_02036df8(buf, 0);
    func_02036e54(buf, 1);
    func_02036e40(buf, 0);
    func_02036de4(buf, val);
    func_02036e68(buf, 1);
    func_0201f9a8(data_020b93b8, buf, 0, 0);

    p = &r;
    if (p->mar != 0) {
        if (p->flag != 0) {
            func_02052d3c(p->mar, p->idx);
        }
        func_02052c04(p->mar);
    }
    func_02053290(p);
}
