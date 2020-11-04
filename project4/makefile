A4.exe: driver.o Node.o TreeNode.o BinaryTree.o RedBlackTree.o 
	g++ driver.o Node.o TreeNode.o BinaryTree.o RedBlackTree.o -o A4.exe

driver.o: driver.cpp
	g++ -c driver.cpp -o driver.o

TreeNode.o: TreeNode.cpp
	g++ -c TreeNode.cpp -o TreeNode.o

Node.o: Node.cpp
	g++ -c Node.cpp -o Node.o

BinaryTree.o: BinaryTree.cpp
	g++ -c BinaryTree.cpp -o BinaryTree.o

RedBlackTree.o: RedBlackTree.cpp
	g++ -c RedBlackTree.cpp -o RedBlackTree.o
	
clean:
	rm -f driver.o TreeNode.o Node.o BinaryTree.o RedBlackTree.o A4.exe