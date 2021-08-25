defualt: run

include ${PETSC_DIR}/lib/petsc/conf/variables
include ${PETSC_DIR}/lib/petsc/conf/rules

LIB_DIR = ../..//libTest
LIBS = -L$(LIB_DIR)/lib -lTest ${PETSC_LIB}
INCLUDE = $(LIB_DIR)/include
SOURCES = main.cpp
CFLAGS = -g -Wall -Wextra -std=c++11 -pedantic-errors -I$(INCLUDE)

$(info $$CLINKER is [${CLINKER}])

OBJECTS = $(SOURCES:.cpp=.o)

run: $(OBJECTS)
	$(CLINKER) -o $@ $< ${LIBS}

%.o: %.cpp
	$(CLINKER) -c -o $@ $< $(CCFLAGS)

CLEAN:
	$(RM) $(OBJECTS)
