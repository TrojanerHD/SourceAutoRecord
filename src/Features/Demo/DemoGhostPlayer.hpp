#pragma once
#include "Demo.hpp"
#include "DemoGhostEntity.hpp"
#include "GhostEntity.hpp"

#include "Command.hpp"
#include "Variable.hpp"

#include "Modules/Console.hpp"
#include "Modules/Engine.hpp"

#include "Features/Hud/Hud.hpp"
#include "Features/Speedrun/SpeedrunTimer.hpp"

#include <algorithm>

class DemoGhostPlayer {
private:
    std::vector<DemoGhostEntity> ghostPool;
    bool isPlaying;

public:
    bool isFullGame;
    int nbDemos;

public:
    DemoGhostPlayer();

    void SpawnAllGhosts();
    void StartAllGhost();
    void ResetAllGhosts();
    void PauseAllGhosts();
    void ResumeAllGhosts();
    void DeleteAllGhosts();
    void DeleteGhostsByID(const sf::Uint32 ID);
    void KillAllGhosts(const bool newEntity);
    void UpdateGhostsPosition();
    void UpdateGhostsSameMap();
    void UpdateGhostsModel(const std::string model);
    void Sync();

    DemoGhostEntity* GetGhostByID(int ID);

    bool SetupGhostFromDemo(const std::string& demo_path, const sf::Uint32 ghost_ID, bool fullGame);
    void AddGhost(DemoGhostEntity& ghost);
    bool IsPlaying();
    bool IsFullGame();

    void PrintRecap();
    void DrawNames(HudContext* ctx);
};

extern DemoGhostPlayer demoGhostPlayer;

extern Command ghost_set_demo;
extern Command ghost_set_demos;
extern Command ghost_delete_all;
extern Command ghost_delete_by_ID;
extern Command ghost_recap;
extern Command ghost_start;
extern Command ghost_stop;
extern Command ghost_offset;
