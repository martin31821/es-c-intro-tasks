bindir:
	mkdir -p bin

task1: bindir task1.c
	gcc task1.c -o bin/task1

task1-run: task1
	./bin/task1

task2: bindir task2.c
	gcc task2.c -o bin/task2

task2-run: task2
	./bin/task2

task3: bindir task3.c
	gcc task3.c -o bin/task3

task3-run: task3
	./bin/task3