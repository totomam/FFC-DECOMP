#include "ffc/types.h"

extern uint32_t data_020b1fd8[];
extern uint32_t data_020b2034[];
extern void func_02052538(void *p);
extern void func_02062868(void *p);

typedef void (*vfn_t)(void *);

uint32_t *func_0206e944(uint32_t *self) {
    uint32_t **o = (uint32_t **)self;
    o[0] = data_020b1fd8;
    if (o[7] != 0) {
        uint32_t *obj = o[7];
        uint32_t *vt = (uint32_t *)obj[0];
        ((vfn_t)vt[1])(obj);
    }
    if (o[8] != 0) {
        uint32_t *obj = o[8];
        uint32_t *vt = (uint32_t *)obj[0];
        ((vfn_t)vt[1])(obj);
    }
    func_02052538(data_020b2034);
    func_02062868(self);
    return self;
}
