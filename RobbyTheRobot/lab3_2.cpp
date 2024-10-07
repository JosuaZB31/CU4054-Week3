//#include <iostream>
//#include "GraphicsManager.h"	
//
////Ignore this!!
//Room* room;
//Robot* robby;
//GraphicsManager* picture;
////
//
//int main()
//{
//	//declare the room, robby and picture objects here
//	room = new Room(2);
//	robby = new Robot();
//	picture = new GraphicsManager(room, robby);
//
//	while (!robby->obstacle_ahead(room))
//	{
//		robby->move();
//		picture->draw();
//	}
//	// turn right
//	robby->right();
//	// walk to second obstacle (until obstacle_ahead)
//	while (!robby->obstacle_ahead(room))
//	{
//		robby->move();
//		picture->draw();
//	}
//	// turn left
//	robby->left();
//	// walk to top wall (until obstacle_ahead)
//	while (!robby->obstacle_ahead(room))
//	{
//		robby->move();
//		picture->draw();
//	}
//	std::cout <<("Top of the room has been found") << std::endl;
//	//we need system pause so that we can see where robby ends up
//	system("Pause");
//	
//}
