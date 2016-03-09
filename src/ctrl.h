#ifndef FLAPPYCTRL_H
#define FLAPPYCTRL_H

#include <memory>

#include "world.h"
#include "menu.h"
#include "gl/glworldview.h"
#include "core/gworldctrl.h"
#include "core/gcontext.h"

class Ctrl: public GWorldCtrl {
public:
    enum State {MENU, GAME};
    enum Symbol {START, STOP};

    void init();
    void putSymbol(Symbol symbol);
    inline int getScore() const {return score;}
    inline int getBestScore() const {return bestScore;}

protected:
    void procState();

private:
    std::queue<Symbol> symbols;
    State state = MENU;
    int score = 0;
    int bestScore = 0;

    State automat(Symbol symbol);
};

#endif // FLAPPYCTRL_H
