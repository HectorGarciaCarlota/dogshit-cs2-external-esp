#pragma once

#include <vector>

#include "../external-cheat-base/renderer/renderer.h"
#include "../external-cheat-base/client.dll.h"
#include "../external-cheat-base/offsets.h"

struct viewMatrix
{
	float m[16];
};

namespace esp
{
	inline std::vector<uintptr_t> entities;
	inline viewMatrix vm = {};


	inline uintptr_t pID;
	inline uintptr_t modBase;


	void frame();
	void loop();
	void render();

	bool w2s(const vec3& world, vec2& screen, float m[16]);

}