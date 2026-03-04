#pragma once
#include <cstdint>
#include <cstddef>

namespace Offsets
{
    // -> offsets.h on a2x dumper (verified from main.cpp working version)
    constexpr uintptr_t dwEntityList       = 0x21C90D0;    // Verified working offset
    constexpr uintptr_t dwLocalPlayerPawn  = 0x2066B60;    // Verified working offset
    constexpr uintptr_t dwViewMatrix       = 0x230CFA0;    // Verified working offset
   
    // -> client.dll.hpp on a2x dumper -> C_BaseEntity
    constexpr uintptr_t m_iHealth          = 0x354;        // 852
    constexpr uintptr_t m_iTeamNum         = 0x3F3;        // 1011
    constexpr uintptr_t m_vOldOrigin       = 0x1588;       // 5512
    constexpr uintptr_t m_pGameSceneNode   = 0x338;        // 824
    constexpr std::ptrdiff_t m_hPawn              = 0x6C4;     // CBasePlayerController

    // -> CbaseModelEntity
    constexpr uintptr_t m_vecViewOffset    = 0xD58;        // 3416

    // -> C_CSPlayerPawn
    constexpr uintptr_t m_iShotsFired      = 0x270C;       // 9996
    constexpr uintptr_t m_aimPunchAngle    = 0x16CC;       // 5836
    constexpr uintptr_t m_entitySpottedState = 0x26E0;     // 9952
    
    // -> EntitySpottedState_t
    constexpr uintptr_t m_bSpotted         = 0x8;          // 8

    // -> C_CSPlayerController
    constexpr uintptr_t m_iszPlayerName    = 0x6F8;        // 1784
    constexpr uintptr_t m_hPlayerPawn      = 0x90C;        // 2316
    constexpr uintptr_t m_bPawnIsAlive     = 0x914;        // 2324

    // -> CGameSceneNode
    constexpr uintptr_t m_modelState       = 0x160;        // 352

    // -> New Offsets (Update these for Weapon/Armor indicator to work)
    constexpr uintptr_t m_ArmorValue       = 0x272C;       // C_CSPlayerPawn -> m_ArmorValue
    constexpr uintptr_t m_pClippingWeapon  = 0x3DC0;       // C_CSPlayerPawn -> m_pClippingWeapon
    constexpr uintptr_t m_AttributeManager = 0x1378;       // C_EconEntity -> m_AttributeManager (FIXED!)
    constexpr uintptr_t m_Item             = 0x50;         // C_AttributeContainer -> m_Item
    constexpr uintptr_t m_iItemDefinitionIndex = 0x1BA;    // C_EconItemView -> m_iItemDefinitionIndex
    
    constexpr uintptr_t m_bIsDefusing      = 0x26FA;       // C_CSPlayerPawn -> m_bIsDefusing
    constexpr uintptr_t m_bIsScoped        = 0x26F8;       // C_CSPlayerPawn -> m_bIsScoped
    constexpr uintptr_t m_flFlashOverlayAlpha  = 0x15EC;       // C_CSPlayerPawn -> m_flFlashOverlayAlpha
}

