emcc simple-c.c \
-o simple-c.js \
-s WASM=1 \
-s NO_EXIT_RUNTIME=1 \
-s 'EXTRA_EXPORTED_RUNTIME_METHODS=["allocate", "intArrayFromString", "Pointer_stringify"]'