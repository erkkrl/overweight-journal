#include "overweight.hpp"
#include <iostream>
#include <xorstr.hpp>

auto __stdcall main() -> int
{
    overweight::c_ow ow;

    std::thread t1([&]() { ow.startthread1(); });
    std::thread t2([&]() { ow.startthread2(); });
    std::thread t3([&]() { ow.startthread3(); });
    std::thread t4([&]() { ow.startthread4(); });

    t1.join(); t2.join(); t3.join(); t4.join();
   
    std::cout << xorstr_("journal overweighted\n");
}

