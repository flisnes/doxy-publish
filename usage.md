# Generating Documentation with Doxygen

1. Prepare Your Doxyfile:
    Generate a default Doxyfile with:

    ```bash
    doxygen -g
    ```
    Customize it as needed.
    For this minimal project the following changes were made:

    ```bash
    PROJECT_NAME     = "Doxygen Publishing on GitHub Pages"
    OUTPUT_DIRECTORY = docs
    HTML_OUTPUT      = html
    HAVE_DOT         = YES
    ```

2. Run Doxygen:
    Execute:
    
    ```bash
    doxygen Doxyfile
    ```

3. View the Documentation:
    
    Open the generated index.html file in your browser (usually found in the output directory you specified, in this case `docs/html/index.html`).