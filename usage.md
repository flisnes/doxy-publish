# Usage Instructions

## Building and Running the Project

1. **Compile the C Files:**  
   Use your favorite C compiler. For example, on Linux:
   ```bash
   gcc dummy.c utils.c -o dummy_app
   ```

2. **Run the Executable:**

    ```bash
    ./dummy_app
    ```

    You should see output similar to:

    ```makefile
        Sum: 7
        Product: 12
    ```

## Generating Documentation with Doxygen

1. Prepare Your Doxyfile:
    If you haven't already, generate a default Doxyfile with:

    ```bash
    doxygen -g
    ```
    Then customize it as needed (for example, set the output directory to docs/html).

2. Run Doxygen:
    Execute:
    
    ```bash
    doxygen Doxyfile
    ```

3. View the Documentation:
    
    Open the generated index.html file in your browser (usually found in the output directory you specified).