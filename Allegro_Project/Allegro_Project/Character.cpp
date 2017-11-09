#include "Character.h"

Character::Character() {

	x = 0;
	y = 0;
	velx = 0;
	vely = 0;

	animationColumns = 0;
	animationRows = 0;
	moving = false;
}


// Update Character location and call sprite Update()
void Character::Update() {
	sprite::Update();
}

// Initialize any class specific variables and call generic variables
void Character::Init() {
	sprite::Init(NULL, NULL);
}


// Call sprite::Render() to render sprite
void Character::Render() {
	sprite::Render();
}