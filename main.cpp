#include <iostream>
#include "KeyListener.h"


int main() {
    auto app = KeyListener()
            .addKeyCallback(0x41, []() -> void{
                std::cout << "A key is being or has been pressed \n";
            })
            .addKeyCallback(0x58, [](){
                std::cout << "X key is being or has been pressed \n";
            })
            .addKeyCallback(0x45, [](){
                std::cout << "E key is being or has been pressed \n";
            });

    app.RunEventLoop();
}
