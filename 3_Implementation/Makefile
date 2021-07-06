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

PROJ_NAME = Factorial
TEST_PROJ_NAME = Test_$(PROJ_NAME)

BUILD_DIR = Build

SRC1= bin_to_dec.c
SRC2= hex_to_dec.c
SRC3 = unity.c
TEST_SRC = test.c
#unity/unity.c

INC = -Iunity

all: $(SRC1) $(SRC2) $(SRC3) $(TEST_SRC) #$(BUILD_DIR)
	gcc $(SRC1) $(SRC2) $(SRC3) $(TEST_SRC) $(INC) -o all

run:all
#.\all.exe 
	$(call $(TEST_PROJ_NAME).$(EXEC))



clean:
	$(RM) $(call FixPath/*)

