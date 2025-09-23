#include "lesson0922.h"
#include "Map.h"
#include "BattleShipTC.h"
#include <random>
#include "BinarySearchTree.h"

void lesson0922::TestBattlerShip()
{
	BattleShipTC Game;
	Game.Play();
}

void lesson0922::TestTree()
{
	BinarySearchTree bst;
	bst.Insert(30);
	bst.Insert(50);
	bst.Insert(10);
	bst.Insert(20);
	bst.Insert(15);
	bst.Insert(40);
	bst.PrintPreOrder();
	printf("\n");
	bst.PrintInOrder();
	printf("\n");
	bst.PrintPostOrder();
}
