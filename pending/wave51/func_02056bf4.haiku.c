#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_02087678(void *p);

typedef struct Node {
    uint32_t key;
    struct Node *next;
} Node;

typedef struct Owner {
    uint8_t pad[0x12];
    uint8_t flag;
    uint8_t pad2;
    Node *head;
    Node **tail;
    uint32_t lock;
} Owner;

void func_02056bf4(Owner *self, Node *item)
{
    uint8_t flag = self->flag;
    uint32_t *lock = &self->lock;
    Node **prev;
    Node *node;

    if (flag) {
        func_0208763c(lock);
    }
    prev = &self->head;
    node = self->head;
    while (node != 0) {
        if (node == item) {
            Node **link = &node->next;
            *prev = node->next;
            if (link == self->tail) {
                self->tail = prev;
            }
            if (flag) {
                func_02087678(lock);
            }
            return;
        }
        prev = &node->next;
        node = node->next;
    }
    if (flag) {
        func_02087678(lock);
    }
}
