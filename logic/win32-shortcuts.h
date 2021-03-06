#pragma once

#ifdef _WIN32

#include <Qt>
#include <QKeySequence>
#include "shortcuts.h"

#include "export.hpp"

struct OTR_LOGIC_EXPORT win_key
{
    //win_key(int win, Qt::Key qt) : win(win), qt(qt) {}
    int win;
    Qt::Key qt;
    [[nodiscard]] static bool from_qt(const QKeySequence& qt_, int& dik, Qt::KeyboardModifiers &mods);
    [[nodiscard]] static bool to_qt(const Key& k, QKeySequence& qt_, Qt::KeyboardModifiers &mods);
};

#endif
