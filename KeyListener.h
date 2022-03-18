//
// Created by Xenedium on 3/18/2022.
//

#ifndef SIMPLEEVENTLOOP_KEYLISTENER_H
#define SIMPLEEVENTLOOP_KEYLISTENER_H

#include <Windows.h>
#include <map>
#include <functional>
using F = void();
class KeyListener {
public:
    [[noreturn]] void RunEventLoop();
    KeyListener& addKeyCallback(int vkCode, F* callback);
private:
    std::map<int, F*> kyClb;
};


#endif //SIMPLEEVENTLOOP_KEYLISTENER_H
