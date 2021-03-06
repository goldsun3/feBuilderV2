#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>

#ifdef _DEBUG

#define DEBUG_NEW new(_NORMAL_BLOCK, __FILE__, __LINE__)

#define new DEBUG_NEW

#endif
#include <Windows.h>
#include <windowsx.h>
#include <ShObjIdl.h>
#include <string>
#include <vector>
#include <memory>
#include "resource.h"
#include "Stat.h"
#include "StatsTemplate.h"
#include "ClassStats.h"
#include "CharacterStats.h"
#include "WeaponStats.h"
#include "WeaponType.h"
#include "WeaponTypeList.h"
#include "TotalStats.h"
#include "Weapon.h"
#include "WeaponList.h"
#include "Class.h"
#include "ClassList.h"
#include "Character.h"
#include "CharacterList.h"
#include "ListViewTemplate.h"
#include "ListBoxTemplate.h"
#include "DropDownTemplate.h"
#include "ButtonTemplate.h"
#include "ListViewStats.h"
#include "ListViewWeaponStats.h"
#include "ListViewTotalStats.h"
#include "ListBoxCharNames.h"
#include "ListBoxClasses.h"
#include "ListBoxWeapons.h"
#include "DropDownWeaponTypes.h"
#include "ButtonClassBaseStats.h"
#include "ButtonClassBoostedStats.h"
#include "StatCalculator.h"
