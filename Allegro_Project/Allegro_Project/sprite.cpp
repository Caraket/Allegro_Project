#include "sprite.h"

sprite::sprite() {
	animationColumns = 0;
	animationRows = 0;
	moving = false;
}

void sprite::Destroy() {
	Object::Destroy();
}

void sprite::Init(ALLEGRO_BITMAP *image, ALLEGRO_DISPLAY *display) {
	Object::Init(100, 200, 0, 0);
}

void sprite::Update() {

}

void sprite::Render() {

}

void sprite::resetAnimation() {

}