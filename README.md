Dependences:  
- cmake
- emscripten

To build:

	mkdir build
	cd build
	emconfigure cmake -DCMAKE_TOOLCHAIN_FILE="<PATH TO EMSCRIPTEN>/emscripten/cmake/Platform/Emscripten.cmake" -G "Unix Makefiles"
	emmake make


Or (Tested):
	
	mkdir build
        cd build
	emconfigure cmake
	emmake make
	emcc CMakeFiles/flappycxx.html.dir/src/main.cpp.o modules/flappycxx/libFlappyCxx.so modules/flappyenge/libFlappyEngine.so --preload-file ./res/@/res/ --use-preload-plugins -o test.html
	emrun test.html

