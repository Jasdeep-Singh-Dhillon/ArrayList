SOURCES = main.cpp ArrayList.h ArrayList.cpp List.h List.cpp

run: arraylist
	./arraylist

arraylist: $(SOURCES)
	g++ -o arraylist $(SOURCES)

clean:
	rm arraylist