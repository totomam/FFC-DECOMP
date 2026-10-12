#include "ffc/types.h"

extern void *func_02056aec(void);
extern void *func_0203c058(int n);
extern void *func_0203c044(int n);
extern void *func_0203b6fc(void);
extern void func_02056bc0(void *object, void *node);
extern void *func_0203b708(int n);
extern void *func_020215cc(int a, int b);
extern void *func_0203b750(void);
extern void func_020173b0(void *out, void *x);
extern void *func_02052d90(void *mar, uint32_t index);
extern void *func_02021660(int v);
extern void *func_0202157c(uint32_t v, int zero);
extern void func_02052d3c(void *a, void *b);
extern void func_02052c04(void *a);
extern void *func_02053290(void *object);
extern void *data_020b8e44;

void func_ov008_021a679c(void *obj)
{
    uint8_t *a = (uint8_t *)obj;
    uint32_t m = 0x103;
    uint8_t flag = a[m];

    if (flag) {
        void *p = *(void **)(a + 0xf4);
        void *v = ((void **)p)[a[m + 1]];
        void **dst = *(void ***)(a + m + 5);
        *dst = v;

        void *t7 = func_02056aec();
        void *t4;
        void *v0 = func_0203c058(30);
        t4 = func_0203c044(30);
        void *t6 = func_0203b6fc();
        func_02056bc0(t6, t4);
        func_02056bc0(t6, v0);

        void *t0 = func_0203b708(30);
        func_02056bc0(a + 0x14, t0);
        func_02056bc0(a + 0x14, t6);
        func_02056bc0(a + 0x14, t7);
        return;
    } else {
        struct {
            uint32_t w0;
            void *w1;
            void *w2;
            uint8_t b3;
        } s;
        int k = 15;
        void *n;
        uint32_t idx;
        void *q;
        uint8_t *e;
        void *n2;
        void *n3;

        n = func_020215cc(k, flag);
        func_02056bc0(a + 0x14, n);
        n = func_0203b750();
        func_02056bc0(a + 0x14, n);

        func_020173b0(&s, data_020b8e44);

        idx = ((uint32_t *)*(void **)(a + 0xf4))[a[k + 0xf5]];
        q = func_02052d90(s.w1, s.w2);
        e = (uint8_t *)((uint8_t *)q + *(uint32_t *)((uint8_t *)q + 0x2c)) + idx * 8;

        *(uint32_t *)(a + m + 0xd) = *(uint16_t *)(e + 2);
        n2 = func_02021660(e[1]);
        func_02056bc0(a + 0x14, n2);

        n3 = func_0202157c(*(uint32_t *)(a + m + 0xd), 0);
        func_02056bc0(a + 0x14, n3);

        if (s.w1) {
            if (s.b3) {
                func_02052d3c(s.w1, s.w2);
            }
            func_02052c04(s.w1);
        }
        func_02053290(&s);
    }
}
