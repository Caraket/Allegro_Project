#include "mainfunction.h"


int main() {

	mainfunction mainfunction;

	mainfunction.init(false, true);

	mainfunction.controlVariables(60, 640, 480);
	mainfunction.checkDisplay();
	mainfunction.installComponents();
	mainfunction.registerEventSources();

	//Start game loop
	mainfunction.gameLoop();
	
	mainfunction.Destroy();

	return 0;
}