#include "ffc/types.h"

extern uint8_t *func_ov000_0214fa54(void *p);
extern uint32_t func_0209a978(uint32_t a, uint32_t b);

typedef struct Node {
    uint8_t used;
    uint32_t id;
    struct Node *next;
    struct Node *prev;
    uint8_t pad[0xd0 - 16];
} Node;

typedef struct Pool {
    uint32_t count;
    Node *tail;
    Node *head;
} Pool;

uint8_t *func_ov000_0214fe4c(void *p)
{
    uint8_t *base = func_ov000_0214fa54(p);
    uint32_t off = 0x12c4;
    Pool *pool;
    Node *node = 0;

    pool = *(Pool **)(base + off);
    if (pool != 0) {
        uint32_t size = *(uint32_t *)(base + off + 4);
        if (size > 0xc) {
            uint32_t n = func_0209a978(size - 0xc, 0xd0);
            if (n != 0) { if (n > pool->count) {
                uint32_t i = 0;
                if (n > 0) {
                    uint8_t *arr = (uint8_t *)pool + 0xc;
                    do {
                        node = (Node *)(arr + i * 0xd0);
                        if (node->used == 0) {
                            break;
                        }
                        i++;
                    } while (i < n);
                }
                if (i < n) {
                    node->used = 1;
                    node->id = pool->count;
                    node->prev = 0;
                    node->next = pool->head;
                    pool->head = node;
                    if (node->next != 0) {
                        node->next->prev = node;
                    } else {
                        pool->tail = node;
                    }
                    pool->count++;
                }
            }
        }
    }
    }
    return (uint8_t *)node;
}
