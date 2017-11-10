#include "sprite.h"

sprite::sprite() {
	animationColumns = 0;
	animationRows = 0;
	moving = false;
}

void sprite::Destroy() {
	Object::Destroy();
}

void sprite::Init(ALLEGRO_BITMAP *image, ALLEGRO_DISPLAY *display, int m_maxFrame, int m_animationColumns, int m_animationRows) {
	Object::Init(100, 200, 0, 0);
	displayWidth = al_get_display_width(display);
	displayHeight = al_get_display_height(display);

	bitmapWidth = al_get_bitmap_width(image);
	bitmapHeight = al_get_bitmap_height(image);

	frameWidth = bitmapWidth / animationColumns;
	frameHeight = bitmapHeight / animationRows;



	if (image != NULL)
		sprite::image = image;

	if (display != NULL)
		sprite::display = display;

}

void sprite::Update() {

}

void sprite::Render() {

}

void sprite::resetAnimation() {

}