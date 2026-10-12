#include "ffc/types.h"

typedef struct {
    uint8_t pad[0x24];
    uint16_t type;
    uint16_t sub;
} Mar;

typedef struct {
    uint8_t pad[0x3b8];
    uint32_t v;
} P1;

typedef struct {
    uint32_t a;
    void *obj;
    uint32_t idx;
    uint8_t flag;
} Loc;

extern void func_02005988(void *a, void *b);
extern void func_02017b58(void *out, void *v);
extern Mar *func_02052d90(void *mar, uint32_t index);
extern uint32_t func_020159c8(void *a, uint32_t b);
extern uint32_t func_02005efc(void *object, uint32_t first, ...);
extern void func_02052d3c(void *a, uint32_t b);
extern void func_02052c04(void *a);
extern void *func_02053290(void *object);
extern uint8_t data_ov011_021cbd94[];
extern void *data_020b8e44;

void func_ov011_021c90e0(void *p0, uint32_t *p1)
{
    Loc loc;
    uint32_t code;
    uint32_t id;
    Mar *m;

    func_02005988(p0, data_ov011_021cbd94);
    if (p1[0xee] == 0) {
        return;
    }
    {
        func_02017b58(&loc, data_020b8e44);
        m = func_02052d90(loc.obj, loc.idx);
        if (m->type != 0) {
            switch (m->type) {
            case 1: code = 0x85; break;
            case 2: code = 0x86; break;
            case 3: code = 0x87; break;
            case 4: code = 0x88; break;
            case 5: code = 0x89; break;
            case 6: code = 0x8a; break;
            default: code = 0x8a; break;
            }
            switch (m->sub) {
            case 1: id = 0x6f; break;
            case 2: id = 0x70; break;
            case 3: id = 0x71; break;
            default: id = 0x71; break;
            }
            {
                uint32_t a = func_020159c8(data_020b8e44, id);
                uint32_t b = func_020159c8(data_020b8e44, code);
                func_02005efc(p0, a, b);
            }
        }
        if (loc.obj != 0) {
            if (loc.flag != 0) {
                func_02052d3c(loc.obj, loc.idx);
            }
            func_02052c04(loc.obj);
        }
        func_02053290(&loc);
    }
}
