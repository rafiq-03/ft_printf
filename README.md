<h1>ft_printf</h1>

<h2>Introduction</h2>
<p>Welcome to the <strong>ft_printf</strong> project, part of the curriculum at 42. This project aims to recreate the functionality of the standard C library function `printf`. It involves parsing format strings and outputting formatted text to the standard output stream.</p>

<h2>Objective</h2>
<p>The objective of the "ft_printf" project is to implement a custom version of the `printf` function that supports a subset of the formatting specifiers and options available in the standard `printf`. This includes handling conversions for integers, characters, strings, and additional formatting flags such as width, precision, and length modifiers.</p>

<h2>Requirements</h2>
<p>The ft_printf function must meet the following requirements:</p>
<ul>
    <li>Correctly parse format strings and handle format specifiers and flags.</li>
    <li>Support conversion specifiers for integers (%d, %i), characters (%c), strings (%s), and more.</li>
    <li>Implement additional formatting options such as width, precision, and length modifiers.</li>
    <li>Handle various edge cases and error conditions.</li>
</ul>

<h2>Key Concepts</h2>
<ul>
    <li><strong>Format Strings</strong>: Strings containing format specifiers and flags that define how data should be formatted.</li>
    <li><strong>Conversion Specifiers</strong>: Characters in format strings that indicate the type of data to be formatted and printed.</li>
    <li><strong>Width and Precision</strong>: Formatting options that specify the minimum width and precision of the output.</li>
    <li><strong>Length Modifiers</strong>: Prefixes to conversion specifiers that modify the size or interpretation of the corresponding argument.</li>
</ul>

<h2>Example</h2>
<p>Here's an example of how you might use the ft_printf function:</p>
<pre><code>#include "ft_printf.h"

int main() {
ft_printf("Hello, %s! You have %d apples.\n", "Alice", 3);
return 0;
}
</code></pre>

<h2>Conclusion</h2>
<p>The <strong>ft_printf</strong> project provides a valuable opportunity to deepen your understanding of string manipulation, parsing, and output formatting in C programming. By completing this project, you will gain practical experience in implementing a fundamental library function and improve your skills as a C programmer.</p>
