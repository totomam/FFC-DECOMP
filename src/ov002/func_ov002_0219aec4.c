#include "ffc/types.h"

extern void *func_0203b688(void *a);
extern int32_t func_ov002_021a18bc(const void *object);
extern void *func_ov002_021a18c4(const void *object, int32_t index);
extern uint8_t func_ov002_021aab40(const void *object);
extern void *func_ov002_021aac08(const void *object);
extern void *func_0205681c(uint32_t size);
extern void *func_ov002_021aace4(void *node, void *obj, uint32_t v, uint32_t z, uint32_t b, uint32_t zz);
extern void func_02056bc0(void *object, void *node);
extern void *func_0203b6fc(void);
extern void *func_0203bd04(uint32_t a, uint32_t b, uint32_t c, int32_t d);
extern void *func_ov002_021a155c(const void *c, void *obj, void *x);

void *func_ov002_0219aec4(void *a, uint32_t b, void *c)
{
    void *ret = func_0203b688(a);
    int32_t i;
    int32_t matched = 0;
    for (i = 0; i < func_ov002_021a18bc(c); i++) {
        void *obj = func_ov002_021a18c4(c, i);
        if (obj && func_ov002_021aab40(obj) == 0x12) {
            uint32_t v;
            void *node;
            matched++;
            v = *(uint16_t *)((uint8_t *)func_ov002_021aac08(obj) + 0x54);
            node = func_0205681c(0x28);
            if (node) {
                node = func_ov002_021aace4(node, obj, v, 0, b, 0);
            }
            func_02056bc0(ret, node);
        }
    }
    if (matched > 0) {
        void *list = func_0203b6fc();
        void *x = func_0203bd04(0x100ee, 0, 0, matched);
        func_02056bc0(list, x);
        for (i = 0; i < func_ov002_021a18bc(c); i++) {
            uint8_t *p = (uint8_t *)x + 0x14;
            void *obj = func_ov002_021a18c4(c, i);
            if (obj && func_ov002_021aab40(obj) == 0x12) {
                void *arg = x;
                void *r;
                if (x) {
                    arg = p;
                }
                r = func_ov002_021a155c(c, obj, arg);
                func_02056bc0(list, r);
            }
        }
        func_02056bc0(ret, list);
    }
    return ret;
}
