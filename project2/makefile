A2.exe: driver.o LinkedList.o DoubleLinkedList.o LinkedNode.o Node.o
	g++ driver.o LinkedList.o DoubleLinkedList.o LinkedNode.o Node.o -o A2.exe

driver.o: driver.cpp
	g++ -c driver.cpp -o driver.o

DoubleLinkedList.o: DoubleLinkedList.cpp
	g++ -c DoubleLinkedList.cpp -o DoubleLinkedList.o

LinkedList.o: LinkedList.cpp
	g++ -c LinkedList.cpp -o LinkedList.o

LinkedNode.o: LinkedNode.cpp
	g++ -c LinkedNode.cpp -o LinkedNode.o
	
Node.o: Node.cpp
	g++ -c Node.cpp -o Node.o
	
clean:
	rm -f driver.o Node.o LinkedNode.o LinkedList.o DoubleLinkedList.o A2.exe