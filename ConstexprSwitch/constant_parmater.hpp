#pragma once

namespace lib
{
	template<auto T>
	struct constant_parameter
	{
		using type = decltype(T);
	};

	template<auto T>
	struct constexpr_parameter
	{
		using type = decltype(T);
	};
}
