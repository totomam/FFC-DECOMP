#include "ffc/types.h"

typedef struct { uint32_t f0; uint32_t a; uint32_t b; uint8_t flag; } Ffc28;
typedef struct { uint32_t f0; uint32_t count; uint32_t tab; } Ffc52;
typedef struct { uint32_t flag : 1; uint32_t rest : 31; } Hdr;

extern uint32_t data_020b93b8;
extern uint32_t data_020b8e44;
extern uint8_t data_ov003_0217a130[];
extern uint8_t data_ov003_0217a0f4[];

extern void func_0201d014(uint32_t, uint32_t, void *, uint32_t);
extern uint32_t func_02036be4(void *);
extern void func_020168ac(void *, uint32_t);
extern Ffc52 *func_02052d90(uint32_t, uint32_t);
extern uint32_t func_02005efc(void *object, void *first, ...);
extern void func_02005988(void *, void *);
extern uint32_t func_02052000(void *);
extern void func_020059cc(void *);
extern void func_02052d3c(uint32_t, uint32_t);
extern void func_02052c04(uint32_t);
extern void func_02053290(void *);

uint32_t func_ov003_02156dd4(uint8_t *self, uint8_t *obj, uint32_t a2, uint32_t a3)
{
    uint8_t buf38[16];
    uint8_t *sv;
    Ffc28 s28;
    uint8_t buf1c[12];
    uint8_t buf10[12];
    uint8_t *p;
    uint8_t *str;
    uint32_t idx, dat, val8, i, r4;
    uint8_t *ent;
    Ffc52 *m;

    func_0201d014(data_020b93b8, *(uint16_t *)(self + 0xac), buf38, a3);
    idx = func_02036be4(buf38);
    p = *(uint8_t **)(self + 0xa8);
    dat = *(uint32_t *)(p + *(uint32_t *)(p + 0x70) + (idx << 2));
    func_020168ac(&s28, data_020b8e44);

    val8 = 0;
    i = 0;
    if (func_02052d90(s28.a, s28.b)->count > 0) {
        do {
            m = func_02052d90(s28.a, s28.b);
            ent = (uint8_t *)m + m->tab + (i << 2);
            if (a3 == *(uint16_t *)ent) {
                val8 = *(uint16_t *)(ent + 2);
                break;
            }
            i++;
        } while (i < func_02052d90(s28.a, s28.b)->count);
    }

    func_02005efc(obj, data_ov003_0217a130, p + dat, a2, val8);
    if (((Hdr *)obj)->flag == 0) str = obj + 1;
    else str = *(uint8_t **)(obj + 8);
    func_02005988(buf1c, str);
    r4 = (func_02052000(buf1c) == 0);
    func_020059cc(buf1c);
    if (r4) {
        func_02005efc(obj, data_ov003_0217a0f4, p + dat, a2);
    }

    if (((Hdr *)obj)->flag == 0) sv = obj + 1;
    else sv = *(uint8_t **)(obj + 8);
    func_02005988(buf10, sv);
    r4 = (func_02052000(buf10) == 0);
    func_020059cc(buf10);
    if (r4) {
        if (s28.a != 0) {
            if (s28.flag) func_02052d3c(s28.a, s28.b);
            func_02052c04(s28.a);
        }
        func_02053290(&s28);
        return 0;
    }
    if (s28.a != 0) {
        if (s28.flag) func_02052d3c(s28.a, s28.b);
        func_02052c04(s28.a);
    }
    func_02053290(&s28);
    return (uint32_t)sv;
}
