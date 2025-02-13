﻿#pragma once

#include "../FunctionIncludes.h"

namespace cheat {
    class AutoLoot : public Function {
    public:
	ConfigField<bool> f_Enabled;
	ConfigField<int> f_Delay;

	Hotkey f_Hotkey;

	void GUI() override;
	void Outer() override;
	void Status() override;

	std::string getModule() override;

	static AutoLoot& getInstance();
	AutoLoot();
    };
}
