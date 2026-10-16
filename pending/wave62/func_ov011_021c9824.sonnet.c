/* cflags: -noO4,p -O4 */
#include "ffc/types.h"
typedef struct { uint32_t a, b; } P;
typedef void *(*Fn)(void *, ...);
typedef void *(*FnP)(void *, P);
extern void func_0208763c(void *);
extern void func_02087678(void *);
extern void func_02056c4c(void *);
extern uint32_t func_0204f7d4(const void *);
extern void *func_0203b77c(void *, int, int, int);
extern void *func_0203b9cc(P, void *, int);
extern void *func_0203b878(void *, void *);
extern void func_02056bc0(void *, void *);
extern uint32_t func_02086ad4(void *, uint32_t, ...);
extern void func_02005988(void *, void *);
extern void func_02068ddc(void *, void *);
extern void *func_020059cc(void *);
extern void func_02021338(int);
extern uint32_t func_0204f7ec(const void *);
extern void *data_0213df18;
extern uint32_t data_0213df20;
extern P data_ov011_021cbda4, data_ov011_021cbac8;
extern char data_ov011_021cbdbc[];
void func_ov011_021c9824(uint8_t *self, uint32_t n)
{
    uint8_t *o = *(uint8_t **)(self + 0x3cc);
    uint8_t f = o[0x12];
    void *q = o + 0x1c;
    int z;
    char buf[0x10];
    char tmp[0xc];
    P szz[2];
    void *obj, *r;
    if (f) func_0208763c(q);
    z = *(uint32_t *)(o + 0x14) == 0;
    if (f) func_02087678(q);
    if (!z) func_02056c4c(*(void **)(self + 0x3cc));
    data_0213df20 = func_0204f7d4(data_0213df18);
    obj = func_0203b77c(&data_ov011_021cbda4, 0, 0, 0);
    szz[1].a = 0x20; szz[1].b = 0x10;
    r = (*(Fn **)obj)[8](obj);
    r = func_0203b9cc(szz[1], r, 1);
    r = func_0203b878(r, obj);
    *(void **)(self + 0x3d0) = r;
    (*(FnP **)r)[3](r, data_ov011_021cbac8);
    r = *(void **)(self + 0x3d0);
    (*(Fn **)r)[8](r, 0);
    r = *(void **)(self + 0x3d0);
    (*(Fn **)r)[10](r);
    func_02056bc0(*(void **)(self + 0x3cc), *(void **)(self + 0x3d0));
    func_02086ad4(buf, (uint32_t)data_ov011_021cbdbc, n);
    buf[0xc] += 0x20; buf[0xd] += 0x20; buf[0xe] += 0x20; buf[0xf] += 0x20;
    func_02005988(tmp, buf);
    func_02068ddc(*(void **)(self + 0x3d0), tmp);
    func_020059cc(tmp);
    if (n <= 0xf) func_02021338(0xe7);
    data_0213df20 = func_0204f7ec(data_0213df18);
}
