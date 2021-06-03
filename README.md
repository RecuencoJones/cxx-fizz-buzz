## Setup

```
mkdir -p build && cd build
conan install ..
cmake ..
```

## Build && Run

```
make main
./bin/main
```

## Test

```
make test
./bin/test
```

## TDD

```
find ../src ../test | entr sh -c 'cmake ..; make test; ./bin/test'
```