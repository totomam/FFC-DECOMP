#include "ffc/types.h"
extern void func_02088f30(void);
typedef struct { uint8_t b[36]; } Payload;
typedef struct { uint16_t key; uint8_t flag; uint8_t pad; Payload payload; } Entry;
typedef struct { uint8_t pad[0x44]; Entry *table; } Ctx;

void func_0201d0ac(Ctx *ctx0, uint32_t id0, Entry *rec0) {
    Ctx *ctx = ctx0;
    uint32_t id = id0;
    Entry *rec = rec0;
    uint32_t i;
    if (rec->flag == 0) {
        for (i = 0; i < 100; i++) {
            if (ctx->table[i].key == id) { ctx->table[i].key = 0; return; }
        }
        return;
    }
    for (i = 0; i < 100; i++) {
        if (ctx->table[i].key == id) {
            ctx->table[i].key = rec->key;
            ctx->table[i].flag = rec->flag;
            ctx->table[i].payload = rec->payload;
            ctx->table[i].key = id;
            return;
        }
    }
    for (i = 0; i < 100; i++) {
        if (ctx->table[i].key == 0) {
            ctx->table[i].key = rec->key;
            ctx->table[i].flag = rec->flag;
            ctx->table[i].payload = rec->payload;
            ctx->table[i].key = id;
            return;
        }
    }
    func_02088f30();
}
