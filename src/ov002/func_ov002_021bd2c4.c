/* cflags:  */
/* From arcnid/ffc-decomp src/battle/dual_vec_erase_by_key_021BD2C4.c, externs renamed. */
/* Matched: 021BD2C4 (size 0x80) -- flags: -O4,p */
/* Dual-vector erase-by-key: scans 2 vectors (stride 0x1C at self+0x8C), elem size 0xC;
   on key match sets *(self+0xD0)=0x3C and calls func_ov002_021bd4f8(vec, it, Al()) [erase], then next vector.
   Keys: It one-word struct by value (func_ov002_021c8e18/func_ov002_021bd4f8); end = whole-struct copy of it then +=n
   (defeats cmp fold while CSEing the load); al wrapped in struct for address-first strb;
   plain s32 i spills naturally to [sp]. func_ov002_021c8e18=021C8E18, func_ov002_021bd4f8=021BD4F8. */
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


typedef struct { u8 b; } Al;
typedef struct { u8* p; } It;

extern void* func_ov002_021c8e18(It it);
extern void func_ov002_021bd4f8(void* arr, It pos, Al a);

void func_ov002_021bd2c4(void* self, void* key)
{
    s32 i;
    s32 t;
    i = 0;
    do {
        u32 off = i * 0x1C;
        It it;
        It end;
        it.p = *(u8**)((u8*)self + off + 0x8C);
        end = it; end.p += *(s32*)((u8*)self + off + 0x90) * 0xC;
        if (it.p != end.p) {
            do {
                if (key == func_ov002_021c8e18(it)) {
                    struct { Al a; } w;
                    Al* q = &w.a;
                    *(u32*)((u8*)self + 0xD0) = 0x3C;
                    q->b = 0;
                    func_ov002_021bd4f8((u8*)self + 0x8C + off, it, *q);
                    break;
                }
                it.p += 0xC;
                end.p = *(u8**)((u8*)self + off + 0x8C) + *(s32*)((u8*)self + off + 0x90) * 0xC;
            } while (it.p != end.p);
        }
        t = i + 1;
        i = t;
    } while (t < 2);
}
