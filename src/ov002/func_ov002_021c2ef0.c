/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/status2_double_check_021C2EF0.c, externs renamed. */
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

/* 021C2EF0 (size 0x28, -O4) — if F1(*(s+0x14)) && !F2(*(s+0x14)) then set status byte at +0xC to 2. */
extern s32 func_ov002_021c2ec4(void* p);
extern s32 func_ov002_021c2ed4(void* p);
void func_ov002_021c2ef0(u8* s) {
    if (func_ov002_021c2ec4(*(void**)(s + 0x14)) != 0) {
        if (func_ov002_021c2ed4(*(void**)(s + 0x14)) == 0) {
            *(u32*)(s + 0xC) = (*(u32*)(s + 0xC) & ~0xFF) | 2;
        }
    }
}
