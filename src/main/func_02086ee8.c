#include "ffc/types.h"

typedef struct Obj Obj;
struct Obj {
    Obj *self;
    uint8_t pad[0xb4 - 4];
    void (*cb)(uint32_t);
};
typedef struct Inner {
    Obj *o;
} Inner;
typedef struct Top {
    uint8_t pad[8];
    Inner *in;
} Top;

extern Top data_021414f4;
extern void func_02088978(void);
extern void func_02086f10(void);

void func_02086ee8(uint32_t a) {
    Obj *obj = data_021414f4.in->o;
    void (*cb)(uint32_t) = obj->cb;
    if (cb != 0) {
        obj->cb = 0;
        cb(a);
        func_02088978();
    }
    func_02086f10();
}
