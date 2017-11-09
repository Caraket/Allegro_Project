#pragma once
#include "sprite.h"


class Character: public sprite {

protected:

public:
	Character();

	void virtual Update();
	void virtual Init();
	void virtual Render();

};