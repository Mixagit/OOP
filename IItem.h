#pragma once
class IItem {
public:
    virtual void influence_player(Player* p) = 0;
};

