class CfgWeapons {
    class InventoryItem_Base_F;
    class ACE_ItemCore;

    class ACE_key_master: ACE_ItemCore {
        scopeArsenal = 0;
        author = ECSTRING(common,ACETeam);
        displayName = "Vehicle Key: Master";
        descriptionShort = CSTRING(Item_Master_Description);
        model = "\A3\weapons_F\ammo\mag_univ.p3d";
        picture = QUOTE(PATHTOF(ui\keyBlack.paa));
        scope = 2;
        class ItemInfo: InventoryItem_Base_F {
            mass = 0;
        };
    };
    class ACE_key_lockpick: ACE_key_master {
        displayName = "Lockpick";
        descriptionShort = CSTRING(Item_Lockpick_Description);
        picture = QUOTE(PATHTOF(ui\lockpick.paa));
    };
    class ACE_key_west: ACE_key_master {
        displayName = "Vehicle Key: West";
        descriptionShort = CSTRING(Item_West_Description);
        picture = QUOTE(PATHTOF(ui\keyBlue.paa));
    };
    class ACE_key_east: ACE_key_master {
        displayName = "Vehicle Key: East";
        descriptionShort = CSTRING(Item_East_Description);
        picture = QUOTE(PATHTOF(ui\keyRed.paa));
    };
    class ACE_key_indp: ACE_key_master {
        displayName = "Vehicle Key: Independent";
        descriptionShort = CSTRING(Item_Indp_Description);
        picture = QUOTE(PATHTOF(ui\keyPurple.paa));
    };
    class ACE_key_civ: ACE_key_master {
        displayName = "Vehicle Key: Civilian";
        descriptionShort = CSTRING(Item_Civ_Description);
        picture = QUOTE(PATHTOF(ui\keyGreen.paa));
    };
};
