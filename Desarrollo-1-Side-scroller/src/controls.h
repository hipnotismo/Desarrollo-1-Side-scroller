#ifndef controls_H
#define controls_H

namespace Juego
{
	extern int screenHeight;
	extern int screenWidth;
	extern 	Vector2 mousePoint;

	void ControlsUpdate();
	static void ControlsDraw();
}

#endif // !controls_H
