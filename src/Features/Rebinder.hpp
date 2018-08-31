#pragma once
#include "Feature.hpp"

#include <string>

class Rebinder : public Feature {
public:
    int saveButton;
    int reloadButton;
    std::string saveName;
    std::string reloadName;
    bool isSaveBinding;
    bool isReloadBinding;
    // Syncing index between binds
    // Demo recorder can overwrite this
    int lastIndexNumber;

public:
    Rebinder();
    void SetSaveBind(int button, const char* name);
    void SetReloadBind(int button, const char* name);
    void ResetSaveBind();
    void ResetReloadBind();
    void RebindSave();
    void RebindReload();
    void UpdateIndex(int newIndex);
};

extern Rebinder* rebinder;