#include <iostream>

#include "Args.hpp"

using YAGP::Args;

int main(int argc, char **argv)
{
	Args args(argc, argv);

	auto int_opt = args.get<int>("-int");
	auto bool_opt = args.get<bool>("-flag");
	auto str_view_opt = args.get<std::string_view>("-name");

	if (int_opt.has_value())
		std::cout << "int_opt + 5? " << int_opt.value() + 5 << '\n';

	if (bool_opt.has_value())
		std::cout << "Flag set\n";
	if (str_view_opt.has_value())
		std::cout << "Name: " << str_view_opt.value() << '\n';

	auto noisy_float = args.get<float>("-float", true);
	if (noisy_float.has_value())
		std::cout << "noisy_float + 2.5? " << noisy_float.has_value() + 2.5 << '\n';
}