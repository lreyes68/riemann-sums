APPNAME=app

all:
	g++ main.cpp -g -I. -o $(APPNAME)

clean:
	rm -f $(APPNAME)