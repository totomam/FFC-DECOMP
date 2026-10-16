#include "ffc/types.h"
typedef void (*Fn)(void*);
extern uint8_t data_ov003_0217bda0[];
extern void func_02054144(int);
extern void func_02056db0(void*);
extern void func_02056844(void*);
void* func_ov003_02178664(uint8_t* self) {
    *(void**)self = data_ov003_0217bda0;
    if (*(void**)(self + 0xb4) != 0) {
        void* p;
        func_02054144(0);
        p = *(void**)(self + 0xb4);
        if (p != 0) {
            if (p != 0) (*(Fn**)p)[1](p);
            *(void**)(self + 0xb4) = 0;
        }
    }
    func_02056db0(self);
    func_02056844(self);
    return self;
}
