# Hello!
This is a test C++ project.

## git commands
Initialize:
```bash
$ git init
$ git branch -M master
$ git add .
$ git commit -m "Initial commit"
```

Synchronize:
```bash
$ git remote add origin https://github.com/DeMineArchiver/fcm3-3.git
$ git push -u origin master
```

## Contents
### `CMakeLists.txt`
```cmake
cmake_minimum_required(VERSION 3.2)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(fcm3-3 CXX)

file(GLOB SOURCE_FILES "src/*.cpp")

add_executable(${PROJECT_NAME} ${SOURCE_FILES})
```

### `.gitignore`
```bash
build/
```
### `src/main.cpp`
```cpp
#include <iostream>

using namespace std;

int main() {
    cout << "Hello, world!\n";

    system("pause");
    return 0;
}
```
