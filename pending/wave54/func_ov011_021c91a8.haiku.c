#include "ffc/types.h"

typedef struct Loc {
    uint32_t pad;
    void *ptr;
    uint32_t len;
    uint8_t flag;
} Loc;

typedef struct Ent {
    uint8_t pad[0x3c];
    uint32_t count;
    uint32_t tbl_off;
} Ent;

extern void func_02005988(void *a, const void *b);
extern void func_02017b58(void *o, void *p);
extern Ent *func_02052d90(const void *mar, uint32_t index);
extern uint32_t func_0201a3a0(void *object, const void *third);
extern void *func_020159c8(void *o, uint32_t id);
extern void *func_02017ec8(void *o, uint32_t v);
extern uint32_t func_02005efc(void *object, void *first, ...);
extern void *func_020059cc(void *object);
extern void func_02052d3c(void *p, uint32_t q);
extern void func_02052c04(void *p);
extern void *func_02053290(void *object);
extern char data_ov011_021cbd94[];
extern char data_ov011_021cbd98[];
extern void *data_020b8e44;

void func_ov011_021c91a8(void *a, void *b)
{
    Loc loc;
    uint32_t buf[3];
    Ent *e;
    uint32_t i;
    char *s;

    func_02005988(a, data_ov011_021cbd94);
    if (*(uint32_t *)((uint8_t *)b + 0x3b8) == 0) {
        return;
    }
    func_02017b58(&loc, data_020b8e44);
    e = func_02052d90(loc.ptr, loc.len);
    if (e->count != 0) {
        for (i = 0; i < 3; i++) {
            buf[i] = 0;
        }
        for (i = 0; i < e->count; i++) {
            if (i != 0) {
                func_0201a3a0(buf, data_ov011_021cbd98);
                func_0201a3a0(buf, func_020159c8(data_020b8e44, 0x8b));
                func_0201a3a0(buf, data_ov011_021cbd98);
            }
            func_0201a3a0(buf, func_02017ec8(data_020b8e44, ((uint16_t *)((uint8_t *)e + e->tbl_off))[i]));
        }
        s = (buf[0] & 1) ? (char *)buf[2] : (char *)buf + 1;
        func_02005efc(a, func_020159c8(data_020b8e44, 0x6e), s);
        func_020059cc(buf);
    }
    if (loc.ptr != 0) {
        if (loc.flag) {
            func_02052d3c(loc.ptr, loc.len);
        }
        func_02052c04(loc.ptr);
    }
    func_02053290(&loc);
}
