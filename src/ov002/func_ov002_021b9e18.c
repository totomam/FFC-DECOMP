/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/virt_cond_slot10_11_9e18.c, externs renamed. */
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

/* Matched: 021B9E18 (38B) — byte flag selects slot10/11 on *(self+0x14); volatile vptr + per-arm o load defeat CSE/hoist */
typedef void (*Fn)(void*);
void func_ov002_021b9e18(void* self) {
    u32 f;
    Fn* volatile* o;
    f = *(u8*)((u8*)self + 0x13);
    if (f != 0) {
        o = (Fn* volatile*)*(void**)((u8*)self + 0x14);
        (*o)[10]((void*)o);
    } else {
        o = (Fn* volatile*)*(void**)((u8*)self + 0x14);
        (*o)[11]((void*)o);
    }
    *(u32*)((u8*)self + 0xC) = (*(u32*)((u8*)self + 0xC) & ~0xFF) | 2;
}
