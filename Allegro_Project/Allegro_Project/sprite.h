#pragma once
#include "Object.h"

class sprite :public Object {

protected:
	int sourceY, dir, animationRows, animationColumns;
	float sourceX;
	bool moving;

	int bitmapWidth;
	int bitmapHeight;
	int maxFrame;
	int currentFrame;
	int frameCount;
	int frameDelay;
	int animationDirection;

public:
	sprite();
	void virtual Destroy();
	void virtual Init(ALLEGRO_BITMAP *image = NULL, ALLEGRO_DISPLAY *display = NULL);

	void virtual Update();
	void Render();

	void resetAnimation();
};
