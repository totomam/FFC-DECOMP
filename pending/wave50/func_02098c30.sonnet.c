/* cflags: -lang c++ -Cpp_exceptions on */
#include "ffc/types.h"
extern "C" {
void func_02097e24(uint32_t v);
void func_0209710c(uint8_t *obj, uint8_t *data);
void func_0209d27d_unk(void);
void func_0209cc64(void *local);
extern uint8_t data_020b3178[];
}
struct Out { uint8_t b0; uint8_t b1; uint8_t pad[2]; uint8_t *ptr; };
#define OBJ(o) ((o)->ptr + *(int32_t *)(*(uint32_t *)(o)->ptr - 12))
extern "C" Out *func_02098c30(Out *o, uint8_t *p) {
    o->b0 = 0;
    o->b1 = 0;
    o->ptr = p;
#define TAIL(obj, st) obj[0x2e] = st | 4; \
        if (*(uint32_t *)(obj + 0x20) == 0) obj[0x2e] |= 1; \
        if ((uint8_t)(obj[0x2f] & obj[0x2e])) func_0209710c(obj, data_020b3178);
    try {
        uint8_t *obj = OBJ(o);
        uint8_t st = obj[0x2e];
        if (st == 0) {
            uint32_t v = *(uint32_t *)(obj + 0x30);
            if (v != 0) func_02097e24(v);
            obj = OBJ(o);
            st = obj[0x2e];
            if (st == 0) { o->b0 = 1; }
            else { TAIL(obj, st) }
        } else {
            TAIL(obj, st)
        }
    } catch (...) {
        uint8_t *obj = OBJ(o);
        if (!(uint8_t)(obj[0x2e] & 4)) obj[0x2e] |= 1;
        obj = OBJ(o);
        if ((uint8_t)(obj[0x2e] & obj[0x2f])) throw;
    }
    return o;
}
