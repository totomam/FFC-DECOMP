/* cflags:  */
/* From arcnid/ffc-decomp src/battle/vec_sorted_insert_pri_0219c7f8.c, externs renamed. */
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

/* 0219C7F8 (size 0x7A compiled; label gap 0x7C incl 2B align pad; -O4,p)
   NOTE off-by-2: batch/manifest label 0219C7FA points past the B40F
   (push {r0-r3}) struct-spill prologue — true start is 0219C7F8.
   Semantics: sorted insert into u32 vector at self+0x10C/count+0x110,
   ordered by (u16)func_ov002_021ae5ec (BL 021AE5EC, called on key and each element,
   signed compare of truncated values -> blt). Insert via extern helper
   (BL 0205F0D4) taking &w and a 1-byte allocator struct BY VALUE
   (address-first strb pointer-local shape, PadWrap pad[11] for the
   0xC frame). Then null-checked +0x80 adjust of w.v -> func_02055ae8
   (BL 02055AE8) at self+0xE0, param-mutate self+=0x48 -> func_02056bc0
   (BL 02056BC0) with w.v reloaded from spill. */

typedef struct { u8 b; } Al;
typedef struct { u32 v; } W;
extern u32 func_ov002_021ae5ec(u32);
extern void func_0205f0d4(void* vec, u32* pos, W* pval, Al al);
extern void func_02055ae8(void* p, u32 v);
extern void func_02056bc0(void* p, u32 v);

void func_ov002_0219c7f8(void* self, W w) {
    u32* it;
    u32* end;
    s32 key;
    struct { Al a; u8 pad[11]; } z;
    Al* q;
    u32 v;
    it = *(u32**)((u8*)self + 0x10C);
    end = it + *(u32*)((u8*)self + 0x110);
    key = (u16)func_ov002_021ae5ec(w.v);
    if (it != end) {
        do {
            if (key < (s32)(u16)func_ov002_021ae5ec(*it)) break;
            it++;
        } while (it != end);
    }
    q = &z.a;
    q->b = 0;
    func_0205f0d4((u8*)self + 0x10C, it, &w, *q);
    v = w.v;
    if (v != 0) v += 0x80;
    func_02055ae8((u8*)self + 0xE0, v);
    self = (u8*)self + 0x48;
    func_02056bc0(self, w.v);
}
