A3.exe: driver.o Node.o Dictionary.o BitVector.o 
	g++ driver.o Node.o Dictionary.o BitVector.o -o A3.exe

driver.o: driver.cpp
	g++ -c driver.cpp -o driver.o

Dictionary.o: Dictionary.cpp
	g++ -c Dictionary.cpp -o Dictionary.o

BitVector.o: BitVector.cpp
	g++ -c BitVector.cpp -o BitVector.o
	
Node.o: Node.cpp
	g++ -c Node.cpp -o Node.o
	
clean:
	rm -f driver.o Node.o BitVector.o Dictionary.o A3.exe