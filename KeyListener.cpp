//
// Created by Xenedium on 3/18/2022.
//

#include "KeyListener.h"


KeyListener &KeyListener::addKeyCallback(int vkCode, F* callback) {
    this->kyClb.insert({vkCode, callback});
    return *this;
}

[[noreturn]] void KeyListener::RunEventLoop() {
    while (true)
    {
        for (const std::pair<int, F*> it : this->kyClb ){
            if (GetAsyncKeyState(it.first) & 0x8001)
            {
                CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE) it.second , nullptr, 0, nullptr);
            }
        }
        Sleep(30);
    }
}
