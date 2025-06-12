#include <iostream>
#include <fstream>
#include <filesystem>
#include <thread>
#include <chrono>
#include <xorstr.hpp>

#include "overweight.hpp"

namespace fs = std::filesystem;

namespace overweight
{
    c_ow obj;

    auto c_ow::encherocudelinguica(const std::string& dir, int quantidade) -> void
    {
        for (int i = 0; i < quantidade; ++i)
        {
            std::string filename = dir + xorstr_("") + std::to_string(i) + xorstr_(".temp");
            std::ofstream arquivo(filename);
            if (arquivo.is_open())
            {
                arquivo.close();
            }
            fs::remove(filename);
            std::this_thread::sleep_for(std::chrono::milliseconds(0));
        }
    }

    auto __stdcall c_ow::startthread1() -> void { obj.encherocudelinguica(fs::temp_directory_path().string(), 40000); }

    auto __stdcall c_ow::startthread2() -> void { obj.encherocudelinguica(fs::temp_directory_path().string(), 40000); }

    auto __stdcall c_ow::startthread3() -> void { obj.encherocudelinguica(fs::temp_directory_path().string(), 40000); }

    auto __stdcall c_ow::startthread4() -> void { obj.encherocudelinguica(fs::temp_directory_path().string(), 40000); }
}
