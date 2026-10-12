#include "ffc/types.h"

typedef struct { uint32_t a,b; } Dsc;
typedef struct { uint32_t a; uint32_t b; } Pair;
typedef struct { uint32_t first; uint32_t second; uint8_t flag; } Res;

extern Pair func_0205dbc8(void *obj);
extern void func_02062984(void *object, Pair p);
extern uint32_t func_0205db04(const void *object);
extern uint32_t func_0205db2c(const void *object);
extern uint32_t func_020599c0(void *a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t func_02059868(void *a, uint32_t b, uint32_t c);
extern void func_02059c34(void *destination, const void *source);
extern uint32_t func_0204fb6c(void *o);
extern uint32_t func_0205db1c(const void *object);
extern uint32_t func_0205da88(const void *object);
extern uint32_t func_020583cc(void *a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t func_0205da5c(const void *object);
extern uint32_t func_0205fc5c(void *object, uint32_t first, uint32_t second, uint32_t third, uint32_t fourth);
extern uint32_t func_0205fbb8(void *object, uint32_t second, uint32_t third);
extern Res func_0205dad8(const void *obj);
extern uint32_t func_0205fa3c(void *object, void *p, uint32_t a2, uint32_t a3, uint32_t s0, uint32_t s1, uint32_t s2);
extern void func_02052d3c(uint32_t a, uint32_t b);
extern void func_02052c04(uint32_t a);
extern uint32_t func_0205fb50(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
typedef struct { uint32_t a,b,c,d; } Rect;
extern uint32_t func_0204fc20(void *o, Rect r, uint32_t s1, uint32_t s2, uint32_t s3, uint32_t s4);
extern uint32_t func_0205daac(const void *object);
extern Dsc func_0205db7c(const void *descriptor);
extern uint32_t func_0204fb70(void *o, uint32_t a, Dsc d, Dsc e, uint32_t s2, uint32_t s3, uint32_t s4, uint32_t s5);

uint32_t func_0205df08(uint32_t *self, uint32_t p1, uint32_t p2)
{
    Pair tmp;
    Res res, res2;
    uint32_t *r4;
    uint32_t t;
    uint32_t a;
    uint32_t b;
    uint32_t r6;
    uint32_t r7;
    Dsc dsc;
    Dsc zz;
    Rect rc;

    tmp = func_0205dbc8(&self[13]);
    func_02062984(self, tmp);
    r4 = (uint32_t *)((uint32_t *)self[7])[5];
    t = func_0205db04(&self[13]);
    self[9] = func_020599c0(r4, t, func_0205db2c(&self[13]) + 1, p1);
    self[8] = func_02059868(r4, 1, p1);
    func_02059c34((void *)self[8], (void *)self[9]);
    self[11] = func_0204fb6c((void *)self[8]);
    if (func_0204fb6c((void *)self[8]) != 0) goto L0106;
    self[11] = r4[13];
    t = func_0205db1c(&self[13]);
    self[12] = func_020583cc((void *)self[11], t, func_0205da88(&self[13]), p1);
    if (p2 != 0) goto L00b8;
    a = func_0205da5c(&self[13]);
    b = func_0205db2c(&self[13]);
    self[10] = func_0205fc5c((void *)self[9], a, b, ((uint32_t *)self[12])[6], 1);
    goto L018c;

L00b8:
    b = func_0205db2c(&self[13]);
    self[10] = func_0205fbb8((void *)self[9], b, 1);
    res = func_0205dad8(&self[13]);
    func_0205fa3c((void *)self[10], &res, 0, 0, 0, (uint32_t)-1, ((uint32_t *)self[12])[6]);
    if (res.first == 0) goto L018c;
    if (res.flag != 0) func_02052d3c(res.first, res.second);
    func_02052c04(res.first);
    goto L018c;

L0106:
    t = func_0205da88(&self[13]);
    self[12] = func_020583cc((void *)self[11], 1, t, p1);
    if (p2 != 0) goto L0140;
    a = func_0205da5c(&self[13]);
    b = func_0205db2c(&self[13]);
    self[10] = func_0205fc5c((void *)self[9], a, b, 0, 1);
    goto L018c;

L0140:
    b = func_0205db2c(&self[13]);
    self[10] = func_0205fbb8((void *)self[9], b, 1);
    res2 = func_0205dad8(&self[13]);
    func_0205fa3c((void *)self[10], &res2, 0, 0, 0, (uint32_t)-1, 0);
    if (res2.first == 0) goto L018c;
    if (res2.flag != 0) func_02052d3c(res2.first, res2.second);
    func_02052c04(res2.first);

L018c:
    r6 = func_0205fbb8((void *)self[9], 1, 1);
    func_0205fb50(r6, 0, 0, (uint32_t)-1);
    {
    
    rc.a = 0; rc.b = 0; rc.c = 0x20; rc.d = 0x20;
    func_0204fc20((void *)self[8], rc, ((uint32_t *)r6)[6], ((uint32_t *)self[12])[6], 0, 0);
    zz.a = 0; zz.b = 0;
    r7 = func_0205daac(&self[13]);
    dsc = func_0205db7c(&self[13]);
    return func_0204fb70((void *)self[8], r7, dsc, zz, ((uint32_t *)self[10])[6], ((uint32_t *)self[12])[6], 0, 0);
    }
}
