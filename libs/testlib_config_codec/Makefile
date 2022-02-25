executable: configuration_codec main 
	g++ config_codec.o main.o -o configuration_codec
configuration_codec:
	g++ -Wall -c "../src/config_codec.cpp"

main:
	g++ -Wall -c "main.cpp"

clean:
	rm *.o configuration_codec 