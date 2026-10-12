#include "ffc/types.h"

typedef struct {
    uint32_t lflag : 1;
    uint32_t slen : 7;
    uint32_t pad : 24;
    uint32_t llen;
    uint8_t *lptr;
} SStr;

extern void func_020095b8(void *a, void *b);
extern void func_02051bc0(void *a, void *b);
extern void *func_020059cc(void *o);
extern void func_020511e8(void *a, void *b);
extern void *func_02056830(uint32_t n);
extern void func_02084ca4(void *a, void *b, uint32_t n);
extern void *func_0205681c(uint32_t n);
extern void func_0207e890(void *o);
extern void func_0207eb28(void *a, void *b);
extern void func_ov006_0219a3ac(void *a);
extern void func_ov006_0219a404(void *a, void *b, uint32_t c);
extern void func_0207ea0c(void *o);
extern void func_ov006_0219a808(void *a, void *b);
extern void *func_020702dc(void *a, void *b);
extern void *func_0200a678(void *o);

void func_020700a4(void *self, SStr *p1, SStr *p2, SStr *p3, void *a5, void *a6, uint32_t a7, void *a8)
{
    uint8_t t54[0x48];
    SStr B;
    SStr t3c;
    SStr A;
    SStr t24;
    SStr t18;
    uint8_t t10[8];
    void *buf1;
    void *buf2;
    void *d2;
    void *d1, *d3, *d4, *obj, *x;
    uint32_t n;
    uint32_t c;
    void *src;
    uint32_t cnt;

    func_020095b8(&A, p1);
    func_02051bc0(&A, t10);
    func_020059cc(&A);
    func_020095b8(&t24, a5);
    func_020511e8(&B, &t24);
    func_020059cc(&t24);
    func_020095b8(&t18, a6);
    func_020511e8(&t3c, &t18);
    func_020059cc(&t18);

    buf1 = func_02056830(0x62);
    if (B.lflag == 0) src = (uint8_t *)&B + 2; else src = B.lptr;
    func_02084ca4(src, buf1, 0x60);
    *(uint16_t *)((uint8_t *)buf1 + 0x60) = 0;

    buf2 = func_02056830(0xc2);
    if (t3c.lflag == 0) src = (uint8_t *)&t3c + 2; else src = t3c.lptr;
    func_02084ca4(src, buf2, 0xc0);
    *(uint16_t *)((uint8_t *)buf2 + 0xc0) = 0;

    if (p1->lflag == 0) n = (((uint32_t)((uint8_t *)p1)[0] << 24) >> 25); else n = p1->llen;
    d1 = func_02056830(n + 1);
    c = !p1->lflag;
    if (c != 0) cnt = (((uint32_t)((uint8_t *)p1)[0] << 24) >> 25); else cnt = p1->llen;
    if (c != 0) src = (uint8_t *)p1 + 1; else src = p1->lptr;
    func_02084ca4(src, d1, cnt + 1);

    if (p2->lflag == 0) n = (((uint32_t)((uint8_t *)p2)[0] << 24) >> 25); else n = p2->llen;
    d2 = func_02056830(n + 1);
    c = !p2->lflag;
    if (c != 0) cnt = (((uint32_t)((uint8_t *)p2)[0] << 24) >> 25); else cnt = p2->llen;
    if (c != 0) src = (uint8_t *)p2 + 1; else src = p2->lptr;
    func_02084ca4(src, d2, cnt + 1);

    if (p3->lflag == 0) n = (((uint32_t)((uint8_t *)p3)[0] << 24) >> 25); else n = p3->llen;
    d3 = func_02056830(n + 1);
    c = !p3->lflag;
    if (c != 0) cnt = (((uint32_t)((uint8_t *)p3)[0] << 24) >> 25); else cnt = p3->llen;
    if (c != 0) src = (uint8_t *)p3 + 1; else src = p3->lptr;
    func_02084ca4(src, d3, cnt + 1);

    obj = func_0205681c(0x3c);
    ((void **)obj)[1] = buf1;
    ((void **)obj)[2] = buf2;
    ((void **)obj)[0] = d1;
    ((void **)obj)[3] = d2;
    ((void **)obj)[4] = d3;
    ((void **)obj)[5] = (void *)a7;
    ((uint8_t *)obj)[0x18] = ((uint8_t *)self)[0x48];
    if (a8 != 0) {
        func_02084ca4(a8, (uint8_t *)obj + 0x1c, 0x20);
    }

    if ((int8_t)*(int8_t *)d1 != 0) {
        func_0207e890(t54);
        func_0207eb28(t54, d1);
        func_ov006_0219a3ac(t54);
        d4 = func_02056830(0x10000);
        func_ov006_0219a404(t54, d4, 0x10000);
        func_0207ea0c(t54);
    } else {
        func_ov006_0219a3ac(0);
        d4 = func_02056830(0x10000);
        func_ov006_0219a404(0, d4, 0x10000);
    }

    func_ov006_0219a808(obj, d4);
    x = func_020702dc((uint8_t *)self + 0x58, t10);
    ((void **)x)[2] = obj;
    ((void **)x)[3] = buf1;
    ((void **)x)[4] = buf2;
    ((void **)x)[5] = d4;
    ((void **)x)[6] = d1;
    ((void **)x)[7] = d2;
    ((void **)x)[8] = d3;

    func_0200a678(&t3c);
    func_0200a678(&B);
}
