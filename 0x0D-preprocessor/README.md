THE C PREPROCESSOR

preprocessor is the first stage in compiling c files.
The preprocessor scans the source code for preprocessor directives, such as #include and #define, and performs the necessary textual transformations. It handles tasks like including header files, expanding macros, and conditional compilation. The output of this stage is a preprocessed source code file.

There are also object-luke macros
An object-like macro is a simple identifier which will be replaced by a code fragment. It is called object-like because it looks like a data object in code that uses it. They are most commonly used to give symbolic names to numeric constants.

You create macros with the ‘#define’ directive. ‘#define’ is followed by the name of the macro and then the token sequence it should be an abbreviation for, which is variously referred to as the macro's body, expansion or replacement list. 
