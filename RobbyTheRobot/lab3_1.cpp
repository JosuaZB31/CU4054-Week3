//#include <iostream>
//#include "graphicsmanager.h"	
//
////ignore this!!
//room* room;
//robot* robby;
//graphicsmanager* picture;
////
//
//int main()
//{
//	//declare the room, robby and picture objects here
//	room = new room(2);
//	robby = new robot();
//	picture = new graphicsmanager(room, robby);
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
//	robby->left();
//	// walk to top wall (until obstacle_ahead)
//	while (!robby->obstacle_ahead(room))
//	{
//		robby->move();
//		picture->draw();
//	}
//
//	
//	//we need system pause so that we can see where robby ends up
//	system("pause");
//	
//}
