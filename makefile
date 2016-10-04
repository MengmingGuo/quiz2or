all	:	doc build 

build:	a.out config

a.out:	collegemain.o college.o course.o 
	g++ collegemain.o college.o course.o -o a.out
course.o:	course.h course.cc
	g++ -c course.cc
college.o:	college.h college.cc
	g++ -c college.cc
collegemain.o:	collegemain.cc college.h course.h node.h                  	  
	g++ -c collegemain.cc

doc: 
	doxygen -g config
	doxygen config	
config: doc
	doxygen -u config
	doxygen config
clean:	
	rm -rf html/ latex/ *.o a.out config config.bak
archive:	
	tar -cvf file.tar *
