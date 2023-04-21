#pragma once

#include <stdint.h>

// Constants for Amstrad CPC Hardware

#if SPECCY
// ROM
const uint16_t	kROMStart = 0x0000;
const uint16_t	kROMSize = 0x4000;
const uint16_t	kROMEnd = kROMStart + kROMSize - 1;

const uint16_t	kRAMStart = kROMStart + kROMSize;

// pixel memory
const uint16_t	kScreenPixMemStart = 0x4000; 
const uint16_t	kScreenPixMemSize = 0x1800; 
const uint16_t	kScreenPixMemEnd = kScreenPixMemStart + kScreenPixMemSize - 1;

// attribute memory
const uint16_t	kScreenAttrMemStart = 0x5800;
const uint16_t	kScreenAttrMemSize = 32 * 24;
const uint16_t	kScreenAttrMemEnd = kScreenAttrMemStart + kScreenAttrMemSize - 1;
#endif