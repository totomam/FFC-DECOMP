/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" void *func_02056aec(void);
extern "C" void func_02056bc0(void *object, void *node);
struct S { uint8_t pad[0x14]; uint8_t obj[0xe0]; uint32_t *pa; uint32_t *pb; };
inline void st(S &s, uint32_t *S::*m, uint32_t v) { *(s.*m) = v; }
extern "C" void func_ov007_021a36cc(S *self, uint32_t val)
{
    st(*self, &S::pa, 1);
    st(*self, &S::pb, val);
    func_02056bc0(self->obj, func_02056aec());
}
