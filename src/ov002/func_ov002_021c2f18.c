/* cflags:  */
/* From arcnid/ffc-decomp src/battle/vector_erase_elem20_021C2F18.c, externs renamed. */
/* Matched: 0x021C2F18  size 0x6C  -O4,p
   vector<E>::erase for 0x20-byte elements: shifts elements down (memberwise copy:
   helper 0x0200B65C for two 0xC-byte sub-structs, word at +0xC, signed byte at +0x1C),
   decrements count, destroys last element via 0x021C2904 taking a ONE-WORD struct
   (iterator) BY VALUE — that by-value W arg is what reserves the phantom 3rd stack
   slot (sub sp,#0xC instead of push r3 + sub #8). Returns erase position. */
#ifndef BATTLE_H
#define BATTLE_H

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;

typedef struct BattleState BattleState;
typedef struct Vivosaur Vivosaur;
typedef struct AttackInfo AttackInfo;

u32 rand_range(u32* rng_state, u32 max);

u32* BattleState_GetRng(BattleState* state);
s32 BattleState_GetTeamSize(BattleState* state);
Vivosaur* BattleState_GetVivosaur(BattleState* state, s32 index);

s32 Vivosaur_GetAbilityInfo(Vivosaur* vivo);
s32 Vivosaur_CheckSkill(s32 info, s32 skill_id);
s32 Vivosaur_GetType(Vivosaur* vivo);

#endif

typedef signed char s8;
typedef struct {
    u8 a[0xC];
    u32 x;
    u8 b[0xC];
    s8 c;
    u8 pad[3];
} E;
typedef struct { E* data; u32 count; } Vec;
extern void func_0200b65c(void* d, void* s);
typedef struct { E* p; } W;
extern void func_ov002_021c2904(W w);

E* func_ov002_021c2f18(Vec* v, E* p)
{
    E* end;
    E* d;
    E* s;
    u32 c;
    W w;
    end = v->data + v->count;
    if ((end - p) - 1 != 0) {
        d = p;
        s = p + 1;
        if ((u32)s < (u32)end) {
            do {
                func_0200b65c(d->a, s->a);
                d->x = s->x;
                func_0200b65c(d->b, s->b);
                d->c = s->c;
                s++;
                d++;
            } while ((u32)s < (u32)end);
        }
    }
    c = v->count - 1;
    v->count = c;
    w.p = v->data + c;
    func_ov002_021c2904(w);
    return p;
}
