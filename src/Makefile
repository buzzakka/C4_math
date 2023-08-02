CC = gcc
CFLAGS = -Wall -Werror -Wextra
C11 = -std=c11
FUNC_FILES = functions/*.c
TEST_FILES = tests/test.c

all: rebuild

build: s21_math.a

style:
	cp clang/.clang-format .clang-format
	clang-format -n *.h $(FUNC_FILES) $(TEST_FILES)
	rm -rf .clang-format

test: clean s21_math.a
	gcc -fsanitize=address -lcheck $(TEST_FILES) s21_math.a -o test.out && ./test.out

# Для корректной работы установи lcov: brew install lcov
gcov_report: coverage run_coverage lcov genhtml open

coverage:
	gcc --coverage test.c s21*.c -o test -lcheck
run_coverage:
	./test
lcov:
	lcov -t "Core" -o s21_test.info -c -d .
genhtml:
	genhtml -o report s21_test.info
open:
	open ./report/index.html

s21_math.a: s21_math.o
	ar rc s21_math.a s21_*.o
	rm -rf *.o

s21_math.o:
	gcc -c $(FLAGS) $(FUNC_FILES)

clean:
	rm -rf s21_math *.o *.a *.info *.gcda *.gcno *.out test report/

rebuild: clean build