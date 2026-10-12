#include "ffc/types.h"

typedef struct Key {
    uint32_t lo;
    uint32_t hi;
} Key;

typedef struct Guard {
    void *p;
    uint32_t x;
    uint32_t y;
    void *saved;
    uint8_t flag;
} Guard;

typedef struct Obj {
    uint32_t f0;
    uint32_t f1;
    uint32_t f2;
    uint32_t f3;
    uint32_t f4;
    uint32_t f5;
    uint32_t f6;
    uint32_t f7;
    uint32_t f8;
    uint32_t f9;
    uint32_t f10;
    uint32_t f11;
    uint32_t f12;
    uint32_t f13;
} Obj;

extern char data_0213e14c[];
extern char data_0213e140[];
extern char data_0213e144[];

extern void func_0208763c(void);
extern void func_02087678(void *);
extern void func_02052a78(void *, void *, void *);
extern void *func_0205681c(uint32_t);
extern void *func_02062c50(void *, Key, uint32_t);
extern Obj *func_02052b0c(void *, void *);

void *func_020633dc(Key k, uint32_t a2)
{
    Guard g;
    Obj *obj;
    g.saved = data_0213e14c;
    g.flag = 1;
    if (g.flag) {
        func_0208763c();
    }
    func_02052a78(&g, data_0213e140, &k);
    if (g.p != data_0213e144) {
        obj = (Obj *)((Obj *)g.p)->f5;
    } else {
        obj = func_0205681c(0x88);
        if (obj != 0) {
            obj = func_02062c50(obj, k, a2);
        }
        func_02052b0c(data_0213e140, &k)->f2 = (uint32_t)obj;
    }
    obj->f13 = obj->f13 + 1;
    if (g.flag) {
        func_02087678(g.saved);
    }
    return obj;
}
