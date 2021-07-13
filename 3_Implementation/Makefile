#To check if the OS is Windows or Linux and set the executable file extension and delete command accordingly
ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

PROJ_NAME = Number
TEST_PROJ_NAME = Test_$(PROJ_NAME)



SRC = hex_to_dec.c
SRC1= bin_to_dec.c
SRC2= oct_to_dec.c
TEST_SRC = unity.c\
test.c

INC = -Iinc\
-Iunity

all: $(SRC) $(SRC1) $(SRC2) $(TEST_SRC) $(BUILD_DIR)
	gcc $(SRC) $(SRC1) $(SRC2) $(TEST_SRC) $(INC) -o $(call FixPath,$(TEST_PROJ_NAME).$(EXEC))

run: all
	$(call FixPath,$(TEST_PROJ_NAME).$(EXEC))




	
 OUTPUT = $(TEST_PROJ_NAME).$(EXEC)

 TEST_OUTPUT = Test_$(TEST_PROJ_NAME).$(EXEC)

 valgrind :
	valgrind $(call FixPath,$(TEST_OUTPUT))

 coverageCheck:$(BUILD_DIR)
	g++ -fprofile-arcs -ftest-coverage -fPIC -O0 $(SRC) $(INC) -o $(OUTPUT)
	./$(OUTPUT)

 test:$(BUILD_DIR)
	gcc $(TEST_SRC) $(INC_TEST) -o $(TEST_OUTPUT) $(INCLUDE_LIBS)
	./$(TEST_OUTPUT)

clean:
	$(RM) $(call FixPath,$(BUILD_DIR)/*)








 

























 

















