Dependences:  
- cmake
- emscripten

To build:

	mkdir build
	cd build
	emconfigure cmake -DCMAKE_TOOLCHAIN_FILE="<PATH TO EMSCRIPTEN>/emscripten/cmake/Platform/Emscripten.cmake" -G "Unix Makefiles"
	emmake make
