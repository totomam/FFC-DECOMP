#include "ffc/types.h"

extern void func_02056c9c(void *o, uint32_t x);
extern void func_02015e8c(void *out, void *x);
extern void *func_02052d90(void *mar, uint32_t index);
extern void func_02052d3c(void *a, uint32_t b);
extern void func_02052c04(void *p);
extern void *func_02053290(void *o);
extern void func_02015ecc(void *out, void *x);
extern uint32_t func_ov002_02198d90(uint32_t x);
extern uint32_t func_0203bb94(void *p, uint32_t a, uint32_t b, uint32_t c);
extern void func_02056bc0(void *o, uint32_t v);
extern uint32_t func_ov002_02198e48(uint32_t x);
extern char data_ov002_021d4ce0[];
extern void *data_020b8e44;
extern uint32_t data_ov002_021d5008[];

typedef struct Ref {
    uint32_t unk0;
    void *p;
    uint32_t q;
    uint8_t flag;
} Ref;

typedef struct Mar {
    uint32_t unk0;
    uint32_t count;
    int32_t arrOff;
    uint8_t flag;
} Mar;

void *func_ov002_0219cc1c(uint8_t *a, uint32_t param) {
    Ref s;
    Ref r;
    Ref *pr;
    Ref *ps;
    Mar *m;
    uint32_t i;
    uint32_t *vt;

    func_02056c9c(a, 0);
    *(void **)a = (void *)data_ov002_021d4ce0;
    *(uint32_t *)(a + 0x88) = 2;
    *(uint32_t *)(a + 0x8c) = 0;
    *(uint8_t *)(a + 0x90) = 0;
    *(uint32_t *)(a + 0x94) = param;

    pr = &r;
    func_02015e8c(pr, data_020b8e44);
    m = func_02052d90(pr->p, pr->q);
    *(uint32_t *)(a + 0x98) = m->flag;
    if (pr->p != 0) {
        if (pr->flag != 0) {
            func_02052d3c(pr->p, pr->q);
        }
        func_02052c04(pr->p);
    }
    func_02053290(pr);

    if (*(uint32_t *)(a + 0x98) != 0) {
        func_02015ecc(&s, data_020b8e44);
        i = 0;
        m = func_02052d90(s.p, s.q);
        if (m->count <= 0) goto skip_loop;
        {
            do {
                m = func_02052d90(s.p, s.q);
                {
                    uint32_t e = *(uint32_t *)((uint8_t *)m + m->arrOff + i * 4);
                    uint16_t id = *(uint16_t *)((uint8_t *)m + e);
                    if (func_ov002_02198d90(*(uint32_t *)(a + 0x94)) == (uint32_t)id) {
                        m = func_02052d90(s.p, s.q);
                        {
                            uint8_t *elem = (uint8_t *)m + *(uint32_t *)((uint8_t *)m + m->arrOff + i * 4);
                            uint8_t *ptr = elem + *(uint32_t *)(elem + 4);
                            *(uint32_t *)(a + 0x8c) = func_0203bb94(ptr, 1, 1, 0);
                        }
                        break;
                    }
                }
                i++;
                m = func_02052d90(s.p, s.q);
            } while (i < m->count);
        }

    skip_loop:
        func_02056bc0(a + 0x48, *(uint32_t *)(a + 0x8c));

        if (func_ov002_02198e48(param) != 1) {
            vt = *(uint32_t **)(*(uint32_t *)(a + 0x8c));
            ((void (*)(void *))vt[10])(*(void **)(a + 0x8c));
            vt = *(uint32_t **)(*(uint32_t *)(a + 0x8c));
            ((void (*)(void *, uint32_t))vt[8])(*(void **)(a + 0x8c), 3);
        }

        ps = &s;
        if (ps->p != 0) {
            if (ps->flag != 0) {
                func_02052d3c(ps->p, ps->q);
            }
            func_02052c04(ps->p);
        }
        func_02053290(ps);
    }

    {
        uint32_t *pd = data_ov002_021d5008;
        uint32_t d0 = pd[0];
        uint32_t d1 = pd[1];
        *(uint32_t *)(a + 0x80) = d0;
        *(uint32_t *)(a + 0x84) = d1;
    }
    return a;
}
